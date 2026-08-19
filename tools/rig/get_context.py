#!/usr/bin/env python3
"""get_context.py <addr|symbol> — everything needed to write a candidate.

Gathers, for one layout row:
  * the EE disassembly of the row (written to a file, first N lines inline)
  * a Ghidra decompilation (cached under out/rig/ghidra_cache/)
  * an m2c draft (skipped when the row uses VU0/COP2 -- m2c cannot model those)
  * callees with their registry symbol + DWARF prototype, arity VERIFIED or UNKNOWN
  * string references
  * class layouts from the E3 DWARF types dump for `this` and every argument class
  * the source of the most similar already-matched function (same decl_file first)
  * a ready-to-compile candidate skeleton with the right includes and signature

Large blobs go to files under out/rig/context/<addr>/; the JSON returns paths.
"""

from __future__ import annotations

import argparse
import difflib
import json
import re
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Optional, Tuple

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc

DISASM_PREVIEW = 60
GHIDRA_CACHE = rc.RIG_OUT / "ghidra_cache"
CONTEXT_DIR = rc.RIG_OUT / "context"

PRIMITIVE = {
    "void", "bool", "char", "signed char", "unsigned char", "short",
    "unsigned short", "int", "unsigned int", "long", "unsigned long",
    "long long", "unsigned long long", "float", "double",
}


# ---------------------------------------------------------------- prototypes


def split_args(text: str) -> List[str]:
    out, depth, cur = [], 0, ""
    for ch in text:
        if ch in "<([":
            depth += 1
        elif ch in ">)]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def prototype_for(symbol: str) -> dict:
    """Best known prototype for a mangled symbol.

    arity_status is VERIFIED when it comes from the E3 DWARF (real debug info)
    or from an Itanium-mangled name (the mangling encodes the argument types);
    UNKNOWN when we only have a func_XXXXXXXX stub.
    """
    if not symbol:
        return {"text": None, "arity": None, "arity_status": "UNKNOWN", "source": None}
    d = rc.dwarf_by_linkage().get(symbol)
    dem = rc.demangle(symbol)
    if symbol.startswith("_Z"):
        args_text = dem[dem.index("(") + 1 : dem.rindex(")")] if "(" in dem else ""
        args = [a for a in split_args(args_text) if a and a != "void"]
        return {
            "text": dem,
            "arity": len(args),
            "args": args,
            "arity_status": "VERIFIED",
            "source": "dwarf" if d else "itanium-mangling",
            "decl_file": (d or {}).get("decl_file"),
        }
    return {
        "text": f"{symbol}(...)",
        "arity": None,
        "args": [],
        "arity_status": "UNKNOWN",
        "source": "registry-stub",
        "decl_file": None,
    }


def class_names_from(dem: str) -> List[str]:
    """Owning class (for `this`) plus every class-typed argument."""
    out: List[str] = []
    if not dem:
        return out
    qual = dem.split("(")[0]
    parts = qual.split("::")
    if len(parts) >= 2:
        owner = "::".join(parts[:-1])
        out.append(owner)
    if "(" in dem:
        args_text = dem[dem.index("(") + 1 : dem.rindex(")")]
        for a in split_args(args_text):
            base = a.replace("const", "").replace("*", "").replace("&", "").strip()
            base = re.sub(r"\s+", " ", base)
            if base and base not in PRIMITIVE and re.match(r"^[A-Za-z_][A-Za-z0-9_:]*$", base):
                out.append(base)
    seen, uniq = set(), []
    for n in out:
        if n not in seen:
            seen.add(n)
            uniq.append(n)
    return uniq


# ---------------------------------------------------------------- ghidra / m2c


def ghidra_decompile(addr: int, timeout: float = 180.0) -> Optional[str]:
    GHIDRA_CACHE.mkdir(parents=True, exist_ok=True)
    cache = GHIDRA_CACHE / f"{addr:08x}.c"
    if cache.exists():
        return cache.read_text()
    try:
        cp = subprocess.run(
            ["ghidra-cli", "decompile", "--project", "kh2", "--program", "SLPM_666.75",
             f"FUN_{addr:08x}"],
            capture_output=True, text=True, timeout=timeout,
        )
    except (OSError, subprocess.TimeoutExpired):
        return None
    if cp.returncode != 0 or not cp.stdout.strip():
        return None
    try:
        data = json.loads(cp.stdout)
    except json.JSONDecodeError:
        return None
    if not isinstance(data, list) or not data:
        return None
    code = data[0].get("code") or ""
    if not code.strip():
        return None
    cache.write_text(code)
    return code


