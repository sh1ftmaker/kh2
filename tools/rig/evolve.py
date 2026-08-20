#!/usr/bin/env python3
"""evolve.py — bench-gated prompt evolution.

Collects the reflector proposals from recent rounds, asks the model to distill
the highest-confidence prompt adjustments into a short appendix, appends it to
a CANDIDATE copy of AGENT_PROMPT.md, and runs the held-out bench with the
candidate.  The candidate replaces AGENT_PROMPT.md only if the re-match rate
does not drop below the best previously accepted rate (the gate never relaxes).

    python3 tools/rig/evolve.py --no-think --parallel 8
    python3 tools/rig/evolve.py --dry-run          # build candidate, skip bench

Every bench run (accepted or rejected) is recorded in docs/rig/BENCH.md.
"""
from __future__ import annotations

import argparse
import json
import re
import shutil
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from bench import BENCH_MD, load_set, report as bench_report, SET_PATH, make_set  # noqa: E402

PROMPT_PATH = rc.ROOT / "docs" / "rig" / "AGENT_PROMPT.md"
EVOLVE_DIR = rc.RIG_OUT / "evolve"
STATE = EVOLVE_DIR / "state.json"

DISTILL_SYSTEM = """You maintain the system prompt of a MIPS-decompilation agent.
You are given the current prompt and the raw proposals from several reflection
rounds. Distill ONLY the highest-confidence, most general adjustments into a
short markdown appendix (at most 30 lines) that will be appended to the prompt.

Rules:
- Do not repeat anything already in the current prompt (including earlier
  evolved appendices) — only genuinely new guidance.
- Only include adjustments backed by concrete evidence in the proposals
  (a diagnosed diff, a repeated failure mode). Drop speculation.
- Keep the existing style: terse imperative rules, diff-reading rows where
  applicable.
- Output ONLY the appendix markdown, no preamble, no fences.
- If nothing new is worth adding, output exactly: NOTHING-NEW
"""


def _norm(line: str) -> str:
    """Normalised form of a prompt line for duplicate detection."""
    return re.sub(r"[\s`*|]+", " ", line).strip().lower()


def dedup_appendix(appendix: str, current: str) -> tuple[str, int]:
    """Drop appendix lines that already exist in the current prompt, and lines
    that repeat inside the appendix itself.

    The distiller sees its own earlier appendices as part of the prompt and
    happily re-emits them (round 6's candidate restated the whole accepted
    appendix twice and one diff row three times). That bloat is not neutral:
    the bench run degenerated — six workers answered with a couple of stray
    tokens and never called a tool. Deduping keeps the prompt from growing
    into itself.
    """
    have = {_norm(l) for l in current.splitlines() if _norm(l)}
    out, dropped = [], 0
    for line in appendix.splitlines():
        n = _norm(line)
        if not n or len(n) < 12:          # blank lines, table rules, short headers
            out.append(line)
            continue
        if n in have:
            dropped += 1
            continue
        have.add(n)
        out.append(line)
    # a table whose every data row was dropped leaves a bare header behind
    kept = [l for l in out if _norm(l) and len(_norm(l)) >= 12]
    return ("\n".join(out).strip() if kept else ""), dropped


def state() -> dict:
    if STATE.exists():
        return json.loads(STATE.read_text())
    return {"consumed": []}


def save_state(st: dict) -> None:
    EVOLVE_DIR.mkdir(parents=True, exist_ok=True)
    STATE.write_text(json.dumps(st, indent=1))


def baseline_rate() -> float:
    """Best rate among baseline/ACCEPTED rows in BENCH.md."""
    best = 0.0
    if not BENCH_MD.exists():
        return best
    for line in BENCH_MD.read_text().splitlines():
        if not line.startswith("|") or "prompt sha" in line:
            continue
        cells = [c.strip() for c in line.split("|")]
        if len(cells) < 5:
            continue
        label, rate_cell = cells[3], cells[4]
        if "baseline" not in label and "ACCEPTED" not in label:
            continue
        m = re.search(r"=\s*(\d+(?:\.\d+)?)\s*%", rate_cell)
        if m:
            best = max(best, float(m.group(1)))
    return best


