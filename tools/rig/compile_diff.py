#!/usr/bin/env python3
"""compile_diff.py <addr|symbol> --src <file.cpp>

Compile a candidate C++ file with the repo's exact flags, mini-link the target
function at its real layout address, normalize to the layout row size, compare
byte-for-byte against SLPM_666.75 and emit an instruction-level diff.

JSON on stdout:
  {ok, addr, symbol, size, exact, size_ok, fuzzy_pct, compiled_size,
   compile_errors[], link_errors[], diff[], diff_truncated, elapsed_ms}

Typical runtime: well under 2 s.
"""

from __future__ import annotations

import argparse
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
import time
from pathlib import Path
from typing import List, Optional, Tuple

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc
from rigcommon import ROOT, Target, _run

MINILINK_TEMPLATE = """_start = 0x0010001C;
ENTRY(_start);
INCLUDE {symbols_ld}
{extra_provides}
SECTIONS {{
  .kh2fn 0x{addr:08x} : {{ KEEP(*(.text.{sym})) KEEP(*(.gnu.linkonce.t.{sym})) }}
  .text.other 0x01e00000 : {{ *(.text*) *(.gnu.linkonce.t.*) }}
  .rodata 0x01e80000 : {{ *(.rodata*) }}
  .data 0x01f00000 : {{ *(.data*) *(.sdata*) *(.bss*) *(.sbss*) *(COMMON) }}
  .reginfo : {{ *(.reginfo) }}
  /DISCARD/ : {{ *(.MIPS.abiflags) *(.comment) *(.pdr) *(.mdebug*) *(.gnu.attributes) }}
}}
"""

UNDEF_RE = re.compile(r"undefined reference to [`'\"]([^'\"`]+)")


def clean_compiler_output(text: str, src_path: Path) -> List[str]:
    out: List[str] = []
    for line in text.splitlines():
        line = line.rstrip()
        if not line:
            continue
        # `#pragma once in main file` is expected for candidate headers
        if "#pragma once" in line:
            continue
        out.append(line.replace(str(src_path), src_path.name))
    return out


def pick_symbol(obj: Path, target: Target) -> Optional[object]:
    syms = rc.build_elf.load_obj_text_symbols(obj)
    if not syms:
        return None
    if target.symbol:
        for s in syms:
            if s.name == target.symbol:
                return s
    token = f"func_{target.addr:08x}"
    for s in syms:
        if token in s.name:
            return s
    if len(syms) == 1:
        return syms[0]
    return None


def objdiff_units(work: Path, sym: str, target_bytes: bytes, base_bytes: bytes) -> Tuple[List[str], bool, Optional[float], List[dict]]:
    """Wrap raw bytes in .incbin objects (like tools/objdiff.py) and run objdiff-cli."""
    objs = {}
    for kind, blob in (("target", target_bytes), ("base", base_bytes)):
        bin_path = work / f"{kind}.bin"
        bin_path.write_bytes(blob)
        asm = (
            ".text\n"
            f".globl {sym}\n"
            f".type {sym}, @function\n"
            f".ent {sym}\n"
            f"{sym}:\n"
            f'.incbin "{bin_path.name}", 0, {len(blob)}\n'
            f".end {sym}\n"
        )
        s_path = work / f"{kind}.s"
        s_path.write_text(asm)
        o_path = work / f"{kind}.o"
        cp = _run([rc.EE_AS, "-G0", "-o", o_path.name, s_path.name], cwd=work)
        if cp.returncode != 0:
            return [f"ee-as failed: {cp.stderr.strip()[:200]}"], False, None, []
        _run([rc.EE_OBJCOPY, "-R", ".mdebug", "-R", ".pdr", o_path.name], cwd=work)
        objs[kind] = o_path

    cli = shutil.which("objdiff-cli") or "/data/agent-tom/kh2/tools/bin/objdiff-cli"
    cp = _run(
        [cli, "diff", "-1", objs["target"].name, "-2", objs["base"].name, sym,
         "--format", "json", "-o", "-"],
        cwd=work,
    )
    if cp.returncode != 0 or not cp.stdout.strip():
        return objdump_fallback(work, objs["target"], objs["base"]), True, None, []
    try:
        data = json.loads(cp.stdout)
    except json.JSONDecodeError:
        return objdump_fallback(work, objs["target"], objs["base"]), True, None, []
    return render_objdiff_json(data, sym)


def _find_symbol(side: dict, sym: str) -> dict:
    for s in (side.get("symbols") or []):
        if s.get("name") == sym:
            return s
    return {}


def _row_text(row: dict) -> str:
    ins = row.get("instruction") or {}
    return str(ins.get("formatted") or "").strip()


