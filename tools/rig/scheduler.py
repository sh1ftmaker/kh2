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

def _no_requeue() -> set:
    """Addrs the twin rule must never revive — documented residues (e.g. the s1/s2
    dtor-family swap). Primary source is docs/rig/no_requeue.tsv (drivers rewrite
    parked.tsv rows on every re-park, so tags there don't survive a round);
    'do not requeue' in a parked.tsv reason/hypothesis is honoured as well."""
    out = set()
    nr = rc.ROOT / "docs" / "rig" / "no_requeue.tsv"
    if nr.exists():
        for i, line in enumerate(nr.read_text().splitlines()):
            if i == 0 or not line.strip() or line.startswith("#"):
                continue
            try:
                out.add(int(line.split("\t")[0], 16))
            except ValueError:
                pass
    tsv = rc.ROOT / "docs" / "rig" / "parked.tsv"
    if tsv.exists():
        for i, line in enumerate(tsv.read_text().splitlines()):
            if i == 0 or not line.strip() or line.startswith("#"):
                continue
            p = line.split("\t")
            if len(p) >= 6 and "do not requeue" in (p[4] + " " + p[5]).lower():
                try:
                    out.add(int(p[0], 16))
                except ValueError:
                    pass
    return out


NO_REQUEUE = _no_requeue()

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


PMATCH = rc.ROOT / "docs" / "rig" / "pmatch.json"


def _signals(r: dict, twins: Dict[int, float], classes: set) -> Optional[dict]:
    """The pick-time signals, as plain numbers. One definition, used both to
    score the queue and to fit P(match) in calibrate.py -- a model fitted on
    features the scheduler does not actually serve would be worthless."""
    addr = int(r["addr"], 16)
    scan = rc.scan_row(addr, r["size"])
    if scan["uses_vu0"]:
        return None
    dem = r.get("demangled") or ""
    cns = class_names_from(dem) if dem else []
    conf = r.get("confidence") or ""
    named = 0.0
    if r.get("symbol") and not str(r["symbol"]).startswith(
            ("func_", "wtarget_", "ctarget_", "u_call_", "u_tail_")):
        named = {"seed": 1.0, "high": 0.85, "med": 0.4}.get(conf, 1.0)
    ver = 0
    for a in scan["calls"]:
        csym = rc.registry_symbols().get(a, "") or rc.e3_map().get(a, {}).get("mangled", "")
        if prototype_for(csym)["arity_status"] == "VERIFIED":
            ver += 1
    return {
        "twin": twins.get(addr, 0.0),
        "named": named,
        "arity": (ver / scan["n_calls"]) if scan["n_calls"] else 1.0,
        "layout": 1.0 if (cns and any(rc.type_block(cn) for cn in cns)) else 0.0,
        "leaf": 1.0 if not scan["n_calls"] else (1.0 if scan["n_calls"] <= 3 else 0.0),
        "n_calls": scan["n_calls"],
        "classes": cns,
        "recent_class": any(cn in classes for cn in cns),
    }


def queue_features(addrs: Optional[set] = None) -> Dict[str, dict]:
    """addr-string -> signals, for calibration. Covers matched rows too: they are
    exactly the positive examples, and dropping them would train the model on
    failures only."""
    twins = load_twins()
    classes = recent_classes()
    out: Dict[str, dict] = {}
    for row in rc.layout():
        key = f"0x{row.addr:08x}"
        if addrs is not None and key not in addrs:
            continue
        sym = rc.registry_symbols().get(row.addr, "") or \
            rc.e3_map().get(row.addr, {}).get("mangled", "")
        sig = _signals({"addr": key, "size": row.size, "symbol": sym,
                        "confidence": "", "demangled": rc.demangle(sym) if sym else ""},
                       twins, classes)
        if sig:
            out[key] = sig
    return out


def pmatch_model() -> Optional[dict]:
    if PMATCH.exists():
        try:
            return json.loads(PMATCH.read_text())
        except ValueError:
            return None
    return None


