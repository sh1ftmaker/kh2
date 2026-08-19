#!/usr/bin/env python3
"""round_report.py — summarise one driver run directory and log it to CAMPAIGN.md.

    python3 tools/rig/round_report.py out/rig/runs/round1 [--label "round 1, no-think"]

Prints matched / parked / near-misses (>= 90 %) / compile-fail parks / token and
wall totals, and appends one row to docs/rig/CAMPAIGN.md.  The near-miss list is
the reflector's worklist: each one is a missing idiom or a tooling gap.
"""
from __future__ import annotations

import argparse
import json
import sys
import time
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402

CAMPAIGN = rc.ROOT / "docs" / "rig" / "CAMPAIGN.md"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("run_dir")
    ap.add_argument("--label", default="")
    ap.add_argument("--no-log", action="store_true")
    args = ap.parse_args()
    run_dir = Path(args.run_dir)
    rows = []
    for sp in sorted(run_dir.glob("*/summary.json")):
        d = json.loads(sp.read_text())
        d["_dir"] = sp.parent
        rows.append(d)
    if not rows:
        print("no summaries in", run_dir)
        return 1
    matched = [r for r in rows if r.get("result") == "matched"]
    parked = [r for r in rows if r.get("result") == "parked"]
    near = [r for r in parked if (r.get("best_fuzzy") or 0) >= 90]
    cfail = [r for r in parked if "failed to compile" in (r.get("park_reason") or "")]
    reasons = Counter((r.get("park_reason") or "")[:60] for r in parked)
    tok_p = sum(r.get("tokens", {}).get("prompt", 0) for r in rows)
    tok_c = sum(r.get("tokens", {}).get("completion", 0) for r in rows)
    wall = max((r.get("wall_s") or 0) for r in rows)
    att_m = [r.get("attempts", 0) for r in matched]
    bytes_m = sum(r.get("size", 0) for r in matched)
    model = rows[0].get("model", "?")
    psha = rows[0].get("prompt_sha", "?")
    print(f"run {run_dir.name}: {len(rows)} fns, model {model}, prompt {psha}")
    print(f"  matched {len(matched)} ({bytes_m} B)  attempts/match {sorted(att_m)}")
    print(f"  parked  {len(parked)}  near-miss>=90% {len(near)}  compile-fail parks {len(cfail)}")
    for k, v in reasons.most_common():
        print(f"    {v:2d}  {k}")
    print(f"  tokens prompt {tok_p} completion {tok_c}; wall {int(wall)} s")
    print("  near misses (reflector worklist):")
    for r in sorted(near, key=lambda r: -(r.get("best_fuzzy") or 0)):
        print(f"    {r['addr']} {r.get('symbol')} best {r.get('best_fuzzy')} att {r.get('attempts')}  {r['_dir']}")
    print("  all rows:")
    for r in rows:
        print(f"    {r['addr']} {r.get('result'):8s} best {r.get('best_fuzzy'):6.2f} att {r.get('attempts'):2d} {r.get('symbol')}")
    if not args.no_log:
        if not CAMPAIGN.exists():
            CAMPAIGN.write_text("# Matching campaign log\n\nOne row per driver run (see tools/rig/round_report.py).\n\n"
                                "| when | run | label | model | prompt | fns | matched | bytes | near-miss | compile-fail | attempts/match | tokens (p/c) | wall |\n"
                                "|---|---|---|---|---|---|---|---|---|---|---|---|---|\n")
        CAMPAIGN.open("a").write(
            f"| {time.strftime('%Y-%m-%d %H:%M')} | {run_dir.name} | {args.label} | {model} | {psha} | {len(rows)} | "
            f"{len(matched)} | {bytes_m} | {len(near)} | {len(cfail)} | {sorted(att_m)} | {tok_p}/{tok_c} | {int(wall)} s |\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
