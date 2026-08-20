#!/usr/bin/env python3
"""sweep.py — find byte-exact candidates that never made it into the repo.

A match can be earned and still lost: promote can fail on a repo-side defect,
a candidate can be scored before the registry gained a callee it needs, or a
round can end while a worker's last attempt was already exact. Four functions
were recovered that way on 2026-08-20 alone, so this is a standing check, not
a one-off.

    python3 tools/rig/sweep.py                 # scan rounds + arena, report
    python3 tools/rig/sweep.py --min-fuzzy 90  # widen the net (slower)

Read-only: it recompiles stored attempts and prints what is exact but still
`asm` in the layout. Promotion stays a separate, deliberate step.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from compile_diff import compile_diff  # noqa: E402


def candidates(roots, min_fuzzy: float):
    """Summaries worth recompiling: not matched, but scored close enough that an
    exact attempt is plausible. Arena dirs carry results.tsv instead."""
    for root in roots:
        for sp in sorted(Path(root).glob("*/*/summary.json")):
            try:
                s = json.loads(sp.read_text())
            except (OSError, ValueError):
                continue
            if s.get("result") == "matched":
                continue
            if float(s.get("best_fuzzy") or 0) < min_fuzzy:
                continue
            yield s.get("addr"), sp.parent
        for res in sorted(Path(root).glob("*/results.tsv")):
            for line in res.read_text().splitlines()[1:]:
                p = line.split("\t")
                if len(p) >= 5 and p[3] in ("1", "True", "true"):
                    yield p[0], res.parent / p[0].replace("0x", "")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--min-fuzzy", type=float, default=95.0)
    ap.add_argument("--roots", nargs="*", default=[str(rc.RIG_OUT / "rounds"), str(rc.RIG_OUT / "arena")])
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args()

    st = rc.layout_status()
    sizes = {f"0x{r.addr:08x}": r.size for r in rc.layout()}
    found, seen = [], set()
    for addr, d in candidates(args.roots, args.min_fuzzy):
        if not addr or addr in seen or not d.is_dir():
            continue
        mode, _ = st.get(int(addr, 16), ("asm", ""))
        if mode == "cxx":
            continue                      # already in the repo
        for att in sorted(d.glob("attempt_*.cpp")):
            try:
                if compile_diff(addr, att).get("exact"):
                    seen.add(addr)
                    found.append({"addr": addr, "size": sizes.get(addr, 0),
                                  "src": str(att), "from": d.parent.name})
                    break
            except Exception:
                continue
    total = sum(f["size"] for f in found)
    if args.json:
        print(json.dumps({"found": found, "bytes": total}, indent=1))
    else:
        for f in found:
            print(f"{f['addr']}  {f['size']:5d} B  {f['from']:24s}  {f['src']}")
        print(f"\n{len(found)} byte-exact candidate(s) not in the repo, {total:,} bytes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