def m2c_draft(addr: int, end: int, outdir: Path, timeout: float = 120.0) -> Optional[str]:
    outdir.mkdir(parents=True, exist_ok=True)
    dis_dir = outdir / "spim"
    dis_dir.mkdir(exist_ok=True)
    env = dict(**{k: v for k, v in __import__("os").environ.items()})
    env["KH2_ELF"] = str(rc.SLPM)
    try:
        subprocess.run(
            ["kh2-disasm-func", f"0x{addr:08x}", f"0x{end:08x}", str(dis_dir)],
            capture_output=True, text=True, timeout=timeout, env=env,
        )
    except (OSError, subprocess.TimeoutExpired):
        return None
    files = sorted(dis_dir.glob("*.text.s"))
    if not files:
        return None
    try:
        cp = subprocess.run(
            ["m2c", "--target", "mipsee", "-f", f"func_{addr:08X}", str(files[0])],
            capture_output=True, text=True, timeout=timeout, env=env,
        )
    except (OSError, subprocess.TimeoutExpired):
        return None
    if cp.returncode != 0 or not cp.stdout.strip():
        return None
    return cp.stdout


# ---------------------------------------------------------------- similar source


def _opcode_seq(addr: int, size: int) -> List[int]:
    data = rc.orig_bytes(addr, size)
    seq = []
    for i in range(0, len(data) - 3, 4):
        w = int.from_bytes(data[i : i + 4], "little")
        op = w >> 26
        seq.append((op << 6) | (w & 0x3F) if op == 0 else op << 6)
    return seq


def extract_definition(source: Path, func_name: str) -> Optional[str]:
    """Pull one function definition out of a TU by brace matching."""
    if not source.exists():
        return None
    text = source.read_text(errors="ignore")
    pat = re.compile(rf"(^|\n)([^\n;{{}}]*?\b{re.escape(func_name)}\s*\([^;{{}}]*\)[^;{{}}]*?)\{{")
    m = pat.search(text)
    if not m:
        return None
    start = m.start(2)
    i = text.index("{", m.end(2) - 1)
    depth = 0
    for j in range(i, len(text)):
        if text[j] == "{":
            depth += 1
        elif text[j] == "}":
            depth -= 1
            if depth == 0:
                return text[start : j + 1]
    return None


def most_similar_matched(target_addr: int, size: int, decl_file: str) -> Optional[dict]:
    status = rc.layout_status()
    regs = rc.registry_symbols()
    e3 = rc.e3_map()
    tseq = _opcode_seq(target_addr, size)
    best = None
    best_score = 0.0
    lo, hi = size * 0.4, size * 2.5
    for row in rc.layout():
        mode, src = status.get(row.addr, ("asm", ""))
        if mode != "cxx" or not src or row.addr == target_addr:
            continue
        if not (lo <= row.size <= hi):
            continue
        bonus = 0.0
        if decl_file and (e3.get(row.addr, {}).get("decl_file") == decl_file):
            bonus = 0.35
        sm = difflib.SequenceMatcher(None, tseq, _opcode_seq(row.addr, row.size), autojunk=False)
        score = sm.quick_ratio()
        if score + bonus <= best_score:
            continue
        score = sm.ratio() + bonus
        if score > best_score:
            best_score = score
            best = (row, src)
    if best is None:
        return None
    row, src = best
    sym = regs.get(row.addr, "")
    dem = rc.demangle(sym) if sym else ""
    name = dem.split("(")[0].split("::")[-1] if dem else sym
    snippet = extract_definition(rc.ROOT / src, name) if name else None
    return {
        "addr": f"0x{row.addr:08x}",
        "symbol": sym or None,
        "demangled": dem or None,
        "source_file": src,
        "similarity": round(best_score, 3),
        "snippet": snippet,
    }


# ---------------------------------------------------------------- skeleton


