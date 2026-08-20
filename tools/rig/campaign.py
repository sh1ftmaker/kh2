#!/usr/bin/env python3
"""campaign.py — unattended recursive-improvement loop.

Each round: scheduler -> driver (N parallel workers) -> round_report ->
reflect (LLM worklist + proposals).  Every --evolve-every rounds the collected
proposals go through evolve.py, which appends a distilled prompt adjustment and
accepts it only if the held-out bench does not drop (the gate never relaxes).

    python3 tools/rig/campaign.py --rounds 6 --workers 16 --no-think --push
    touch out/rig/STOP          # graceful stop after the current round

Resumable: state in out/rig/campaign_state.json; a rerun with the same --label
continues at the next round.  Stops on: rounds reached, queue exhausted,
STOP file, endpoint unreachable for > 10 min.
"""
from __future__ import annotations

import argparse
import json
import shutil
import subprocess
import sys
import time
import urllib.request
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402

STOP = rc.RIG_OUT / "STOP"
STATE = rc.RIG_OUT / "campaign_state.json"
QUEUE = rc.RIG_OUT / "queue.tsv"
PY = sys.executable
TOOLS = Path(__file__).resolve().parent


def sh(cmd: list[str], **kw) -> subprocess.CompletedProcess:
    print("+", " ".join(str(c) for c in cmd), flush=True)
    return subprocess.run([str(c) for c in cmd], cwd=rc.ROOT, **kw)


def notify(title: str, body: str = "") -> None:
    if shutil.which("tm-notify"):
        subprocess.run(["tm-notify", title, body, "--tag", "kh2-campaign"],
                       capture_output=True)


def endpoint_up(url: str, wait_s: int = 600) -> bool:
    deadline = time.time() + wait_s
    while time.time() < deadline:
        try:
            with urllib.request.urlopen(url.rstrip("/") + "/models", timeout=10):
                return True
        except Exception:
            time.sleep(15)
    return False


def queue_rows() -> int:
    if not QUEUE.exists():
        return 0
    return sum(1 for l in QUEUE.read_text().splitlines() if l.startswith("0x"))


def run_summary(run_dir: Path) -> dict:
    matched = parked = 0
    for sp in run_dir.glob("*/summary.json"):
        d = json.loads(sp.read_text())
        if d.get("result") == "matched":
            matched += 1
        else:
            parked += 1
    return {"matched": matched, "parked": parked}


