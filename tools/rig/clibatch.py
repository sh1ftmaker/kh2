#!/usr/bin/env python3
"""clibatch.py — nightly frontier-model batch on the 200-1000 B tier.

The arena settled the allocation question. gpt-5.6-sol at high effort and
claude-opus-5 each solved 8 of 12 arena targets, including the only two 200+ B
functions this project has ever matched by machine, in a couple of CLI hours.
The Qwen fleet, over twenty rounds with a quarter of every queue reserved for
tier 2, matched none. Meanwhile the 200-1000 B band holds 54 % of all remaining
bytes.

So the expensive models stop being a benchmark curiosity and become the standing
engine for that band, and the fleet keeps the small twin-adjacent rows it is
actually good at.

    python3 tools/rig/clibatch.py --engine codex --count 25       # a night's work
    python3 tools/rig/clibatch.py --engine claude --failed-by codex
    python3 tools/rig/clibatch.py --dry-run                       # just the target cut

Quota is the real constraint and it is unmeasured: the arena's 12 targets are
the only data point. Every call is logged to docs/rig/quota_ledger.tsv with its
wall time and outcome so the sustainable batch size becomes an observation
rather than a guess. Start small, read the ledger, then raise --count.

Byte-exact results are re-verified with compile_diff before promotion, never
trusted from the CLI's own claim.
"""
from __future__ import annotations

import argparse
import json
import os
import re
import signal
import subprocess
import sys
import time
from pathlib import Path
from typing import List, Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from compile_diff import compile_diff  # noqa: E402

LEDGER = rc.ROOT / "docs" / "rig" / "quota_ledger.tsv"
OUT = rc.RIG_OUT / "clibatch"
PROMPT_PATH = rc.ROOT / "docs" / "rig" / "AGENT_PROMPT.md"
CATALOGUE = rc.ROOT / "docs" / "codegen-3.2.md"

ENGINES = {
    # the arena's efficiency frontier: high effort matched max/ultra at 2.3x less wall
    "codex": {"cmd": ["codex", "exec", "-c", 'model_reasoning_effort="high"', "-m", "gpt-5.6-sol"],
              "stdin": True, "timeout": 480},
    "claude": {"cmd": ["claude", "-p", "--model", "claude-opus-5", "--output-format", "text"],
               "stdin": True, "timeout": 480},
    "gemini": {"cmd": ["gemini", "-m", "gemini-3.1-pro-preview-customtools"],
               "stdin": True, "timeout": 480},
}


def log_call(engine: str, addr: str, attempt: int, wall: float, outcome: str) -> None:
    new = not LEDGER.exists()
    with LEDGER.open("a") as f:
        if new:
            f.write("ts\tengine\taddr\tattempt\twall_s\toutcome\n")
        f.write(f"{int(time.time())}\t{engine}\t{addr}\t{attempt}\t{wall:.0f}\t{outcome}\n")


def call(engine: str, prompt: str) -> tuple[str, float, str]:
    """One CLI call. Kills the whole process group on timeout: the gemini launcher
    re-execs node as a grandchild, and the arena leaked 13 orphans that kept
    calling the API and looked like cascading 503s."""
    spec = ENGINES[engine]
    t0 = time.time()
    try:
        p = subprocess.Popen(spec["cmd"], stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE, text=True, start_new_session=True)
        try:
            out, err = p.communicate(prompt, timeout=spec["timeout"])
        except subprocess.TimeoutExpired:
            os.killpg(os.getpgid(p.pid), signal.SIGKILL)
            p.communicate()
            return "", time.time() - t0, "timeout"
    except FileNotFoundError:
        return "", 0.0, "engine-not-installed"
    if p.returncode != 0 and not out.strip():
        return "", time.time() - t0, f"exit{p.returncode}:{(err or '')[:60]}"
    return out, time.time() - t0, "ok"


def extract_cpp(text: str) -> Optional[str]:
    blocks = re.findall(r"```(?:c\+\+|cpp|c)?\s*\n(.*?)```", text, re.S)
    if blocks:
        return max(blocks, key=len)
    return text if "#include" in text and "{" in text else None


def targets(count: int, lo: int, hi: int) -> List[dict]:
    """A dedicated scheduler cut of the band the CLIs can actually eat."""
    q = rc.RIG_OUT / "clibatch_queue.tsv"
    subprocess.run([sys.executable, str(Path(__file__).parent / "scheduler.py"),
                    "--min-size", str(lo), "--max-size", str(hi),
                    "--limit", str(count * 4), "--tier2-quota", "0", "--no-pmatch",
                    "--out", str(q)], cwd=rc.ROOT, capture_output=True, text=True)
    rows, st = [], rc.layout_status()
    if q.exists():
        for line in q.read_text().splitlines()[1:]:
            p = line.split("\t")
            if len(p) >= 3 and st.get(int(p[0], 16), ("asm", ""))[0] != "cxx":
                rows.append({"addr": p[0], "size": int(p[1]), "symbol": p[2]})
    # The fleet's P(match) model is fitted on Qwen outcomes and would rank these
    # by what Qwen can do; the CLIs are here precisely because they can do more.
    # Rank by the hand signals (named, layout, verified arity) and then take the
    # biggest, which is the whole point of routing this band to them.
    rows.sort(key=lambda r: -r["size"])
    return rows[:count]


