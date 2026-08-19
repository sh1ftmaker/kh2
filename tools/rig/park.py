#!/usr/bin/env python3
"""park.py <addr|symbol> --reason <text> [--fuzzy N] [--hypothesis <text>]

Record that a function was attempted and set aside, so nobody burns tokens on
it again until something changes. Two sinks:

  out/rig/parked.json        machine state (gitignored, the live queue filter)
  docs/rig/parked.tsv        committed record: addr, size, symbol, best fuzzy,
                             reason, hypothesis, attempts, when

`--unpark` removes an entry from both.
"""

from __future__ import annotations

import argparse
import json
import sys
import time
from pathlib import Path
from typing import Dict

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rigcommon as rc

STATE = rc.RIG_OUT / "parked.json"
TSV = rc.ROOT / "docs" / "rig" / "parked.tsv"
HEADER = "addr\tsize\tsymbol\tbest_fuzzy\treason\thypothesis\tattempts\tparked_at\n"


def load_state() -> Dict[str, dict]:
    if STATE.exists():
        try:
            return json.loads(STATE.read_text())
        except json.JSONDecodeError:
            return {}
    return {}


def save_state(state: Dict[str, dict]) -> None:
    rc.ensure_out()
    STATE.write_text(json.dumps(state, indent=1, sort_keys=True) + "\n")


def write_tsv(state: Dict[str, dict]) -> None:
    TSV.parent.mkdir(parents=True, exist_ok=True)
    rows = []
    for key in sorted(state):
        e = state[key]
        rows.append(
            "\t".join(
                [
                    key,
                    str(e.get("size", "")),
                    e.get("symbol") or "",
                    str(e.get("best_fuzzy", "")),
                    (e.get("reason") or "").replace("\t", " ").replace("\n", " "),
                    (e.get("hypothesis") or "").replace("\t", " ").replace("\n", " "),
                    str(e.get("attempts", "")),
                    e.get("parked_at", ""),
                ]
            )
            + "\n"
        )
    TSV.write_text(HEADER + "".join(rows))


def park(spec: str, reason: str, fuzzy: float = 0.0, hypothesis: str = "",
         attempts: int = 0) -> dict:
    t = rc.resolve(spec)
    key = f"{t.addr:08x}"
    state = load_state()
    prev = state.get(key, {})
    entry = {
        "addr": key,
        "size": t.size,
        "symbol": t.symbol,
        "best_fuzzy": max(float(fuzzy), float(prev.get("best_fuzzy", 0.0))),
        "reason": reason,
        "hypothesis": hypothesis or prev.get("hypothesis", ""),
        "attempts": max(int(attempts), int(prev.get("attempts", 0))),
        "parked_at": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
    }
    state[key] = entry
    save_state(state)
    write_tsv(state)
    return {"ok": True, "parked": entry, "state": str(STATE), "record": str(TSV)}


def unpark(spec: str) -> dict:
    t = rc.resolve(spec)
    key = f"{t.addr:08x}"
    state = load_state()
    removed = state.pop(key, None)
    save_state(state)
    write_tsv(state)
    return {"ok": True, "unparked": removed is not None}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("target")
    ap.add_argument("--reason", default="")
    ap.add_argument("--fuzzy", type=float, default=0.0, help="best fuzzy_pct reached")
    ap.add_argument("--hypothesis", default="", help="what you think the blocker is")
    ap.add_argument("--attempts", type=int, default=0)
    ap.add_argument("--unpark", action="store_true")
    args = ap.parse_args()
    if args.unpark:
        rc.json_out(unpark(args.target))
        return 0
    if not args.reason:
        rc.die("--reason is required when parking")
    rc.json_out(park(args.target, args.reason, args.fuzzy, args.hypothesis, args.attempts))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