def render_objdiff_json(data: dict, sym: str) -> Tuple[List[str], bool, Optional[float], List[dict]]:
    """objdiff-cli 3.x one-shot JSON -> aligned 'yours | orig' instruction rows.

    left = our compiled bytes, right = the original SLPM bytes.
    """
    lsym = _find_symbol(data.get("left") or {}, sym)
    rsym = _find_symbol(data.get("right") or {}, sym)
    match_pct = None
    for s in (lsym, rsym):
        v = s.get("match_percent")
        if isinstance(v, (int, float)):
            match_pct = float(v)
            break

    lrows = lsym.get("instructions") or []
    rrows = rsym.get("instructions") or []
    lines: List[str] = ["  yours (compiled)                             | orig (SLPM)"]
    pairs: List[dict] = []
    for i in range(max(len(lrows), len(rrows))):
        lrow = lrows[i] if i < len(lrows) else {}
        rrow = rrows[i] if i < len(rrows) else {}
        lt = _row_text(lrow)
        rt = _row_text(rrow)
        kinds = {k for k in (lrow.get("diff_kind"), rrow.get("diff_kind")) if k}
        marker = " " if not kinds - {"DIFF_NONE"} else "!"
        lines.append(f"{marker} {lt:<44} | {rt}")
        if marker == "!":
            pairs.append({"left": lt, "right": rt})
    if len(lines) == 1:
        return [], False, match_pct, []
    return lines, False, match_pct, pairs



LOAD_STORE = {"lb", "lbu", "lh", "lhu", "lw", "lwu", "ld", "sb", "sh", "sw", "sd",
              "lwl", "lwr", "swl", "swr"}
BRANCH = {"beq", "bne", "beqz", "bnez", "bgez", "bltz", "blez", "bgtz",
          "beql", "bnel", "beqzl", "bnezl", "bgezl", "bltzl", "blezl", "bgtzl"}
REG_RE = re.compile(r"\b(?:zero|at|v[01]|a[0-3]|t[0-9]|s[0-7]|k[01]|gp|sp|fp|ra|f\d+)\b")


def _mnemonic(text: str) -> str:
    return text.split()[0] if text.split() else ""


def classify(rows: List[dict]) -> dict:
    """Mechanically name what kind of difference this is, so the model does not
    have to guess from the raw rows."""
    counts = {
        "register_allocation": 0,
        "member_width": 0,
        "control_flow_shape": 0,
        "missing_on_yours": 0,
        "extra_on_yours": 0,
        "operand_value": 0,
        "other": 0,
    }
    for r in rows:
        lt, rt = r["left"], r["right"]
        if lt and not rt:
            counts["extra_on_yours"] += 1
            continue
        if rt and not lt:
            counts["missing_on_yours"] += 1
            continue
        if lt == rt:
            continue
        lm, rm = _mnemonic(lt), _mnemonic(rt)
        if lm == rm:
            if REG_RE.sub("", lt) == REG_RE.sub("", rt):
                counts["register_allocation"] += 1
            else:
                counts["operand_value"] += 1
        elif lm in LOAD_STORE and rm in LOAD_STORE:
            counts["member_width"] += 1
        elif lm in BRANCH and rm in BRANCH:
            counts["control_flow_shape"] += 1
        else:
            counts["other"] += 1

    hints = {
        "member_width": "a *Layout member has the wrong width or signedness "
                        "(lbu=u8 lb=s8 lhu=u16 lh=s16 lw=u32/s32/ptr)",
        "control_flow_shape": "the if/ternary shape differs; 'x = c ? a : b' and "
                              "'x = b; if (c) x = a;' compile differently in gcc 3.2",
        "register_allocation": "same instructions, different registers: a variable's "
                               "lifetime differs (s0-s7 = live across a call)",
        "missing_on_yours": "you folded something away -- a cast, a truncation or a branch",
        "extra_on_yours": "you added a conversion or temporary the original does not have",
        "operand_value": "right instruction, wrong constant/offset -- check the byte offsets",
    }
    ranked = sorted(((v, k) for k, v in counts.items() if v), reverse=True)
    return {
        "counts": {k: v for v, k in ranked},
        "dominant": ranked[0][1] if ranked else None,
        "hints": [f"{k}: {hints[k]}" for _, k in ranked if k in hints],
    }