def context_for(addr: str) -> str:
    cp = subprocess.run([sys.executable, str(Path(__file__).parent / "get_context.py"), addr],
                        cwd=rc.ROOT, capture_output=True, text=True, timeout=300)
    return cp.stdout


def feedback(res: dict) -> str:
    cls = (res.get("diff_classes") or {}).get("counts") or {}
    rows = "\n".join(f"  {r}" for r in (res.get("diff") or [])[:40])
    return (f"\nNot a match: {res.get('fuzzy_pct', 0):.2f} % "
            f"({res.get('compiled_size')} bytes vs {res.get('size')}).\n"
            f"diff classes: {cls}\n{rows}\n"
            + "\n".join((res.get("diff_classes") or {}).get("hints") or []))


def run_target(engine: str, t: dict, attempts: int, tdir: Path, system: str) -> dict:
    tdir.mkdir(parents=True, exist_ok=True)
    ctx = context_for(t["addr"])
    convo = f"{system}\n\n---\n{ctx}\n\nWrite the complete C++ file. Output one code block, nothing else.\n"
    best = {"fuzzy": 0.0, "exact": False, "attempts": 0, "wall": 0.0}
    for n in range(1, attempts + 1):
        (tdir / f"prompt_{n:03d}.txt").write_text(convo)
        reply, wall, status = call(engine, convo)
        best["wall"] += wall
        best["attempts"] = n
        log_call(engine, t["addr"], n, wall, status)
        if status != "ok":
            print(f"    attempt {n}: {status}", flush=True)
            if status in ("engine-not-installed",) or "exit" in status:
                break
            continue
        (tdir / f"reply_{n:03d}.txt").write_text(reply)
        cpp = extract_cpp(reply)
        if not cpp:
            convo += "\nYour reply had no code block. Output the complete file in one ```cpp block.\n"
            continue
        att = tdir / f"attempt_{n:03d}.cpp"
        att.write_text(cpp)
        res = compile_diff(t["addr"], att)
        (tdir / f"score_{n:03d}.json").write_text(json.dumps(
            {"fuzzy": res.get("fuzzy_pct"), "exact": bool(res.get("exact"))}))
        if res.get("exact"):
            best.update(exact=True, fuzzy=100.0, file=str(att))
            print(f"    attempt {n}: EXACT", flush=True)
            return best
        best["fuzzy"] = max(best["fuzzy"], float(res.get("fuzzy_pct") or 0))
        errs = res.get("compile_errors") or []
        convo += (f"\n\n{'Compile errors: ' + chr(10).join(errs[:8]) if errs else feedback(res)}\n"
                  "Fix it and output the complete file again in one code block.\n")
        print(f"    attempt {n}: {res.get('fuzzy_pct', 0):.2f} %", flush=True)
    return best


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--engine", choices=list(ENGINES), default="codex")
    ap.add_argument("--count", type=int, default=25)
    ap.add_argument("--attempts", type=int, default=8)
    ap.add_argument("--min-size", type=int, default=200)
    ap.add_argument("--max-size", type=int, default=1000)
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--label", default=time.strftime("%Y%m%d"))
    args = ap.parse_args()

    rows = targets(args.count, args.min_size, args.max_size)
    print(f"clibatch: {len(rows)} targets, {sum(r['size'] for r in rows):,} bytes in play")
    for r in rows:
        print(f"  {r['addr']} {r['size']:5d} B  {r['symbol'][:56]}")
    if args.dry_run or not rows:
        return 0

    system = PROMPT_PATH.read_text()
    if CATALOGUE.exists():
        system += "\n\n---\n# Idiom catalogue (docs/codegen-3.2.md)\n\n" + CATALOGUE.read_text()

    root = OUT / f"{args.engine}-{args.label}"
    wins, t0 = [], time.time()
    for r in rows:
        print(f"[{r['addr']} {r['size']} B] {r['symbol'][:50]}", flush=True)
        best = run_target(args.engine, r, args.attempts, root / r["addr"].replace("0x", ""), system)
        if best.get("exact"):
            wins.append({**r, "file": best["file"]})
    summary = {"engine": args.engine, "targets": len(rows), "exact": len(wins),
               "bytes": sum(w["size"] for w in wins), "wall_s": round(time.time() - t0),
               "wins": wins}
    (root / "summary.json").write_text(json.dumps(summary, indent=1))
    print(json.dumps(summary, indent=1))
    print("\nre-verify and promote with:")
    for w in wins:
        print(f"  python3 tools/rig/promote.py {w['addr']} --src {w['file']} --dest src/<dir>/<tu>.cpp")
    return 0


if __name__ == "__main__":
    sys.exit(main())