def include_candidates(decl_file: str) -> List[str]:
    """Repo headers whose path echoes the original decl_file's basename."""
    if not decl_file:
        return []
    stem = Path(decl_file.replace("\\", "/")).stem
    hits = []
    for p in sorted((rc.ROOT / "src").rglob("*.hpp")):
        if p.stem == stem:
            hits.append(p.relative_to(rc.ROOT / "src").as_posix())
    for p in sorted((rc.ROOT / "src").rglob("*.h")):
        if p.stem == stem:
            hits.append(p.relative_to(rc.ROOT / "src").as_posix())
    return hits


def build_skeleton(target, dem: str, includes: List[str], proto: dict) -> str:
    """A candidate file that compiles as-is and defines exactly target.symbol."""
    lines = ['#include "common/types.h"']
    for inc in includes[:3]:
        lines.append(f'#include "{inc}"')
    lines.append("")
    lines.append(f"// layout row 0x{target.addr:08x}, {target.size} bytes")
    lines.append(f"// the definition MUST produce the symbol: {target.symbol}"
                 f"  (source: {target.symbol_origin})")
    if dem and dem != target.symbol:
        lines.append(f"// original name (E3 debug build): {dem}")
    lines.append("")

    if target.symbol_origin == "stub" or "::" not in (dem or ""):
        # unregistered / weak evidence: define the neutral C symbol, never invent
        # a mangled C++ name.
        lines.append(f'extern "C" u32 {target.symbol}(/* TODO args -- arity UNKNOWN */) {{')
        lines.append("    /* TODO */")
        lines.append("}")
        return "\n".join(lines) + "\n"

    qual = dem.split("(")[0]
    parts = qual.split("::")
    ns = "::".join(parts[:-2]) if len(parts) > 2 else ""
    cls = parts[-2]
    fn = parts[-1]
    args = proto.get("args") or []
    arglist = ", ".join(f"{a} a{i}" for i, a in enumerate(args))
    if ns:
        lines.append(f"namespace {ns} {{")
    lines.append(f"struct {cls}Layout {{")
    lines.append("    // every member needs an explicit byte offset from class_layouts;")
    lines.append("    // pad unknown gaps with u8 padNN[...]; // 0xNN  and say so")
    lines.append("};")
    lines.append("")
    lines.append(f"/* {dem} */")
    lines.append(f"int {cls}::{fn}({arglist}) {{")
    lines.append("    /* TODO */")
    lines.append("}")
    if ns:
        lines.append(f"}}  // namespace {ns}")
    return "\n".join(lines) + "\n"


# ---------------------------------------------------------------- main