def git_commit_push(msg: str, push: bool) -> None:
    sh(["git", "add", "-A"])
    r = sh(["git", "diff", "--cached", "--quiet"])
    if r.returncode == 0:
        return  # nothing staged
    sh(["git", "commit", "-m", msg + "\n\nCo-Authored-By: Claude Fable 5 <noreply@anthropic.com>"])
    if push:
        sh(["git", "push"])


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--rounds", type=int, default=6)
    ap.add_argument("--workers", type=int, default=12)
    ap.add_argument("--count", type=int, help="targets per round (default 2x workers)")
    ap.add_argument("--max-attempts", type=int, default=12)
    ap.add_argument("--tier", type=int, choices=[1, 2, 3])
    ap.add_argument("--min-size", type=int)
    ap.add_argument("--max-size", type=int)
    ap.add_argument("--namespace")
    ap.add_argument("--twins", type=int, default=150)
    ap.add_argument("--endpoint", default="http://spark-e3f4.local:8000/v1")
    ap.add_argument("--model", default="qwen3.8-27b")
    ap.add_argument("--no-think", action="store_true")
    ap.add_argument("--evolve-every", type=int, default=0,
                    # Default off since 2026-08-20. The 28-function gate runs one
                    # trial per function, and near-identical prompt families scored
                    # 7 -> 13 -> 5 -> 12 across runs; at that flake rate a
                    # no-regression gate rejects on noise, and the one candidate it
                    # accepted was followed by rounds of 1, 1, 1, 0 matches. It also
                    # once shipped a self-restating prompt that stopped five workers
                    # calling tools. Use bench.py --trials 3 for deliberate changes.
                    help="run bench-gated prompt evolution every N rounds (0 = never)")
    ap.add_argument("--evolve-first", action="store_true",
                    help="run evolve once before round 1 (consumes pending proposals)")
    ap.add_argument("--push", action="store_true")
    ap.add_argument("--label", default=time.strftime("c%Y%m%d"))
    args = ap.parse_args()
    count = args.count or 2 * args.workers

    st = {"label": args.label, "round": 0, "matched": 0, "runs": []}
    if STATE.exists():
        prev = json.loads(STATE.read_text())
        if prev.get("label") == args.label:
            st = prev
            print(f"resuming campaign {args.label} at round {st['round'] + 1}")
    if STOP.exists():
        STOP.unlink()

    if args.evolve_first and st["round"] == 0:
        print("== evolve (pre-campaign, consumes pending proposals) ==", flush=True)
        ev = [PY, TOOLS / "evolve.py", "--endpoint", args.endpoint, "--model", args.model,
              "--parallel", str(args.workers), "--max-attempts", str(args.max_attempts)]
        if args.no_think:
            ev.append("--no-think")
        sh(ev)
        git_commit_push(f"campaign {args.label}: pre-round evolve", args.push)

    while st["round"] < args.rounds:
        k = st["round"] + 1
        if STOP.exists():
            print("STOP file present — stopping before round", k)
            break
        if not endpoint_up(args.endpoint):
            notify("KH2 campaign halted", f"endpoint unreachable before round {k}")
            print("endpoint unreachable for 10 min — stopping")
            return 1

        print(f"== round {k}/{args.rounds} ==", flush=True)
        sched = [PY, TOOLS / "scheduler.py", "--limit", str(max(2 * count, 40)),
                 "--twins", str(args.twins)]
        if args.tier:
            sched += ["--tier", str(args.tier)]
        if args.min_size is not None:
            sched += ["--min-size", str(args.min_size)]
        if args.max_size is not None:
            sched += ["--max-size", str(args.max_size)]
        if args.namespace:
            sched += ["--namespace", args.namespace]
        sh(sched)
        if queue_rows() == 0:
            print("queue exhausted — campaign done")
            notify("KH2 campaign done", "queue exhausted")
            break

        run_dir = rc.RIG_OUT / "rounds" / f"{args.label}-r{k}"
        drv = [PY, TOOLS / "driver.py", "--queue", str(QUEUE),
               "--count", str(count), "--parallel", str(args.workers),
               "--max-attempts", str(args.max_attempts),
               "--endpoint", args.endpoint, "--model", args.model,
               "--log-dir", str(run_dir)]
        if args.no_think:
            drv.append("--no-think")
        t0 = time.time()
        sh(drv)
        summ = run_summary(run_dir)
        print(f"round {k}: {summ['matched']} matched, {summ['parked']} parked, "
              f"{int(time.time() - t0)} s", flush=True)

        sh([PY, TOOLS / "round_report.py", run_dir, "--label", f"{args.label}-r{k}"])

        # A round can end holding a byte-exact attempt it never credited: promote
        # can fail on a repo-side defect, or a candidate can be scored before the
        # registry gains a callee it needs. Six functions were recovered that way
        # on 2026-08-20, one of them from the previous campaign. Cheap to check,
        # expensive to miss.
        swept = subprocess.run([PY, str(TOOLS / "sweep.py"), "--json"], cwd=rc.ROOT,
                               capture_output=True, text=True)
        try:
            found = json.loads(swept.stdout or "{}").get("found", [])
        except ValueError:
            found = []
        if found:
            msg = ", ".join(f"{f['addr']} ({f['size']} B)" for f in found[:4])
            print(f"round {k}: SWEEP found {len(found)} exact-but-unpromoted: {msg}", flush=True)
            notify(f"KH2: {len(found)} exact but unpromoted",
                   f"{sum(f['size'] for f in found)} B waiting: {msg}")
        refl = [PY, TOOLS / "reflect.py", run_dir, "--llm",
                "--endpoint", args.endpoint, "--model", args.model]
        if args.no_think:
            refl.append("--no-think")
        sh(refl)

        st["round"] = k
        st["matched"] += summ["matched"]
        st["runs"].append(str(run_dir))
        STATE.write_text(json.dumps(st, indent=1))
        git_commit_push(f"campaign {args.label} round {k}: "
                        f"{summ['matched']} matched / {summ['parked']} parked", args.push)
        notify(f"KH2 round {k}: {summ['matched']} matched",
               f"campaign total {st['matched']}; {summ['parked']} parked")

        if args.evolve_every and k % args.evolve_every == 0 and not STOP.exists():
            print(f"== evolve after round {k} ==", flush=True)
            ev = [PY, TOOLS / "evolve.py", "--endpoint", args.endpoint, "--model", args.model,
                  "--parallel", str(args.workers), "--max-attempts", str(args.max_attempts)]
            if args.no_think:
                ev.append("--no-think")
            sh(ev)
            git_commit_push(f"campaign {args.label}: evolve after round {k}", args.push)

    print(f"campaign {args.label}: {st['round']} rounds, {st['matched']} matched total")
    notify("KH2 campaign finished",
           f"{st['round']} rounds, {st['matched']} matched")
    return 0


if __name__ == "__main__":
    sys.exit(main())
