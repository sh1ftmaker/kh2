#!/usr/bin/env python3
"""permute.py — try every ordering of a run of consecutive statements.

gcc 3.2's scheduler reorders independent loads/stores, so when the diff shows
the right instructions in the wrong order the fix is a different *source*
order, not different code.  This tool permutes whole lines in [first_line,
last_line] (1-based, inclusive) of a candidate, scores each with compile_diff
and stops at the first exact match.

    python3 tools/rig/permute.py 0x00136968 --src attempt_004.cpp --lines 14-18

Limits: at most 7 lines (5040 orderings, ~7 min); blank/comment-only lines
inside the range are kept in place.  Writes the winning candidate next to the
source as <src>.permuted.cpp and returns JSON.
"""
from __future__ import annotations

import argparse
import itertools
import json
import sys
import time
from pathlib import Path
from typing import List

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from compile_diff import compile_diff  # noqa: E402

MAX_LINES = 7


def permute(spec: str, src: Path, first: int, last: int, max_tries: int = 5040) -> dict:
    text = src.read_text()
    lines = text.split("\n")
    if not (1 <= first <= last <= len(lines)):
        return {"ok": False, "error": f"line range {first}-{last} outside 1-{len(lines)}"}
    idx = [i for i in range(first - 1, last) if lines[i].strip() and not lines[i].strip().startswith("//")]
    if len(idx) > MAX_LINES:
        return {"ok": False, "error": f"{len(idx)} statements in range; at most {MAX_LINES}"}
    if len(idx) < 2:
        return {"ok": False, "error": "need at least two statements to permute"}
    base = [lines[i] for i in idx]
    t0 = time.time()
    tried = 0
    best = (-1.0, None)
    out_path = src.with_suffix(".permuted.cpp")
    tmp = src.with_suffix(".permute_try.cpp")
    for perm in itertools.permutations(range(len(idx))):
        tried += 1
        if tried > max_tries:
            break
        new = list(lines)
        for slot, which in zip(idx, perm):
            new[slot] = base[which]
        cand = "\n".join(new)
        tmp.write_text(cand)
        res = compile_diff(spec, tmp)
        f = float(res.get("fuzzy_pct") or 0.0)
        if res.get("exact"):
            out_path.write_text(cand)
            tmp.unlink(missing_ok=True)
            return {"ok": True, "exact": True, "order": list(perm), "tried": tried,
                    "file": str(out_path), "elapsed_ms": int((time.time() - t0) * 1000),
                    "note": "byte-exact ordering found; compile_diff this file and promote it"}
        if f > best[0]:
            best = (f, cand, list(perm))
    tmp.unlink(missing_ok=True)
    if best[1] is not None:
        out_path.write_text(best[1])
    return {"ok": True, "exact": False, "tried": tried, "best_fuzzy": best[0],
            "best_order": best[2] if best[1] is not None else None,
            "file": str(out_path) if best[1] is not None else None,
            "elapsed_ms": int((time.time() - t0) * 1000),
            "note": "no ordering is exact: the difference is not (only) statement order"}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("target")
    ap.add_argument("--src", required=True)
    ap.add_argument("--lines", required=True, help="first-last, 1-based inclusive")
    args = ap.parse_args()
    a, b = args.lines.split("-")
    print(json.dumps(permute(args.target, Path(args.src), int(a), int(b)), indent=1))
    return 0


if __name__ == "__main__":
    sys.exit(main())
