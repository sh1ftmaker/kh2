#!/usr/bin/env python3
"""scheduler.py — score every undecompiled row and write out/rig/queue.tsv.

No LLM involved. Each row gets a score and a human-readable list of reasons, so
it is always visible *why* a function came up. driver.py --queue reads the file
top-down, skipping rows that are locked, parked or already matched.

    python3 tools/rig/scheduler.py --min-size 80 --max-size 200 --limit 40
    python3 tools/rig/scheduler.py --tier 1        # 80-200 B preset
    python3 tools/rig/scheduler.py --tier 2        # 200-500 B preset

Score components (all mechanical, weights at the top of the file):
  twin           coddog-style similarity to a recently matched function (optional:
                 out/rig/twins.tsv  addr<TAB>matched_addr<TAB>score, produced by
                 tools/coddog-smoke or reflect.py)
  same_class     the class of this function had a promotion in the last N rounds
  named          E3 name with seed/high confidence (stubs get nothing)
  arity          share of callees whose arity is VERIFIED
  layout         DWARF class layout available for the owning class
  leaf           few calls (leaf-first), no calls at all gets the most
  no_vu0         rows with COP2 ops are skipped entirely
  recently_parked penalty, decays with rounds since parked
"""
from __future__ import annotations

import argparse
import csv
import json
import sys
import time
from pathlib import Path
from typing import Dict, List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from list_candidates import list_candidates, parked_addrs  # noqa: E402
from get_context import class_names_from, prototype_for  # noqa: E402

W = {
    "twin": 40.0,        # scaled by similarity (0..1)
    "same_class": 15.0,
    "named_seed": 12.0,
    "named_high": 10.0,
    "named_med": 4.0,
    "arity": 10.0,       # scaled by verified share
    "layout": 8.0,
    "leaf0": 8.0,
    "leaf_small": 4.0,   # 1-3 calls
    "parked": -30.0,
}

QUEUE = rc.RIG_OUT / "queue.tsv"
TWINS = rc.RIG_OUT / "twins.tsv"
PROMOTIONS = rc.RIG_OUT / "promotions.tsv"   # addr<TAB>symbol<TAB>ts, appended by promote/driver


def load_twins() -> Dict[int, float]:
    out: Dict[int, float] = {}
    if TWINS.exists():
        for line in TWINS.read_text().splitlines():
            parts = line.split("\t")
            if len(parts) >= 3:
                try:
                    a = int(parts[0], 16)
                    s = float(parts[2])
                    out[a] = max(out.get(a, 0.0), s)
                except ValueError:
                    pass
    return out


def recent_classes(limit_rounds_s: float = 48 * 3600) -> set:
    """Classes that had a promotion recently (from promotions.tsv or git log)."""
    classes = set()
    now = time.time()
    if PROMOTIONS.exists():
        for line in PROMOTIONS.read_text().splitlines():
            parts = line.split("\t")
            if len(parts) >= 3:
                try:
                    ts = float(parts[2])
                except ValueError:
                    continue
                if now - ts <= limit_rounds_s:
                    dem = rc.demangle(parts[1])
                    for cn in class_names_from(dem):
                        classes.add(cn)
    return classes


def score_rows(rows: List[dict], twins: Dict[int, float], classes: set,
               parked: set) -> List[dict]:
    out = []
    for r in rows:
        addr = int(r["addr"], 16)
        s = 0.0
        why = []
        tw = twins.get(addr, 0.0)
        if tw > 0:
            s += W["twin"] * tw
            why.append(f"twin {tw:.2f}")
        dem = r.get("demangled") or ""
        cns = class_names_from(dem) if dem else []
        if any(cn in classes for cn in cns):
            s += W["same_class"]
            why.append("class had a recent promotion")
        conf = r.get("confidence") or ""
        if r.get("symbol") and not str(r["symbol"]).startswith(("func_", "wtarget_", "ctarget_", "u_call_", "u_tail_")):
            if conf == "seed":
                s += W["named_seed"]; why.append("registered name")
            elif conf == "high":
                s += W["named_high"]; why.append("E3 name (high)")
            elif conf == "med":
                s += W["named_med"]; why.append("E3 name (med)")
            else:
                s += W["named_seed"]; why.append("registered name")
        # callee arity
        scan = rc.scan_row(addr, r["size"])
        ncall = scan["n_calls"]
        if scan["uses_vu0"]:
            continue
        if ncall:
            ver = 0
            for a in scan["calls"]:
                csym = rc.registry_symbols().get(a, "") or rc.e3_map().get(a, {}).get("mangled", "")
                if prototype_for(csym)["arity_status"] == "VERIFIED":
                    ver += 1
            share = ver / ncall
            s += W["arity"] * share
            why.append(f"callee arity verified {ver}/{ncall}")
            if ncall <= 3:
                s += W["leaf_small"]
        else:
            s += W["leaf0"]; why.append("leaf")
        if cns and any(rc.type_block(cn) for cn in cns):
            s += W["layout"]; why.append("DWARF layout")
        if addr in parked:
            s += W["parked"]; why.append("parked")
        out.append({**r, "score": round(s, 2), "n_calls": ncall, "reasons": "; ".join(why)})
    out.sort(key=lambda x: (-x["score"], x["size"], x["addr"]))
    return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--tier", type=int, choices=[1, 2, 3])
    ap.add_argument("--min-size", type=int, default=80)
    ap.add_argument("--max-size", type=int, default=200)
    ap.add_argument("--namespace")
    ap.add_argument("--include-parked", action="store_true")
    ap.add_argument("--limit", type=int, default=40)
    ap.add_argument("--out", default=str(QUEUE))
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args()
    if args.tier == 1:
        args.min_size, args.max_size = 80, 200
    elif args.tier == 2:
        args.min_size, args.max_size = 200, 500
    elif args.tier == 3:
        args.min_size, args.max_size = 500, 1000

    parked = parked_addrs()
    rows = list_candidates(min_size=args.min_size, max_size=args.max_size,
                           named_only=False, namespace=args.namespace,
                           exclude_parked=not args.include_parked, exclude_vu0=True,
                           limit=1 << 30, sort="size", scan=False)
    scored = score_rows(rows, load_twins(), recent_classes(), parked)[: args.limit]
    outp = Path(args.out)
    outp.parent.mkdir(parents=True, exist_ok=True)
    with outp.open("w", newline="") as f:
        w = csv.writer(f, delimiter="\t", lineterminator="\n")
        w.writerow(["addr", "size", "symbol", "score", "n_calls", "confidence", "reasons"])
        for r in scored:
            w.writerow([r["addr"], r["size"], r.get("symbol") or "", r["score"], r["n_calls"],
                        r.get("confidence") or "", r["reasons"]])
    if args.json:
        print(json.dumps({"ok": True, "queue": str(outp), "n": len(scored), "rows": scored[:10]}, indent=1))
    else:
        print(f"wrote {len(scored)} rows to {outp}")
        for r in scored[:15]:
            print(f"{r['addr']} {r['size']:5d} {r['score']:6.1f}  {r.get('symbol') or '-':50s} {r['reasons']}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
