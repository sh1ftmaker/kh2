# Model arena — shared brief (read this first)

Goal: a fair, byte-exact benchmark of decompilation ability across providers on
the SAME functions, SAME playbook, SAME attempt budget, SAME scorer.

Repo: `/data/agent-tom/kh2/rig-wt` (fork sh1ftmaker/kh2). Target: SLPM_666.75
(KH2FM PS2 ELF), ee-gcc 3.2-040921, MIPS R5900. A function "counts" only when
its compiled bytes equal the original — fuzzy % is a progress signal, never a win.

## Rules (identical for every contender)

1. Targets: `out/rig/arena/targets.tsv` — 12 functions, 84–364 B. 4 of them are
   Qwen anchors (its best fuzzy is in the last column) + 8 fresh.
2. Playbook: `docs/rig/AGENT_PROMPT.md` verbatim as the system prompt, plus the
   per-target context the rig produces (`tools/rig/get_context.py`).
3. Budget: max 8 attempts per target. Each attempt gets the compiler-diff
   feedback from the previous one (`tools/rig/compile_diff.py`).
4. Scoring: `compile_diff(addr, cpp_file)` only. Never hand-edit a contender's
   C++, never feed it another model's attempt, never score by eye.
5. Every contender writes `out/rig/arena/<provider>-<model-or-tier>/results.tsv`:
   `addr  size  symbol  exact  best_fuzzy  attempts  wall_s  notes`
   (header row included; `exact` is 0/1; `notes` is `model;flags`).
   Per-attempt artifacts live in `<dir>/<addr-no-0x>/attempt_NNN.cpp`,
   `reply_NNN.txt`, `score_NNN.json`.
6. Evaluate EVERY model/tier your provider serves — one results dir each.
   If a model is quota-blocked or unserved, still emit a results.tsv with the
   reason in `notes` so the leaderboard shows why it is empty.
7. Cost discipline: stop a target as soon as it is exact. Don't retry a tier
   that is hard-quota'd; record and move on.

## Environment

- Toolchain bootstraps itself via `tools/rig/rigcommon.py` (no `env.sh` needed).
- Existing harnesses to reuse rather than rewrite:
  - Codex: `<scratchpad>/arena-codex/batch.py` (CLI `codex exec`, reasoning-effort tiers)
  - Gemini: `<scratchpad>/arena-gemini/arena_gemini.py` (CLI `gemini -m <model>`)
  Both already implement the attempt loop, caching, and results.tsv finalize.
- Prior results are already on disk — RESUME, do not restart from zero.
- Do NOT touch the running Qwen campaign, `docs/rig/parked.tsv`, promotions, or
  any file outside `out/rig/arena/` and your own scratchpad. `git status` in the
  repo must stay clean of arena side effects.
- Run everything in the FOREGROUND (synchronously). If a CLI call needs minutes,
  wait for it. Never end your turn with work backgrounded.

## Reporting back

Final message to the orchestrator (main session) must contain, per model/tier:
exact count / 12, median best-fuzzy, total attempts, wall seconds, and any
blocker. Plus one paragraph: where this model characteristically fails
(regalloc? delay slots? struct layout? hallucinated symbols?) — that qualitative
read is half the value of the arena.
