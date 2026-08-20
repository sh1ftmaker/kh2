#!/usr/bin/env python3
"""reflect.py — turn a finished run into a reflector worklist and (optionally)
LLM-drafted proposals.

    python3 tools/rig/reflect.py out/rig/runs/round2                 # worklist only
    python3 tools/rig/reflect.py out/rig/runs/round2 --llm            # + Qwen proposals
    python3 tools/rig/reflect.py out/rig/runs/round2 --llm --no-think --endpoint ... --model ...

Writes out/rig/rounds/<run>/worklist.md  — every parked function with its best
attempt, the last instruction diff (only the `!` rows), the model's hypotheses,
and any compile/link errors; near-misses (>= 90 %) first.  With --llm, sends the
worklist plus the current idiom catalogue and diff-reading table to the model
with REFLECTOR_PROMPT.md and writes proposals.md next to it.  Nothing is applied:
a person (or a bench-gated step) decides what goes into docs/codegen-3.2.md,
AGENT_PROMPT.md or the tools.
"""
from __future__ import annotations

import argparse
import json
import sys
import time
import urllib.error
from pathlib import Path
from typing import Optional

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402
from compile_diff import compile_diff  # noqa: E402

REFLECTOR_PROMPT = rc.ROOT / "docs" / "rig" / "REFLECTOR_PROMPT.md"


def worklist(run_dir: Path, max_diff_rows: int = 40) -> str:
    rows = []
    for sp in sorted(run_dir.glob("*/summary.json")):
        d = json.loads(sp.read_text())
        d["_dir"] = sp.parent
        rows.append(d)
    parked = [r for r in rows if r.get("result") != "matched"]
    parked.sort(key=lambda r: -(r.get("best_fuzzy") or 0))
    out = [f"# Reflector worklist — {run_dir.name}", "",
           f"{len(rows)} functions, {sum(1 for r in rows if r.get('result') == 'matched')} matched, "
           f"{len(parked)} not matched. Near-misses first.", ""]
    for r in parked:
        out.append(f"## {r['addr']} {r.get('symbol')} — best {r.get('best_fuzzy')} % in {r.get('attempts')} attempts")
        out.append(f"park reason: {r.get('park_reason')}")
        ev = [json.loads(l) for l in (r["_dir"] / "transcript.jsonl").open()]
        atts = [e["data"] for e in ev if e.get("kind") == "attempt"]
        best = None
        for a in atts:
            if best is None or (a.get("fuzzy") or 0) >= (best.get("fuzzy") or 0):
                best = a
        out.append("hypotheses tried:")
        for a in atts:
            out.append(f"  - #{a['n']} ({a.get('fuzzy')} %): {a.get('hypothesis', '')[:200]}")
            errs = (a.get("compile_errors") or []) + (a.get("link_errors") or [])
            if errs:
                out.append(f"      errors: {' | '.join(e[:160] for e in errs[:3])}")
        if best and (best.get("fuzzy") or 0) > 0:
            src = r["_dir"] / best["file"]
            res = compile_diff(r["addr"], src)
            bad = [row for row in res.get("diff", []) if row.startswith("!")]
            out.append(f"best attempt {best['file']} diff ({len(bad)} differing rows; yours | orig):")
            out.append("```")
            out.extend(bad[:max_diff_rows])
            if len(bad) > max_diff_rows:
                out.append(f"... {len(bad) - max_diff_rows} more")
            out.append("```")
            out.append(f"diff_classes: {json.dumps((res.get('diff_classes') or {}).get('counts'))}")
            out.append("best attempt source:")
            out.append("```cpp")
            out.extend(src.read_text().splitlines()[-40:])
            out.append("```")
        out.append("")
    return "\n".join(out) + "\n"


# The 130_000-char figure this replaced only bounded the worklist -- it ignored
# AGENT_PROMPT.md and codegen-3.2.md, which are resent on every call and have
# both grown substantially as the catalogue absorbed today's promotions
# (28,124 chars combined as of 2026-08-20, versus ~15,000 when 130k was chosen).
# That silently ate the safety margin and round 2 of c0820b lost its reflection
# entirely to an HTTP 400. CHARS_PER_TOKEN is deliberately pessimistic: MIPS
# disassembly and hex offsets tokenize far denser than English prose.
CONTEXT_TOKENS = 65536
REPLY_TOKENS = 6000
CHARS_PER_TOKEN = 2.5


def llm_proposals(text: str, endpoint: str, model: str, think: bool,
                  char_budget: Optional[int] = None) -> str:
    from driver import Endpoint
    ep = Endpoint(endpoint, model, temperature=0.3, max_tokens=REPLY_TOKENS, think=think)
    system = REFLECTOR_PROMPT.read_text()
    cat = (rc.ROOT / "docs" / "codegen-3.2.md").read_text()
    prompt_doc = (rc.ROOT / "docs" / "rig" / "AGENT_PROMPT.md").read_text()
    overhead = len(system) + len(prompt_doc) + len(cat) + 600  # +separators/labels

    def budget() -> int:
        if char_budget is not None:
            return char_budget
        avail_tokens = CONTEXT_TOKENS - REPLY_TOKENS - int(overhead / CHARS_PER_TOKEN)
        return max(4000, int(avail_tokens * CHARS_PER_TOKEN))

    def build(cb: int) -> str:
        body = text
        if len(body) > cb:
            # worklist is near-misses-first, so the tail is the least valuable part
            body = body[:cb] + "\n\n[worklist truncated to fit the model context]\n"
        return ("Current agent prompt (do not repeat it back; propose diffs against it):\n\n" +
                prompt_doc + "\n\n---\nCurrent idiom catalogue:\n\n" + cat +
                "\n\n---\nWorklist from the last round:\n\n" + body)

    cb = budget()
    for attempt in range(3):
        user = build(cb)
        try:
            resp = ep.chat([{"role": "system", "content": system}, {"role": "user", "content": user}], tools=[])
        except urllib.error.HTTPError as e:
            if e.code == 400 and attempt < 2:
                # the estimate was still too generous for this text -- halve and retry
                # rather than losing the round's reflection outright
                cb = cb // 2
                continue
            raise
        msg = (resp.get("choices") or [{}])[0].get("message") or {}
        return msg.get("content") or ""
    return ""


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("run_dir")
    ap.add_argument("--llm", action="store_true")
    ap.add_argument("--endpoint", default="http://spark-e3f4.local:8000/v1")
    ap.add_argument("--model", default="qwen3.8-27b")
    ap.add_argument("--no-think", action="store_true")
    args = ap.parse_args()
    run_dir = Path(args.run_dir)
    out_dir = rc.RIG_OUT / "rounds" / run_dir.name
    out_dir.mkdir(parents=True, exist_ok=True)
    wl = worklist(run_dir)
    (out_dir / "worklist.md").write_text(wl)
    print(f"worklist: {out_dir / 'worklist.md'} ({len(wl.splitlines())} lines)")
    if args.llm:
        t0 = time.time()
        prop = llm_proposals(wl, args.endpoint, args.model, not args.no_think)
        (out_dir / "proposals.md").write_text(prop)
        print(f"proposals: {out_dir / 'proposals.md'} ({len(prop.splitlines())} lines, {int(time.time()-t0)} s)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
