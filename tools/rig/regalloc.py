#!/usr/bin/env python3
"""regalloc.py — search declaration orders for the one gcc 3.2 actually used.

The single biggest wall in this project is not semantics, it is which physical
callee-saved register ee-gcc 3.2 picks. The model arena made that quantitative:
across every function no frontier model could match, the diff-class histogram
was register_allocation 241, operand_value 150, control_flow_shape 6. The
algorithm is right; s0 and s1 are swapped, and every model re-rolls the source
and oscillates instead of converging (0x0017c030 cycled 54.89 -> 92.14 -> 54.89
across all eight attempts on nearly every model and effort tier).

gcc 3.2 assigns s-registers in the order locals become live, so the fix is
mechanical: permute the *declaration* order and recompile. That is a search no
language model should be running -- it is 720 compiles, not 8 prompts.

    python3 tools/rig/regalloc.py 0x0017c030 --src attempt_007.cpp
    python3 tools/rig/regalloc.py 0x0017c030 --src a.cpp --decls 12-17 --force

Precondition: the candidate's residual diff should be dominated by
register_allocation. Anything else means reordering declarations cannot help,
and the tool says so instead of burning ten minutes (override with --force).
"""
from __future__ import annotations

import argparse
import itertools
import json
import re
import sys
import time
from pathlib import Path
from typing import List

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from compile_diff import compile_diff  # noqa: E402

MAX_DECLS = 7          # 5040 orderings; a compile is ~0.1 s

# `u32 x;` / `s16 *p = 0;` / `kn::FVector v;` -- a type, a name, an optional
# initialiser. Deliberately conservative: anything with a call, a comma or a
# brace is left alone, because moving it could change behaviour rather than
# just liveness.
DECL_RE = re.compile(
    r"^\s*(?:const\s+|static\s+|volatile\s+|register\s+)*"      # storage
    r"(?:unsigned\s+|signed\s+)?"                               # signedness
    r"[A-Za-z_][A-Za-z0-9_]*(?:\s*::\s*[A-Za-z_][A-Za-z0-9_]*)*"  # type (maybe qualified)
    r"(?:\s*\*+|\s*&)?\s+"                                      # pointer/ref
    r"\*?[A-Za-z_][A-Za-z0-9_]*"                                # name
    r"\s*(?:=\s*[^;(){},]+)?;\s*$"                              # optional simple init
)
KEYWORDS = ("return", "if", "else", "while", "for", "do", "switch", "case",
            "break", "continue", "goto", "typedef", "struct", "class", "union",
            "enum", "using", "namespace", "template", "extern", "delete")


FUNC_RE = re.compile(r"^[A-Za-z_][^;=#]*\([^;]*\)\s*(?:const\s*)?\{?\s*$")

# `u32 sprite = GetBaseSprite(1);` -- a local declared where it is first used.
INLINE_DECL_RE = re.compile(
    r"^(?P<indent>\s*)(?P<decl>(?:const\s+)?(?:unsigned\s+|signed\s+)?"
    r"[A-Za-z_][A-Za-z0-9_]*(?:\s*::\s*[A-Za-z_][A-Za-z0-9_]*)*\s*\*{0,2})\s+"
    r"(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*=\s*(?P<init>[^;]+);\s*$")


def split_inline_decls(lines: List[str], body: int, end: int) -> tuple[List[str], List[str]]:
    """Rewrite `T x = expr;` as `T x;` at the top of the body plus `x = expr;`
    in place, and return (new_lines, declaration_lines).

    Hoisting the *initialiser* would change evaluation order and so change
    behaviour; hoisting only the declaration does not, and it is exactly the
    knob gcc 3.2 uses -- a local's slot in the s-register file follows the
    order the locals enter the frame. Declarations inside a `for` header or a
    nested block are left alone: the first would need scope surgery, the second
    can repeat a name (two loops each with their own `i`).
    """
    new = list(lines)
    decls: List[str] = []
    depth = 0
    for i in range(body, end):
        s = lines[i].strip()
        if not s or s.startswith("//"):
            continue
        opens, closes = lines[i].count("{"), lines[i].count("}")
        at_top = depth == 0
        depth += opens - closes
        if not at_top or "for" in s.split("(")[0]:
            continue
        m = INLINE_DECL_RE.match(lines[i])
        if not m or m.group("name") in ("return", "delete"):
            continue
        decls.append(f"{m.group('indent')}{m.group('decl')} {m.group('name')};")
        new[i] = f"{m.group('indent')}{m.group('name')} = {m.group('init')};"
    return new, decls


