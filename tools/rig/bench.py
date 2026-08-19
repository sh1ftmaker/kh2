#!/usr/bin/env python3
"""bench.py — held-out re-match benchmark for prompt / catalogue / tool changes.

A fixed set of ALREADY-MATCHED functions (stratified by size bin) is run through
the normal worker loop with --bench (nothing is promoted; `exact` is recorded).
The re-match rate within the attempt budget is the prompt-quality metric: no
change to AGENT_PROMPT.md, codegen-3.2.md or the rig tools should land if it
lowers this number.

    python3 tools/rig/bench.py make-set              # writes docs/rig/bench_set.tsv once
    python3 tools/rig/bench.py run --parallel 5 --no-think [--prompt alt.md] [--label "..."]
    python3 tools/rig/bench.py report out/rig/runs/bench-<ts>

The set is deterministic (seeded) and excludes src/anon rows of < 80 B (those
are trivially re-matched and would inflate the number).
"""
from __future__ import annotations

import argparse
import hashlib
import json
import random
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402

SET_PATH = rc.ROOT / "docs" / "rig" / "bench_set.tsv"
BENCH_MD = rc.ROOT / "docs" / "rig" / "BENCH.md"
BINS = [("<80", 0, 79, 8), ("80-199", 80, 199, 14), ("200-499", 200, 499, 6), ("500+", 500, 1 << 30, 2)]


def make_set(seed: int = 20260819) -> int:
    status = rc.layout_status()
    regs = rc.registry_symbols()
    rnd = random.Random(seed)
    rows = []
    for lab, lo, hi, n in BINS:
        pool = []
        for row in rc.layout():
            mode, src = status.get(row.addr, ("asm", ""))
            if mode != "cxx" or not (lo <= row.size <= hi):
                continue
            if src.startswith("src/anon/") and row.size < 80:
                continue
            sym = regs.get(row.addr, "")
            pool.append((row.addr, row.size, sym, src))
        rnd.shuffle(pool)
        rows.extend([(lab, *p) for p in pool[:n]])
    SET_PATH.parent.mkdir(parents=True, exist_ok=True)
    with SET_PATH.open("w") as f:
        f.write("bin\taddr\tsize\tsymbol\tsource\n")
        for lab, a, sz, sym, src in rows:
            f.write(f"{lab}\t0x{a:08x}\t{sz}\t{sym}\t{src}\n")
    print(f"wrote {len(rows)} rows to {SET_PATH}")
    return 0


def load_set():
    out = []
    for line in SET_PATH.read_text().splitlines()[1:]:
        p = line.split("\t")
        if len(p) >= 5:
            out.append({"bin": p[0], "addr": p[1], "size": int(p[2]), "symbol": p[3], "source": p[4]})
    return out


def run(args) -> int:
    if not SET_PATH.exists():
        make_set()
    rows = load_set()
    ts = time.strftime("%Y%m%d-%H%M%S")
    run_dir = rc.RIG_OUT / "runs" / f"bench-{ts}"
    cmd = [sys.executable, str(Path(__file__).parent / "driver.py"), "--bench",
           "--endpoint", args.endpoint, "--model", args.model,
           "--parallel", str(args.parallel), "--max-attempts", str(args.max_attempts),
           "--log-dir", str(run_dir)]
    if args.no_think:
        cmd.append("--no-think")
    if args.prompt:
        cmd += ["--prompt", args.prompt]
    for r in rows:
        cmd += ["--addr", r["addr"]]
    print("running:", " ".join(cmd[:12]), f"... ({len(rows)} targets)")
    t0 = time.time()
    subprocess.run(cmd, cwd=rc.ROOT)
    return report(run_dir, label=args.label, wall=time.time() - t0)


def report(run_dir: Path, label: str = "", wall: float = 0.0) -> int:
    rows = load_set()
    by_bin = {}
    total = 0
    ok = 0
    attempts_exact = []
    prompt_sha = ""
    for r in rows:
        sp = run_dir / r["addr"].replace("0x", "") / "summary.json"
        if not sp.exists():
            continue
        d = json.loads(sp.read_text())
        prompt_sha = d.get("prompt_sha", prompt_sha)
        b = by_bin.setdefault(r["bin"], [0, 0])
        b[1] += 1
        total += 1
        if d.get("exact") or d.get("result") == "matched" or float(d.get("best_fuzzy") or 0) >= 100.0:
            b[0] += 1
            ok += 1
            attempts_exact.append(d.get("attempts", 0))
    rate = (100.0 * ok / total) if total else 0.0
    bins_txt = " · ".join(f"{k} {v[0]}/{v[1]}" for k, v in by_bin.items())
    med = sorted(attempts_exact)[len(attempts_exact) // 2] if attempts_exact else "-"
    line = (f"| {time.strftime('%Y-%m-%d %H:%M')} | {prompt_sha} | {label or run_dir.name} | "
            f"**{ok}/{total} = {rate:.0f} %** | {bins_txt} | median attempts {med} | {int(wall)} s |\n")
    if not BENCH_MD.exists():
        BENCH_MD.write_text("# Held-out re-match bench\n\nSet: `docs/rig/bench_set.tsv`. "
                            "A change is accepted only if the rate does not drop.\n\n"
                            "| when | prompt sha | label | rate | by bin | attempts | wall |\n|---|---|---|---|---|---|---|\n")
    BENCH_MD.open("a").write(line)
    print(line)
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    sub.add_parser("make-set")
    r = sub.add_parser("run")
    r.add_argument("--endpoint", default="http://spark-e3f4.local:8000/v1")
    r.add_argument("--model", default="qwen3.8-27b")
    r.add_argument("--parallel", type=int, default=5)
    r.add_argument("--max-attempts", type=int, default=12)
    r.add_argument("--no-think", action="store_true")
    r.add_argument("--prompt")
    r.add_argument("--label", default="")
    p = sub.add_parser("report")
    p.add_argument("run_dir")
    p.add_argument("--label", default="")
    args = ap.parse_args()
    if args.cmd == "make-set":
        return make_set()
    if args.cmd == "run":
        return run(args)
    return report(Path(args.run_dir), label=args.label)


if __name__ == "__main__":
    sys.exit(main())