def pmatch(model: dict, sig: dict, size: int) -> float:
    import math
    # the served model may carry fewer features than were fitted (calibrate.py
    # drops the ones a selection effect could have inverted), so read the list
    # the model itself declares rather than assuming all six
    vals = {"twin": sig.get("twin", 0.0), "named": sig.get("named", 0.0),
            "arity": sig.get("arity", 0.0), "layout": sig.get("layout", 0.0),
            "leaf": sig.get("leaf", 0.0), "log_size": math.log(max(size, 1))}
    x = [vals[f] for f in model.get("features", list(vals))]
    z = model["intercept"]
    for v, c, mu, sd in zip(x, model["coef"], model["mean"], model["std"]):
        z += c * (v - mu) / (sd or 1.0)
    return 1.0 / (1.0 + math.exp(-max(min(z, 30.0), -30.0)))


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
            arity_share = share
            s += W["arity"] * share
            why.append(f"callee arity verified {ver}/{ncall}")
            if ncall <= 3:
                s += W["leaf_small"]
        else:
            arity_share = 1.0
            s += W["leaf0"]; why.append("leaf")
        has_layout = bool(cns and any(rc.type_block(cn) for cn in cns))
        if has_layout:
            s += W["layout"]; why.append("DWARF layout")
        if addr in parked:
            if addr in NO_REQUEUE:
                s += 3 * W["parked"]; why.append("parked: documented residue, do not requeue")
            elif tw >= 0.85:
                why.append("parked, but a twin matched since -> retry")
            else:
                s += W["parked"]; why.append("parked")
        out.append({**r, "score": round(s, 2), "n_calls": ncall, "reasons": "; ".join(why),
                    "_arity": arity_share, "_layout": 1.0 if has_layout else 0.0})

    model = None if globals().get("_NO_PMATCH") else pmatch_model()
    if model:
        # Rank by expected *bytes*. The hand score ranks by how likely a match
        # looks, which is how the queue ended up full of 100 B twins: 20 rounds
        # of them averaged ~130 B a match. P(match) x size puts a 300 B row at
        # half the odds ahead of a 100 B row at even odds, which is the trade
        # the project's own headline metric asks for.
        for r in out:
            sig = {"twin": twins.get(int(r["addr"], 16), 0.0),
                   "named": 1.0 if (r.get("symbol") and not str(r["symbol"]).startswith(
                       ("func_", "wtarget_", "ctarget_", "u_call_", "u_tail_"))) else 0.0,
                   "arity": r.get("_arity", 0.0), "layout": r.get("_layout", 0.0),
                   "leaf": 1.0 if r["n_calls"] <= 3 else 0.0}
            p = pmatch(model, sig, r["size"])
            r["p_match"] = round(p, 4)
            r["exp_bytes"] = round(p * r["size"], 1)
            if r["score"] < 0:            # parked/no-requeue penalties still win
                r["exp_bytes"] = -abs(r["exp_bytes"]) + r["score"]
            r["reasons"] += f"; p={p:.2f} exp {r['exp_bytes']:.0f} B"
        out.sort(key=lambda x: (-x["exp_bytes"], -x["score"], x["addr"]))
    else:
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
    ap.add_argument("--no-pmatch", action="store_true",
                    help="rank by the hand score only. P(match) is fitted on the Qwen "
                         "fleet's own outcomes, so it must not be used to pick targets "
                         "for a different engine -- clibatch.py passes this.")
    ap.add_argument("--tier2-quota", type=int, default=0,
                    help="reserve N queue slots for the best 200+B rows. Default 0: the "
                         "fleet has never matched a 200+ B function in 20 rounds, and the "
                         "calibrated P(match) says expected bytes still fall with size, so "
                         "the quota bought parks, not bytes. Tier 2 goes to clibatch.py.")
    ap.add_argument("--twins", type=int, default=150,
                    help="compute similarity-to-matched for the top-N pre-scored rows (0 = off)")
    args = ap.parse_args()
    if args.no_pmatch:
        globals()["_NO_PMATCH"] = True
    if args.tier == 1:
        args.min_size, args.max_size = 80, 200
    elif args.tier == 2:
        args.min_size, args.max_size = 200, 500
    elif args.tier == 3:
        args.min_size, args.max_size = 500, 1000

    parked = parked_addrs()
    # parked rows are always scored (the twin rule can bring them back); without
    # --include-parked the ones that stay penalised are dropped from the output
    rows = list_candidates(min_size=args.min_size, max_size=args.max_size,
                           named_only=False, namespace=args.namespace,
                           exclude_parked=False, exclude_vu0=True,
                           limit=1 << 30, sort="size", scan=False)
    twins = load_twins()
    if args.twins:
        # opcode-sequence similarity to the nearest matched function, computed for
        # the top-N rows by the other signals (each check costs ~10-50 ms)
        from get_context import most_similar_matched
        pre = score_rows(rows, {}, recent_classes(), set())[: args.twins]   # no park penalty here
        for r in pre:
            a = int(r["addr"], 16)
            sm = most_similar_matched(a, r["size"], "")
            if sm and sm.get("similarity", 0) >= 0.75:
                twins[a] = max(twins.get(a, 0.0), float(sm["similarity"]))
                r["twin_of"] = sm.get("symbol") or sm.get("addr")
        # persist what we computed: twin similarity is the project's strongest
        # signal, but it was never written down, so every calibration saw it as
        # a constant zero and could not learn it. Appending here makes the next
        # fit able to.
        if twins:
            with TWINS.open("a") as tf:
                for a, s in sorted(twins.items()):
                    tf.write(f"0x{a:08x}\t-\t{s:.4f}\t{int(time.time())}\n")
    scored = score_rows(rows, twins, recent_classes(), parked)
    if not args.include_parked:
        scored = [r for r in scored if not r["reasons"].endswith("parked")
                  and "do not requeue" not in r["reasons"]]
    quota = args.tier2_quota if args.tier2_quota >= 0 else (
        args.limit // 4 if args.max_size > 200 else 0)
    if quota:
        # tier-1 twins outscore everything, so 200+B rows never surface on score
        # alone — reserve slots for the best of them (that's where the bytes are).
        # Interleave (3 small : 1 big) so any top-N prefix keeps the ratio: the
        # driver reads the queue top-down and may take fewer rows than the limit.
        big = [r for r in scored if r["size"] >= 200][:quota]
        big_set = {id(r) for r in big}
        small = [r for r in scored if id(r) not in big_set][: args.limit - len(big)]
        for r in big:
            r["reasons"] += "; tier2 quota"
        woven, si, bi = [], 0, 0
        while si < len(small) or bi < len(big):
            for _ in range(3):
                if si < len(small):
                    woven.append(small[si]); si += 1
            if bi < len(big):
                woven.append(big[bi]); bi += 1
        scored = woven
    else:
        scored = scored[: args.limit]
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