def find_body_start(lines: List[str]) -> int:
    """Line index just inside the last function definition in the file.

    Rig candidates open with includes, the rig's verbatim `extern "C"` callee
    block and any struct/class layouts, then define the target function last.
    Scanning from line 0 would land in the layout declarations, which are not
    locals and must not be reordered.
    """
    last = -1
    for i, line in enumerate(lines):
        s = line.lstrip()
        if s.startswith(("if", "for", "while", "switch", "struct", "class", "else",
                         "extern", "typedef", "return", "//")):
            continue
        if "(" in line and ")" in line and FUNC_RE.match(line):
            last = i
    if last < 0:
        return 0
    # the opening brace may sit on the signature line or on the next one
    return last + (1 if lines[last].rstrip().endswith("{") else 2)


def find_body_end(lines: List[str], body: int) -> int:
    """Index of the line holding the closing brace of the body starting at `body`."""
    depth = 1
    for i in range(body, len(lines)):
        depth += lines[i].count("{") - lines[i].count("}")
        if depth <= 0:
            return i
    return len(lines)


def find_decls(lines: List[str], start: int = 0) -> List[int]:
    """Indices of consecutive simple local declarations at the top of a body.

    Only the leading declaration run is considered: a declaration further down
    sits after statements that may depend on it, and moving it across them is a
    semantic change, not a liveness one.
    """
    out: List[int] = []
    started = False
    for i, line in enumerate(lines[start:], start):
        s = line.strip()
        if not s or s.startswith("//") or s.startswith("/*") or s.startswith("*"):
            if started:
                continue
            continue
        if s.split(" ")[0].rstrip("(*") in KEYWORDS:
            if started:
                break
            continue
        if DECL_RE.match(line):
            out.append(i)
            started = True
            continue
        if started:
            break
    return out


def dominant_class(res: dict) -> str:
    return ((res.get("diff_classes") or {}).get("dominant")) or "unknown"


def search(spec: str, src: Path, idx: List[int], max_tries: int) -> dict:
    lines = src.read_text().split("\n")
    base = [lines[i] for i in idx]
    out_path = src.with_suffix(".regalloc.cpp")
    tmp = src.with_suffix(".regalloc_try.cpp")
    t0 = time.time()
    tried = 0
    best = (-1.0, None, None)
    seen = set()
    for perm in itertools.permutations(range(len(idx))):
        if tried >= max_tries:
            break
        tried += 1
        new = list(lines)
        for slot, which in zip(idx, perm):
            new[slot] = base[which]
        cand = "\n".join(new)
        if cand in seen:
            continue
        seen.add(cand)
        tmp.write_text(cand)
        res = compile_diff(spec, tmp)
        if res.get("exact"):
            out_path.write_text(cand)
            tmp.unlink(missing_ok=True)
            return {"ok": True, "exact": True, "order": list(perm), "tried": tried,
                    "file": str(out_path), "elapsed_ms": int((time.time() - t0) * 1000),
                    "note": "byte-exact declaration order found -- compile_diff this file and promote it"}
        f = float(res.get("fuzzy_pct") or 0.0)
        if f > best[0]:
            best = (f, cand, list(perm))
    tmp.unlink(missing_ok=True)
    if best[1] is not None:
        out_path.write_text(best[1])
    return {"ok": True, "exact": False, "tried": tried, "best_fuzzy": best[0],
            "best_order": best[2], "file": str(out_path) if best[1] else None,
            "elapsed_ms": int((time.time() - t0) * 1000),
            "note": "no declaration order is exact; the register assignment is driven by "
                    "something else (a temporary that needs splitting, or a live range "
                    "that differs) -- park it rather than re-rolling the source"}


