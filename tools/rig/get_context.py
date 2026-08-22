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
        placeholder = bool(re.match(r"^(?:func|wtarget|ctarget|u_call\d*|u_tail\d*)_[0-9a-fA-F]{8}\b", dem))
        if placeholder and not d:
            # _Z16u_call4_00139d78jjjj etc.: the argument list was invented by the
            # placeholder generator, it is NOT evidence of the real arity
            return {
                "text": dem,
                "arity": len(args),
                "args": args,
                "arity_status": "PLACEHOLDER (argument list is a guess -- read the call site: "
                                "what is in a0..a3 right before the jal?)",
                "source": "placeholder-mangling",
                "decl_file": None,
            }
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
    # the definition may be spelled `name(`, `Class::name(`, `name_impl(` (asm-label
    # form for stubs) or any identifier bound to the symbol with asm("name")
    names = [re.escape(func_name), re.escape(func_name) + r"_impl"]
    am = re.search(r'([A-Za-z_]\w*)\s*\([^;{}]*\)\s*asm\s*\(\s*"' + re.escape(func_name) + r'"\s*\)\s*;', text)
    if am:
        names.append(re.escape(am.group(1)))
    m = None
    for nm in names:
        pat = re.compile(rf"(^|\n)([^\n;{{}}]*?\b{nm}\s*\([^;{{}}]*\)[^;{{}}]*?)\{{")
        m = pat.search(text)
        if m:
            break
    if not m:
        return None
    start = m.start(2)
    # include the preceding rig-style preamble (asm-label declarations, locals)
    # when the definition belongs to a "// ---- 0x... ----" block
    blk = text.rfind("// ---- 0x", 0, start)
    if blk != -1 and text.count("\n", blk, start) <= 25:
        start = blk
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
    notes = []
    if snippet and src.startswith("src/anon/"):
        # auto-generated anon code leans on helpers from <tu>_decls.hpp; a
        # standalone candidate has to spell them out
        n_addr = len(re.findall(r"\baddr_D_[0-9a-fA-F]{8}\(\)", snippet))
        snippet = re.sub(r"\baddr_D_([0-9a-fA-F]{8})\(\)", r"(u32)&D_\1", snippet)
        if n_addr:
            notes.append(f"{n_addr} addr_D_XXXXXXXX() helper(s) rewritten to (u32)&D_XXXXXXXX; "
                         "declare each as extern \"C\" u32 D_XXXXXXXX asm(\"D_XXXXXXXX\");")
        if re.search(r"\bFn_[0-9a-fA-F]{8}\b", snippet):
            notes.append("Fn_XXXXXXXX are function-pointer typedefs from the anon decls header: "
                         "define your own typedef in the candidate")
        notes.append("this twin lives in src/anon (auto-generated style): copy its logic, not its "
                     "raw-address idioms -- use the registry names the context gives you")
    return {
        "addr": f"0x{row.addr:08x}",
        "notes": notes or None,
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


_BUILTIN_WORDS = {"char", "short", "int", "long", "unsigned", "signed", "float", "double",
                  "void", "bool", "const", "volatile", "u8", "u16", "u32", "u64", "s8", "s16",
                  "s32", "s64", "f32", "f64"}


def _c_arg(a: str) -> str:
    """Rewrite a demangled C++ argument type so a standalone candidate compiles:
    pointers/references to unknown classes become void*; unknown value types stay
    (the model must then declare them) but are flagged."""
    t = a.strip()
    words = [w for w in t.replace("*", " ").replace("&", " ").split() if w]
    if all(w in _BUILTIN_WORDS for w in words):
        return t
    if "*" in t or "&" in t:
        return f"void* /* {t} */"
    # a value-typed enum/class argument: an enum is an int on the EE ABI, and a
    # small struct by value is rare; u32 keeps the declaration compilable and
    # the call codegen identical for enums.
    return f"u32 /* {t} -- enum/class by value; u32 if it is an enum */"


def callee_decls(callees: List[dict]) -> List[str]:
    """extern "C" declarations bound to the exact registry symbol via an asm label.

    The model must never retype a mangled name (one wrong character is a silent
    link failure); it copies these lines instead.  Return types are free (not
    mangled); for member functions the object pointer is a leading argument.
    """
    if not callees:
        return []
    out = ["// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----",
           "// return types are not mangled -- change them freely (u32 / s32 / void / void*).",
           "// a NON-static member function takes the object pointer as its FIRST argument:",
           "//   add `void* self` in front of the listed args when the call site puts an object in $a0."]
    seen = set()
    for c in callees:
        sym = c.get("symbol")
        link = c.get("link_symbol") or sym
        if not link or link in seen:
            continue
        seen.add(link)
        dem = c.get("demangled") or sym or link
        short = dem.split("(")[0].split("::")[-1] if "::" in dem else dem.split("(")[0]
        if not short or not short.replace("_", "a").isalnum():
            short = sym
        if sym and sym.startswith("_Z") and "(" in dem and not str(c.get("arity_status", "")).startswith("PLACEHOLDER"):
            args_text = dem[dem.index("(") + 1: dem.rindex(")")]
            args = [a for a in split_args(args_text) if a and a != "void"]
            arglist = ", ".join(_c_arg(a) for a in args)
            note = f"{dem} -- arity {c.get('arity_status')}"
        elif sym and sym.startswith("_Z") and "(" in dem:
            arglist = "/* args: PLACEHOLDER name, the mangled list is a guess -- read a0..a3 at the call site */"
            note = f"{dem} -- arity UNKNOWN (placeholder)"
        else:
            arglist = "/* args: arity UNKNOWN -- read the call site */"
            note = f"{dem} -- arity UNKNOWN" if dem != sym else "arity UNKNOWN"
        # avoid clashing with the target's own short name: suffix by address
        if link != sym:
            note += f" [links as {link}: E3 name not in the registry yet]"
        out.append(f'extern "C" u32 {short}_{c.get("addr","")[-6:]}({arglist}) asm("{link}");  // {note}')
    return out


def build_skeleton(target, dem: str, includes: List[str], proto: dict,
                   callees: List[dict] = None, self_contained: bool = False) -> str:
    """A candidate file that compiles as-is and defines exactly target.symbol."""
    lines = ['#include "common/types.h"']
    for inc in includes[:3]:
        lines.append(f'#include "{inc}"')
    lines.append("")
    cd = callee_decls(callees or [])
    if cd:
        lines.extend(cd)
        lines.append("")
    lines.append(f"// layout row 0x{target.addr:08x}, {target.size} bytes")
    lines.append(f"// the definition MUST produce the symbol: {target.symbol}"
                 f"  (source: {target.symbol_origin})")
    if dem and dem != target.symbol:
        lines.append(f"// original name (E3 debug build): {dem}")
    lines.append("")

    if (target.symbol_origin == "stub" or not str(target.symbol).startswith("_Z")
            or "::" not in (dem or "")):
        # unregistered / weak evidence: define the neutral C symbol, never invent
        # a mangled C++ name.  Bind it with an asm label: other TUs in src/anon
        # carry ad-hoc `func_XXXXXXXX(u32, u32, ...)` prototypes, and a plain
        # extern "C" definition with different arguments collides with them at
        # build time; a differently named C++ function with asm("func_XXXXXXXX")
        # does not.
        lines.append(f'// {target.symbol} is a registry stub. The DECLARATION below carries the asm label')
        lines.append(f'// that binds the name; the DEFINITION after it must NOT repeat asm(...) (parse error).')
        lines.append(f'// Decide the arguments from the disassembly: a0 used as data -> no `void* self`.')
        lines.append(f'void {target.symbol}_impl(/* TODO args -- arity UNKNOWN */) asm("{target.symbol}");  // declaration')
        lines.append(f'void {target.symbol}_impl(/* TODO args -- arity UNKNOWN */) {{  // definition: no asm() here')
        lines.append("    /* TODO */")
        lines.append("}")
        return "\n".join(lines) + "\n"

    # a C++-mangled placeholder (e.g. _Z13func_0017c578Pv = func_0017c578(void*)):
    # define the free function with exactly those argument types; the E3 name
    # is only a comment until the registry is renamed.
    reg_dem = rc.demangle(target.symbol) if str(target.symbol).startswith("_Z") else ""
    if reg_dem and re.match(r"^(func|wtarget|ctarget|u_call|u_tail)_[0-9a-fA-F]{8}\(", reg_dem):
        rp = prototype_for(target.symbol)
        rargs = rp.get("args") or []
        rname = reg_dem.split("(")[0]
        lines.append(f"// the registry symbol is the C++-mangled placeholder {reg_dem}; define it as-is")
        lines.append(f"u32 {rname}({', '.join(f'{a} a{i}' for i, a in enumerate(rargs))}) {{")
        lines.append("    /* TODO */")
        lines.append("}")
        return "\n".join(lines) + "\n"

    qual = dem.split("(")[0]
    parts = qual.split("::")
    ns = "::".join(parts[:-2]) if len(parts) > 2 else ""
    cls = parts[-2]
    fn = parts[-1]
    is_ctor_dtor = fn == cls or fn.startswith("~")
    ret = "" if is_ctor_dtor else "int "
    args = proto.get("args") or []
    arglist = ", ".join(f"{a} a{i}" for i, a in enumerate(args))
    decl_arglist = ", ".join(args)
    # forward-declare class types used by pointer/reference in the signature so
    # the skeleton compiles without the (possibly missing) headers
    fwd = []
    for a in args:
        words = [w for w in a.replace("*", " ").replace("&", " ").split() if w]
        for w in words:
            if w in _BUILTIN_WORDS or not re.match(r"^[A-Za-z_][\w:]*$", w):
                continue
            if ("*" in a or "&" in a) and w not in fwd:
                fwd.append(w)
    for w in fwd:
        parts = w.split("::")
        if len(parts) == 1:
            lines.append(f"class {w};")
        else:
            inner = f"class {parts[-1]};"
            for nsn in reversed(parts[:-1]):
                inner = f"namespace {nsn} {{ {inner} }}"
            lines.append(inner)
    if fwd:
        lines.append("")
    if ns:
        lines.append(f"namespace {ns} {{")
    if self_contained:
        # no repo header: declare a methods-only class with exactly this member.
        # promote drops it and adds the declaration to the real header.
        lines.append(f"class {cls} {{")
        lines.append("public:")
        lines.append(f"    {ret}{fn}({decl_arglist});" + ("" if is_ctor_dtor else "   // return type is free (not mangled)"))
        lines.append("};")
        lines.append("")
    lines.append(f"struct {cls}Layout {{")
    lines.append("    // every member needs an explicit byte offset from class_layouts;")
    lines.append("    // pad unknown gaps with u8 padNN[...]; // 0xNN  and say so")
    lines.append("};")
    lines.append("")
    lines.append(f"/* {dem} */")
    lines.append(f"{ret}{cls}::{fn}({arglist}) {{")
    lines.append("    /* TODO */")
    lines.append("}")
    if ns:
        lines.append(f"}}  // namespace {ns}")
    return "\n".join(lines) + "\n"


# ---------------------------------------------------------------- main


AUTODECOMP = Path("/data/agent-tom/kh2/autodecomp/out")


def _tsv_row(path: Path, key: str, value: str) -> Optional[dict]:
    try:
        import csv
        with path.open() as f:
            for r in csv.DictReader(f, delimiter="\t"):
                if r.get(key) == value:
                    return r
    except OSError:
        return None
    return None


def e3_context(addr: int, outdir: Path, *, brief: bool = False) -> Optional[dict]:
    """Everything the E3 map knows about this address, or None when it is unmapped."""
    import os
    if os.environ.get("RIG_NO_E3"):
        return None
    a8 = f"{addr:08x}"
    row = _tsv_row(AUTODECOMP / "names" / "map_functions.tsv", "ee_addr", a8)
    if not row:
        return None
    e3: dict = {
        "ppc_addr": row["ppc_addr"], "tier": row["tier"], "mangled": row["mangled"],
        "demangled": row["demangled"], "params": row.get("params") or "", "locals": row.get("locals") or "",
        "files": {},
    }
    # PS3 pseudo-C (Ghidra, DWARF-typed) for the mapped function
    raw = AUTODECOMP / "e3pilot" / "raw" / f"{row['ppc_addr']}.json"
    if raw.exists():
        try:
            j = json.loads(raw.read_text())
            code = j.get("code") or ""
            e3["files"]["ps3_pseudo_c"] = str(raw)
            e3["ps3_signature"] = j.get("signature")
            if not brief:
                e3["ps3_pseudo_c"] = code if len(code) < 5000 else code[:5000] + "\n/* ... truncated, see file ... */"
        except ValueError:
            pass
    # converted, compiling ee-gcc candidate (E3 round 5)
    cand = AUTODECOMP / "e3pilot" / "cand" / f"{a8}.cpp"
    res = _tsv_row(AUTODECOMP / "e3pilot" / "results_round5.tsv", "ee_addr", a8)
    if cand.exists():
        e3["files"]["e3_candidate"] = str(cand)
        if res:
            e3["e3_candidate_status"] = res.get("status"); e3["e3_candidate_fuzzy"] = res.get("fuzzy")
            e3["e3_candidate_notes"] = (res.get("notes") or "")[:600]
    # best deterministic candidate, annotated with DWARF parameter names, real callee/global names
    # and field paths (codegen-neutral renames + comments)
    named = AUTODECOMP / "names" / "src" / f"{a8}.cpp"
    cov = _tsv_row(AUTODECOMP / "coverage" / "index.tsv", "addr", a8)
    if named.exists():
        e3["files"]["best_candidate_named"] = str(named)
        if cov:
            e3["best_candidate_source"] = cov.get("source"); e3["best_candidate_status"] = cov.get("status")
            e3["best_candidate_fuzzy"] = cov.get("fuzzy")
        if not brief:
            txt = named.read_text()
            e3["best_candidate_named"] = txt if len(txt) < 6000 else txt[:6000] + "\n/* ... truncated, see file ... */"
    # PS2-corrected class headers for the self class
    cls = e3["demangled"].split("(")[0]
    if "::" in cls:
        cls_q = "::".join(cls.split("::")[:-1])
        hdr = AUTODECOMP / "e3pilot" / "hdr_ps2" / (cls_q.replace("::", "_") + ".hpp")
        if hdr.exists():
            e3["files"]["ps2_class_header"] = str(hdr)
    # how to use it
    best_fz = float(cov.get("fuzzy") or 0) if cov else 0.0
    e3_fz = float(res.get("fuzzy") or 0) if res else 0.0
    if cov and cov.get("status") == "near" and best_fz >= 80:
        e3["hint"] = (f"best_candidate_named is {cov.get('source')} at {best_fz:.1f}% and compiles: start from it, "
                      "keep its statement shapes, and use ps3_pseudo_c only to fix control flow/structure it got wrong. "
                      "Remaining diffs at this level are usually register allocation, not C shape.")
    elif res and res.get("status") == "near" and e3_fz >= 40:
        e3["hint"] = (f"e3_candidate is the PS3 source converted to ee-gcc ({e3_fz:.1f}%, compiles): it has the right "
                      "control flow, calls and field names; the differences are PS2 struct layout deltas, asserts stripped "
                      "in retail (already dropped), and expression forms. Start from it.")
    else:
        e3["hint"] = ("use ps3_pseudo_c as the structural reference (real names, asserts show intent) and "
                      "best_candidate_named for the PS2 expression forms.")
    return e3


def get_context(spec: str, *, ghidra: bool = True, m2c: bool = True,
                similar: bool = True, preview: int = DISASM_PREVIEW,
                brief: bool = False) -> dict:
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
        link_sym = csym or f"func_{a:08x}"   # what actually links (registry or PROVIDEd stub)
        if not csym:
            csym = crow.get("mangled", "")
        p = prototype_for(csym)
        cal.append(
            {
                "addr": f"0x{a:08x}",
                "symbol": csym or None,
                "link_symbol": link_sym,
                "symbol_origin": "registry" if link_sym == csym else "stub (E3 name not registered yet)",
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

    # E3 (PS3 debug build) prior from the autodecomp pipeline: real name/signature, PS3 pseudo-C,
    # a compiling ee-gcc candidate converted from it, and the best deterministic candidate annotated
    # with DWARF names and field paths.  See /data/agent-tom/kh2/autodecomp/out/simmatch/NOTES.md.
    e3 = e3_context(t.addr, outdir, brief=brief)
    if e3:
        out["e3"] = e3

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
    # keep only includes that actually compile together with the skeleton:
    # several repo headers share a stem (libyw/menu.hpp vs worldmap/menu.hpp) and
    # including two of them is a redefinition error.  Try each alone, keep the
    # first that compiles; fall back to no include.
    def _compiles(text: str) -> bool:
        tmp = outdir / "skeleton_try.cpp"
        tmp.write_text(text)
        cp = subprocess.run([rc.EE_GXX, *rc.CXXFLAGS, "-fsyntax-only", str(tmp)],
                            cwd=rc.ROOT, capture_output=True, text=True)
        return cp.returncode == 0
    chosen: List[str] = []
    proto = out["prototype"]
    for inc in incs:
        if _compiles(build_skeleton(t, dem, [inc], proto, out.get("callees"))):
            chosen = [inc]
            break
    out["suggested_includes"] = chosen
    out["rejected_includes"] = [i for i in incs if i not in chosen]
    skel = build_skeleton(t, dem, chosen, proto, out.get("callees"))
    out["skeleton_form"] = "repo-header"
    if not _compiles(skel):
        # usually: the header exists but does not declare this member yet, or no
        # header compiles.  Fall back to the self-contained methods-only class.
        alt = build_skeleton(t, dem, [], proto, out.get("callees"), self_contained=True)
        if _compiles(alt):
            skel = alt
            out["skeleton_form"] = "self-contained (header lacks this member or none compiles)"
            out["suggested_includes"] = []
            out["rejected_includes"] = incs
            out["skeleton_compiles"] = True
        else:
            out["skeleton_compiles"] = False
    else:
        out["skeleton_compiles"] = True
    sk_path = outdir / "skeleton.cpp"
    sk_path.write_text(skel)
    out["files"]["skeleton"] = str(sk_path)
    out["skeleton"] = skel

    if brief:
        # keep the paths, drop the bodies -- the whole disassembly and both
        # decompiler drafts are the bulk of the payload
        for k in ("ghidra", "m2c"):
            if out.get(k):
                out[k] = None
                out[f"{k}_file"] = out["files"].get(k)
        sim = out.get("similar_matched")
        # a real twin (>= 0.85) is worth its full text: the right move is to copy it
        limit = 3000 if (sim and (sim.get("similarity") or 0) >= 0.85) else 800
        if sim and sim.get("snippet") and len(sim["snippet"]) > limit:
            sim["snippet"] = sim["snippet"][:limit] + "\n/* ... truncated ... */"
        if sim and (sim.get("similarity") or 0) >= 0.85:
            sim["hint"] = ("this matched function is a near-twin of the target (opcode similarity "
                           f"{sim.get('similarity')}): start from its source, change only the class, "
                           "offsets, constants and callees the disassembly shows to differ")
    return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("target")
    ap.add_argument("--no-ghidra", dest="ghidra", action="store_false")
    ap.add_argument("--no-m2c", dest="m2c", action="store_false")
    ap.add_argument("--no-similar", dest="similar", action="store_false")
    ap.add_argument("--preview", type=int, default=DISASM_PREVIEW)
    ap.add_argument("--brief", action="store_true",
                    help="drop the Ghidra and m2c bodies (keep the file paths)")
    args = ap.parse_args()
    rc.json_out(get_context(args.target, ghidra=args.ghidra, m2c=args.m2c,
                            similar=args.similar, preview=args.preview,
                            brief=args.brief))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