def get_context(spec: str, *, ghidra: bool = True, m2c: bool = True,
                similar: bool = True, preview: int = DISASM_PREVIEW) -> dict:
    t = rc.resolve(spec)
    outdir = CONTEXT_DIR / f"{t.addr:08x}"
    outdir.mkdir(parents=True, exist_ok=True)

    e3row = rc.e3_map().get(t.addr, {})
    sym = t.symbol
    # the human-readable name is the E3 one when we have it, even if the symbol
    # we must actually emit is still a func_XXXXXXXX stub
    dem = e3row.get("demangled") or rc.demangle(sym)
    decl_file = e3row.get("decl_file", "")

    dis = rc.disasm(t.addr, t.end)
    dis_path = outdir / "disasm.txt"
    dis_path.write_text(dis + "\n")
    scan = rc.scan_row(t.addr, t.size)

    out: dict = {
        "ok": True,
        "addr": f"0x{t.addr:08x}",
        "end": f"0x{t.end:08x}",
        "size": t.size,
        "status": t.mode,
        "symbol_to_define": t.symbol,
        "symbol_origin": t.symbol_origin,
        "e3_symbol": e3row.get("mangled") or None,
        "demangled": dem or None,
        "decl_file": decl_file or None,
        "confidence": e3row.get("confidence") or None,
        "uses_vu0": scan["uses_vu0"],
        "n_calls": scan["n_calls"],
        "prototype": prototype_for(sym) if sym else prototype_for(""),
        "files": {"disasm": str(dis_path)},
        "disasm_preview": dis.splitlines()[:preview],
        "disasm_truncated": len(dis.splitlines()) > preview,
    }

    # callees
    cal = []
    for a in scan["calls"]:
        csym = rc.registry_symbols().get(a, "")
        crow = rc.e3_map().get(a, {})
        if not csym:
            csym = crow.get("mangled", "")
        p = prototype_for(csym)
        cal.append(
            {
                "addr": f"0x{a:08x}",
                "symbol": csym or None,
                "demangled": crow.get("demangled") or (rc.demangle(csym) if csym else None),
                "prototype": p["text"],
                "arity": p["arity"],
                "arity_status": p["arity_status"],
                "decl_file": crow.get("decl_file") or None,
            }
        )
    out["callees"] = cal

    out["strings"] = rc.string_refs(dis)

    # class layouts
    layouts = {}
    for cn in class_names_from(dem):
        blk = rc.type_block(cn)
        if blk:
            layouts[cn] = blk
    out["class_layouts"] = layouts
    out["class_layouts_missing"] = [
        cn for cn in class_names_from(dem) if cn not in layouts
    ]

    # ghidra
    if ghidra:
        g = ghidra_decompile(t.addr)
        if g:
            gp = outdir / "ghidra.c"
            gp.write_text(g)
            out["files"]["ghidra"] = str(gp)
            out["ghidra"] = g if len(g) < 4000 else g[:4000] + "\n/* ... truncated, see file ... */"

    # m2c (meaningless for VU0 macro-mode code)
    if m2c and not scan["uses_vu0"]:
        d = m2c_draft(t.addr, t.end, outdir)
        if d:
            mp = outdir / "m2c.c"
            mp.write_text(d)
            out["files"]["m2c"] = str(mp)
            out["m2c"] = d if len(d) < 6000 else d[:6000] + "\n/* ... truncated, see file ... */"
    elif scan["uses_vu0"]:
        out["m2c"] = None
        out["m2c_skipped"] = "row uses VU0/COP2 instructions; m2c cannot model them"

    # nearest matched source
    if similar:
        s = most_similar_matched(t.addr, t.size, decl_file)
        if s:
            out["similar_matched"] = s

    # does the repo already declare this class?
    cls_qual = ""
    if dem and "::" in dem.split("(")[0]:
        cls_qual = "::".join(dem.split("(")[0].split("::")[:-1])
    existing = rc.find_class_header(cls_qual) if cls_qual else None
    if existing:
        method = dem.split("(")[0].split("::")[-1]
        existing["declares_this_method"] = method in existing["declared_members"]
        existing["tu"] = rc.tu_for_header(existing["header"])
        out["existing_class_header"] = existing
        out["class_decl_policy"] = (
            f'{cls_qual} is already declared in {existing["header"]} -- include it '
            f'(#include "{existing["include"]}") and do NOT redeclare the class. '
            "Read members through a reinterpret_cast to a local *Layout struct with "
            "explicit byte offsets. promote.py adds the missing member declaration to "
            "that header for you."
        )
    else:
        out["existing_class_header"] = None
        out["class_decl_policy"] = (
            "no repo header declares this class yet: declare a methods-only class in "
            "the candidate (house style, see src/anon/*.cpp) plus a local *Layout "
            "struct carrying the byte offsets."
        )

    incs = include_candidates(decl_file)
    out["suggested_includes"] = incs
    out["include_style"] = (
        'candidate files are compiled with -I src, so use repo-relative includes '
        'like #include "tz/ui_accessors.hpp" (NOT the ../relative form used inside src/)'
    )
    skel = build_skeleton(t, dem, incs, out["prototype"])
    sk_path = outdir / "skeleton.cpp"
    sk_path.write_text(skel)
    out["files"]["skeleton"] = str(sk_path)
    out["skeleton"] = skel
    return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("target")
    ap.add_argument("--no-ghidra", dest="ghidra", action="store_false")
    ap.add_argument("--no-m2c", dest="m2c", action="store_false")
    ap.add_argument("--no-similar", dest="similar", action="store_false")
    ap.add_argument("--preview", type=int, default=DISASM_PREVIEW)
    args = ap.parse_args()
    rc.json_out(get_context(args.target, ghidra=args.ghidra, m2c=args.m2c,
                            similar=args.similar, preview=args.preview))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