def search_hoisted(spec: str, src: Path, lines: List[str], decls: List[str],
                   body: int, max_tries: int) -> dict:
    """Same search, but over declarations synthesised by split_inline_decls()."""
    out_path = src.with_suffix(".regalloc.cpp")
    tmp = src.with_suffix(".regalloc_try.cpp")
    t0 = time.time()
    tried = 0
    best = (-1.0, None, None)
    for perm in itertools.permutations(range(len(decls))):
        if tried >= max_tries:
            break
        tried += 1
        block = [decls[k] for k in perm]
        cand = "\n".join(lines[:body] + block + lines[body:])
        tmp.write_text(cand)
        res = compile_diff(spec, tmp)
        if res.get("exact"):
            out_path.write_text(cand)
            tmp.unlink(missing_ok=True)
            return {"ok": True, "exact": True, "mode": "hoisted", "order": list(perm),
                    "decls": block, "tried": tried, "file": str(out_path),
                    "elapsed_ms": int((time.time() - t0) * 1000),
                    "note": "byte-exact -- compile_diff this file and promote it"}
        f = float(res.get("fuzzy_pct") or 0.0)
        if f > best[0]:
            best = (f, cand, list(perm))
    tmp.unlink(missing_ok=True)
    if best[1] is not None:
        out_path.write_text(best[1])
    return {"ok": True, "exact": False, "mode": "hoisted", "tried": tried,
            "best_fuzzy": best[0], "best_order": best[2],
            "file": str(out_path) if best[1] else None,
            "elapsed_ms": int((time.time() - t0) * 1000),
            "note": "no hoist order is exact; the assignment is driven by something "
                    "other than declaration order -- park it rather than re-rolling"}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("target")
    ap.add_argument("--src", required=True)
    ap.add_argument("--decls", help="first-last, 1-based inclusive; default: auto-detect")
    ap.add_argument("--force", action="store_true",
                    help="search even when the residual diff is not register_allocation")
    ap.add_argument("--max-tries", type=int, default=5040)
    args = ap.parse_args()

    src = Path(args.src)
    if not src.exists():
        print(json.dumps({"ok": False, "error": f"{src} not found"}))
        return 1

    res0 = compile_diff(args.target, src)
    if res0.get("exact"):
        print(json.dumps({"ok": True, "exact": True, "tried": 0,
                          "note": "candidate is already byte-exact"}, indent=1))
        return 0
    dom = dominant_class(res0)
    if dom != "register_allocation" and not args.force:
        print(json.dumps({"ok": False, "skipped": True, "dominant": dom,
                          "fuzzy_pct": res0.get("fuzzy_pct"),
                          "note": f"residual diff is dominated by {dom}, not register_allocation; "
                                  "fix that first (or pass --force)"}, indent=1))
        return 0

    lines = src.read_text().split("\n")
    if args.decls:
        a, b = args.decls.split("-")
        idx = [i for i in range(int(a) - 1, int(b)) if lines[i].strip()]
        if len(idx) < 2:
            print(json.dumps({"ok": False, "error": "fewer than two lines in --decls range"}, indent=1))
            return 1
        print(json.dumps(search(args.target, src, idx[:MAX_DECLS], args.max_tries), indent=1))
        return 0

    body = find_body_start(lines)
    idx = find_decls(lines, body)
    if len(idx) >= 2:
        print(json.dumps(search(args.target, src, idx[:MAX_DECLS], args.max_tries), indent=1))
        return 0

    # nothing to reorder: the locals are declared where they are first used, so
    # make the knob before turning it -- split each `T x = e;` into a hoisted
    # `T x;` and an in-place `x = e;`, then permute the hoisted block
    hoisted, decls = split_inline_decls(lines, body, find_body_end(lines, body))
    if len(decls) < 2:
        print(json.dumps({"ok": False, "error": "fewer than two reorderable locals found; "
                                                "pass --decls first-last"}, indent=1))
        return 1
    print(json.dumps(search_hoisted(args.target, src, hoisted, decls[:MAX_DECLS],
                                    body, args.max_tries), indent=1))
    return 0


if __name__ == "__main__":
    sys.exit(main())