def objdump_fallback(work: Path, target_o: Path, base_o: Path) -> List[str]:
    def dis(p: Path) -> List[str]:
        cp = _run([rc.EE_OBJDUMP, "-d", "-m", "mips:5900", p.name], cwd=work)
        out = []
        for line in cp.stdout.splitlines():
            m = re.match(r"^\s*[0-9a-f]+:\s+(?:[0-9a-f]{2} )+\s*(.*)$", line)
            if m:
                out.append(" ".join(m.group(1).split()))
        return out

    a, b = dis(target_o), dis(base_o)
    lines = []
    for i in range(max(len(a), len(b))):
        x = a[i] if i < len(a) else ""
        y = b[i] if i < len(b) else ""
        lines.append(f"{'  ' if x == y else '! '}{x:<44} | {y}")
    return lines


def byte_fuzzy(a: bytes, b: bytes) -> float:
    """Instruction-word agreement over the row (0..100)."""
    n = min(len(a), len(b))
    total = max(len(a), len(b)) // 4 or 1
    same = 0
    for i in range(0, n - 3, 4):
        if a[i : i + 4] == b[i : i + 4]:
            same += 1
    return round(100.0 * same / total, 2)


# ---------------------------------------------------------------- banned-move lint

# statement-level / file-scope inline asm: `asm(` or `__asm__ volatile (` whose
# preceding non-blank char is not a declarator end (`)` or identifier char).
# `void f() asm("sym");` and `extern "C" u32 D_x asm("D_x");` are asm *labels*
# and are allowed -- they are how candidates bind to registry symbols.
_ASM_RE = re.compile(r'(?<![A-Za-z0-9_)])\s*(?:__asm__|asm)\s*(?:__volatile__|volatile)?\s*\(')
_BANNED = [
    (re.compile(r'__attribute__\s*\(\(\s*naked'), "__attribute__((naked))"),
    (re.compile(r'\bregister\b[^;]*\basm\s*\('), "register variable pinned with asm()"),
    (re.compile(r'\.incbin\b'), ".incbin"),
]


def banned_constructs(src_text: str) -> List[str]:
    found = []
    for m in _ASM_RE.finditer(src_text):
        # skip when the asm( directly follows a declarator on the same line
        line_start = src_text.rfind("\n", 0, m.start()) + 1
        before = src_text[line_start:m.start()].rstrip()
        decl = re.search(r'([A-Za-z_]\w*)\s*(?:\([^()]*\))?$', before)
        if decl and decl.group(1) not in ("if", "while", "for", "switch", "return", "else", "do"):
            continue   # asm label on a declarator
        found.append("inline asm statement (only asm *labels* on declarations are allowed)")
        break
    for rx, what in _BANNED:
        if rx.search(src_text):
            found.append(what)
    return found