def gather_proposals(st: dict, max_rounds: int = 6) -> list[Path]:
    rounds_dir = rc.RIG_OUT / "rounds"
    cands = sorted(rounds_dir.glob("*/proposals.md"), key=lambda p: p.stat().st_mtime)
    fresh = [p for p in cands if str(p) not in st["consumed"]]
    return fresh[-max_rounds:]


def distill(proposals: list[Path], endpoint: str, model: str, think: bool) -> str:
    from driver import Endpoint
    ep = Endpoint(endpoint, model, temperature=0.3, max_tokens=4000, think=think)
    body = "\n\n".join(f"### proposals from {p.parent.name}\n\n{p.read_text()}" for p in proposals)
    user = ("Current prompt (do not repeat any of it):\n\n" + PROMPT_PATH.read_text() +
            "\n\n---\nRaw proposals to distill:\n\n" + body)
    resp = ep.chat([{"role": "system", "content": DISTILL_SYSTEM},
                    {"role": "user", "content": user}], tools=[])
    msg = (resp.get("choices") or [{}])[0].get("message") or {}
    return (msg.get("content") or "").strip()


def score(run_dir: Path) -> tuple[int, int]:
    v = vector(run_dir)
    return sum(v.values()), len(v)


def vector(run_dir: Path) -> dict:
    """Per-function pass/fail for a bench run. Missing summary = fail (fail-safe)."""
    out = {}
    for r in load_set():
        sp = run_dir / r["addr"].replace("0x", "") / "summary.json"
        ok = False
        if sp.exists():
            d = json.loads(sp.read_text())
            ok = bool(d.get("exact") or d.get("result") == "matched"
                      or float(d.get("best_fuzzy") or 0) >= 100.0)
        out[r["addr"]] = ok
    return out


def degenerate(run_dir: Path) -> int:
    """Workers that produced no attempt at all because the model stopped emitting
    tool calls — a prompt-health signal distinct from 'tried and missed'."""
    n = 0
    for sp in run_dir.glob("*/summary.json"):
        d = json.loads(sp.read_text())
        if not d.get("attempts") and "stopped calling tools" in (d.get("park_reason") or ""):
            n += 1
    return n


VECTOR_PATH = rc.ROOT / "docs" / "rig" / "bench_vector.json"
BOOTSTRAP_RUN = rc.RIG_OUT / "runs" / "bench-20260819-113128"  # the 8/28 baseline


def baseline_vector() -> dict:
    if VECTOR_PATH.exists():
        return json.loads(VECTOR_PATH.read_text())
    if BOOTSTRAP_RUN.exists():
        v = vector(BOOTSTRAP_RUN)
        VECTOR_PATH.write_text(json.dumps(v, indent=1))
        return v
    return {}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--endpoint", default="http://spark-e3f4.local:8000/v1")
    ap.add_argument("--model", default="qwen3.8-27b")
    ap.add_argument("--no-think", action="store_true")
    ap.add_argument("--parallel", type=int, default=8)
    ap.add_argument("--max-attempts", type=int, default=12)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    st = state()
    proposals = gather_proposals(st)
    if not proposals:
        print("evolve: no fresh proposals; nothing to do")
        return 0
    print(f"evolve: distilling {len(proposals)} proposal files:",
          ", ".join(p.parent.name for p in proposals))

    appendix = distill(proposals, args.endpoint, args.model, think=not args.no_think)
    if not appendix or appendix.strip() == "NOTHING-NEW":
        print("evolve: reflector found nothing new worth adding; marking proposals consumed")
        st["consumed"] += [str(p) for p in proposals]
        save_state(st)
        return 0

    appendix, dropped = dedup_appendix(appendix, PROMPT_PATH.read_text())
    if dropped:
        print(f"evolve: dropped {dropped} appendix lines already present in the prompt")
    if not appendix:
        print("evolve: appendix was entirely restatement; marking proposals consumed")
        st["consumed"] += [str(p) for p in proposals]
        save_state(st)
        return 0

    ts = time.strftime("%Y%m%d-%H%M%S")
    EVOLVE_DIR.mkdir(parents=True, exist_ok=True)
    candidate = EVOLVE_DIR / f"candidate-{ts}.md"
    candidate.write_text(PROMPT_PATH.read_text().rstrip() +
                         f"\n\n---\n# Evolved adjustments ({time.strftime('%Y-%m-%d')}, bench-gated)\n\n" +
                         appendix + "\n")
    print(f"evolve: candidate written to {candidate} ({len(appendix.splitlines())} appendix lines)")
    if args.dry_run:
        return 0

    if not SET_PATH.exists():
        make_set()
    base = baseline_rate()
    run_dir = rc.RIG_OUT / "runs" / f"bench-evolve-{ts}"
    cmd = [sys.executable, str(Path(__file__).parent / "driver.py"), "--bench",
           "--endpoint", args.endpoint, "--model", args.model,
           "--parallel", str(args.parallel), "--max-attempts", str(args.max_attempts),
           "--log-dir", str(run_dir), "--prompt", str(candidate)]
    if args.no_think:
        cmd.append("--no-think")
    for r in load_set():
        cmd += ["--addr", r["addr"]]
    t0 = time.time()
    subprocess.run(cmd, cwd=rc.ROOT)
    cand = vector(run_dir)
    basev = baseline_vector()
    regressed = [a for a, p in basev.items() if p and not cand.get(a)]
    if regressed:
        # one retry absorbs sampling variance before we call it a regression
        # (GEPA-style per-example gating; 28 examples is small, flakes are real)
        retry_dir = Path(str(run_dir) + "-retry")
        rcmd = [sys.executable, str(Path(__file__).parent / "driver.py"), "--bench",
                "--endpoint", args.endpoint, "--model", args.model,
                "--parallel", str(min(args.parallel, len(regressed))),
                "--max-attempts", str(args.max_attempts),
                "--log-dir", str(retry_dir), "--prompt", str(candidate)]
        if args.no_think:
            rcmd.append("--no-think")
        for a in regressed:
            rcmd += ["--addr", a]
        print(f"evolve: retrying {len(regressed)} regressed fns once: {' '.join(regressed)}")
        subprocess.run(rcmd, cwd=rc.ROOT)
        rv = vector(retry_dir)
        for a in regressed:
            if rv.get(a):
                cand[a] = True
        regressed = [a for a in regressed if not cand.get(a)]
    ok, total = sum(cand.values()), len(cand)
    rate = 100.0 * ok / total if total else 0.0
    new_passes = [a for a, p in cand.items() if p and not basev.get(a)]
    # accept iff nothing that passed before now fails, and the candidate is not
    # strictly useless; the aggregate floor still guards a first run w/o a vector
    if basev:
        accepted = total > 0 and not regressed and (new_passes or rate >= base)
    else:
        accepted = total > 0 and rate >= base
    degen = degenerate(run_dir)
    label = (f"evolve candidate {ts} pareto +{len(new_passes)}/-{len(regressed)}"
             + (f" ({degen} degenerate: model stopped calling tools)" if degen else "")
             + (" ACCEPTED" if accepted else " rejected"))
    bench_report(run_dir, label=label, wall=time.time() - t0)

    st["consumed"] += [str(p) for p in proposals]
    save_state(st)
    if accepted:
        shutil.copy(candidate, PROMPT_PATH)
        VECTOR_PATH.write_text(json.dumps(cand, indent=1))
        print(f"evolve: ACCEPTED {rate:.0f} % (+{len(new_passes)}/-0 vs vector, "
              f"baseline {base:.0f} %) — AGENT_PROMPT.md and bench_vector.json updated")
    else:
        print(f"evolve: rejected ({len(regressed)} regressed: {' '.join(regressed[:6])}; "
              f"rate {rate:.0f} % vs baseline {base:.0f} %) — prompt unchanged")
    return 0


if __name__ == "__main__":
    sys.exit(main())