def compile_diff(
    spec: str,
    src: Path,
    *,
    diff_cap: int = 120,
    keep: Optional[Path] = None,
) -> dict:
    t0 = time.time()
    target = rc.resolve(spec)
    src = Path(src)
    if not src.is_absolute():
        src = (ROOT / src).resolve()
    if not src.exists():
        rc.die(f"missing candidate source: {src}")
    sym = target.symbol

    result = {
        "ok": True,
        "addr": f"0x{target.addr:08x}",
        "symbol": target.symbol,
        "symbol_origin": target.symbol_origin,
        "demangled": rc.demangle(target.symbol),
        "size": target.size,
        "exact": False,
        "size_ok": False,
        "fuzzy_pct": 0.0,
        "compiled_size": None,
        "compile_errors": [],
        "warnings": [],
        "link_errors": [],
        "diff": [],
        "diff_truncated": False,
    }

    banned = banned_constructs(src.read_text(errors="ignore"))
    if banned:
        result["compile_errors"] = [f"banned construct: {b} -- the candidate is rejected "
                                    "unscored; remove it (see 'Banned moves')" for b in banned]
        result["elapsed_ms"] = int((time.time() - t0) * 1000)
        return result

    workdir = keep or Path(tempfile.mkdtemp(prefix="rig-cd-"))
    workdir.mkdir(parents=True, exist_ok=True)
    try:
        obj = workdir / "cand.o"
        cp = _run([rc.EE_GXX, *rc.CXXFLAGS, "-c", "-o", str(obj), str(src)], cwd=ROOT)
        msgs = clean_compiler_output(cp.stderr, src)
        if cp.returncode != 0:
            hints = []
            src_text0 = src.read_text(errors="ignore")
            if re.search(r'\)\s*asm\s*\(\s*"[^"]*"\s*\)\s*\{', src_text0):
                hints.append("hint: an asm label may only appear on a DECLARATION "
                             "(`void f(...) asm(\"sym\");`), not on the definition -- "
                             "declare on one line, define on the next without asm(...)")
            if re.search(r'^\s*asm\s*\(', src_text0, re.M):
                hints.append("hint: file-scope asm() is banned; use asm labels on declarations")
            result["compile_errors"] = hints + (msgs[:40] or ["ee-g++ failed with no output"])
            result["elapsed_ms"] = int((time.time() - t0) * 1000)
            return result
        # warnings are informational only
        warns = [m for m in msgs if " warning" in m or "warning:" in m]

        # ---- mini-link
        src_text = src.read_text(errors="ignore")
        ld = workdir / "mini.ld"
        ld.write_text(
            MINILINK_TEMPLATE.format(
                symbols_ld=rc.SYMBOLS_LD,
                extra_provides="\n".join(rc.extra_provides(src_text)),
                addr=target.addr,
                sym=sym,
            )
        )
        elf = workdir / "mini.elf"
        cp = _run(
            [rc.EE_LD, "--no-check-sections", "-T", str(ld), "-o", str(elf), str(obj),
             f"-L{rc.LIBGCC_DIR}", "-lgcc"],
            cwd=ROOT,
        )
        if cp.returncode != 0 or not elf.exists():
            errs = []
            for m in UNDEF_RE.finditer(cp.stderr):
                name = m.group(1)
                errs.append(
                    f"undefined reference to `{name}` "
                    "(declare it with the registry symbol / func_XXXXXXXX name, or add an extern decl)"
                )
            if not errs:
                errs = [l for l in cp.stderr.splitlines() if l.strip()][:20]
            result["link_errors"] = errs[:20]
            result["warnings"] = warns[:10]
            result["elapsed_ms"] = int((time.time() - t0) * 1000)
            return result

        # ---- extract bytes at the pinned address
        syms = {s.name: s for s in rc.build_elf.load_text_symbols(elf)}
        es = syms.get(sym)
        if es is None or es.addr != target.addr:
            osym = pick_symbol(obj, target)
            if osym is None:
                result["warnings"] = warns[:10]
                result["compile_errors"] = [
                    f"candidate object does not define `{sym}`; "
                    "the definition must produce exactly that mangled name"
                ]
            else:
                result["warnings"] = warns[:10]
                result["compile_errors"] = [
                    f"linker did not place `{sym}` at 0x{target.addr:08x} "
                    f"(found {osym.name} in the object; check -ffunction-sections section name)"
                ]
            result["elapsed_ms"] = int((time.time() - t0) * 1000)
            return result

        image = rc.load_elf_image(elf)
        raw = rc.read_elf_vaddr(image, target.addr, es.size) if image else None
        if raw is None:
            result["link_errors"] = [f"could not read 0x{target.addr:08x}+{es.size} from mini.elf"]
            result["elapsed_ms"] = int((time.time() - t0) * 1000)
            return result

        result["compiled_size"] = es.size
        # normalize exactly like build_elf.normalize_final_elf: zero-pad up to the
        # row size; larger than the row can never be a match.
        if es.size > target.size:
            result["size_ok"] = False
            got = raw
        else:
            result["size_ok"] = True
            got = raw + b"\x00" * (target.size - es.size)

        want = rc.orig_bytes(target.addr, target.size)
        result["exact"] = result["size_ok"] and got == want
        result["fuzzy_pct"] = 100.0 if result["exact"] else byte_fuzzy(got, want)

        # ---- instruction diff
        diff_lines, fell_back, match_pct, pairs = objdiff_units(workdir, "diff_fn", got, want)
        result["diff_classes"] = classify(pairs) if pairs else {"counts": {}, "dominant": None, "hint": ""}
        if match_pct is not None and not result["exact"]:
            result["fuzzy_pct"] = round(match_pct, 2)
        if len(diff_lines) > diff_cap:
            head = diff_cap // 2
            tail = diff_cap - head
            diff_lines = (
                diff_lines[:head]
                + [f"... {len(diff_lines) - diff_cap} rows elided (yours | target) ..."]
                + diff_lines[-tail:]
            )
            result["diff_truncated"] = True
        result["diff"] = [] if result["exact"] else diff_lines
        result["warnings"] = warns[:10]
        result["elapsed_ms"] = int((time.time() - t0) * 1000)
        return result
    finally:
        if keep is None:
            shutil.rmtree(workdir, ignore_errors=True)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("target", help="address (0x...) or symbol")
    ap.add_argument("--src", required=True, help="candidate .cpp file")
    ap.add_argument("--diff-cap", type=int, default=120)
    ap.add_argument("--keep", help="keep intermediate files in this directory")
    args = ap.parse_args()
    res = compile_diff(
        args.target, Path(args.src), diff_cap=args.diff_cap,
        keep=Path(args.keep) if args.keep else None,
    )
    rc.json_out(res)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
