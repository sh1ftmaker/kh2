# Rig handoff (Phase 2: agent-safe matching rig) — 2026-08-19

Status: **built and working**. Tools, driver, prompt and docs are committed on branch `rig`
in this worktree (`/data/agent-tom/kh2/rig-wt`). Two functions were landed through the rig.
The one thing not yet done against the intended model is the Spark smoke test: the vLLM
server on `spark-e3f4.local:8000` went down mid-session (`connection refused`; port 8080 is
an unrelated static file server). The driver was instead validated end-to-end against a
scripted local endpoint and the prompt/tools were exercised by other LLM agents.

## Deliverable state
| Item | State |
|---|---|
| `tools/rig/rigcommon.py` | done — layout/registry/E3/DWARF/types loaders, `resolve()`, opcode scan, `find_class_header()` |
| `tools/rig/compile_diff.py` | done, ~80 ms/attempt, sanity-checked both ways |
| `tools/rig/list_candidates.py` | done, all filters, no subprocesses |
| `tools/rig/get_context.py` | done — disasm, Ghidra, m2c, callees+DWARF arity, strings, class layouts, nearest matched source, skeleton |
| `tools/rig/promote.py` | done — normalizes to house style, edits the class header, `make verify`, full byte-for-byte rollback |
| `tools/rig/park.py`, `lock.py` | done |
| `tools/rig/driver.py` | done — OpenAI tool-calling loop, `--parallel`, locks, JSONL transcripts, `summary.json` |
| `tools/rig/mock_endpoint.py` | done — scripted endpoint used to test the driver without a model |
| `docs/rig/AGENT_PROMPT.md` | done |
| `docs/rig/README.md`, `docs/codegen-3.2.md` | done |
| Smoke test on the Spark | **blocked**: endpoint down all session |

## Confirmed facts (in addition to the 2026-08-18 recon notes, which all still hold)
- Full `make verify` from cold: **9.7 s**; incremental after one TU: ~2 s. Always call
  `/usr/bin/make` — `tools/env.sh` puts the PS2 `bin/` on PATH, whose ancient `make`
  mis-expands `$(abspath ...)` and fails with `missing /layout.tsv`.
- The Makefile now carries `-I $(ROOT)/src` (added this session) so candidate files living
  outside `src/` compile with exactly the flags the real build uses. Full build still MATCHED!.
- `objdiff-cli` 3.8 one-shot JSON shape: `{left,right}.symbols[] -> {name, match_percent,
  instructions[]}`, each instruction `{diff_kind?, instruction:{formatted, parts}}`.
  `diff_kind` absent means that row agrees. `left` is the first `-1` object.
- `ghidra-cli decompile --project kh2 --program SLPM_666.75 FUN_xxxxxxxx` answers in
  **0.2 s** (it is a client to a running service, not a headless launch). Cached anyway.
- ee-gcc 3.2 keys `#pragma once` on the *spelled* include path: including the same header
  as `"select.hpp"` and `"tozawa/select.hpp"` in one TU is a redefinition error. `promote.py`
  reuses whatever spelling the destination TU already uses.
- Registry symbol policy implemented in `rigcommon.symbol_for()`: functions.tsv wins; then
  the E3 mangled name but only at confidence `seed`/`high`; otherwise `func_XXXXXXXX`.

## Landed this session
- `match: Tz::Select::SetSelectMax` (0x0028af90, 20 B) — by hand through the rig, 4 attempts.
- `dk::Area::init` (0x00149ca0, 20 B) — promoted by `driver.py` driving the mock endpoint.
- parked `func_002421e8` / `Tz::McSys::isGameClearKH2` (0x002421e8) after 9 attempts, best 23%.

## Two findings worth acting on
- **`promote.py` could report a vacuous MATCHED!** `out/generated/{objects.mk,
  layout_status.tsv,symbols.ld}` are regenerated only when `layout.tsv`/`functions.tsv`
  change, so adding a definition to an *existing* TU left the row marked `asm`; the build
  then `.incbin`s the original bytes and prints MATCHED! without ever compiling the new
  code. `promote.py` now forces `python3 tools/build_elf.py objects` before `make verify`
  **and** asserts the row is `cxx` with the expected source afterwards. The Makefile's
  dependency list for those generated files should probably grow a `src/` stamp too.
- **Commit a09f680 (the 725 E3 symbol names) silently cost 2 matched functions.**
  Regenerating `layout_status.tsv` from a clean checkout gives 4,680 cxx rows at upstream
  `8b5bc47` and **4,678** at `a09f680`: two symbols stopped resolving to a source file once
  they were renamed. `docs/BASELINE.md` still quotes the 4,680 figure. Worth finding which
  two and fixing the names. (Current tree: 4,680 = 4,678 + the two matched this session.)

## Next steps (priority)
1. **Rerun the smoke test on the Spark once it is back**:
   `python3 tools/rig/driver.py --endpoint http://spark-e3f4.local:8000/v1 --model qwen3.8-27b
    --pick --min-size 80 --max-size 200 --count 3 --parallel 3 --max-attempts 20`
   then the same with `--min-size 200 --max-size 500`. Compare against the by-hand results
   in `out/rig/smoke/` (attempt files kept).
2. Feed whatever the run teaches into `docs/codegen-3.2.md` and the diff-reading table in
   `AGENT_PROMPT.md` — that table is the highest-leverage part of the prompt.
3. `get_context` currently returns a lot of JSON. If the model's context is tight, add
   `--brief` (drop `ghidra`/`m2c` bodies, keep the file paths).
4. `compile_diff` already returns `diff_classes` (mechanical classification + hints).
   Next step there: use the classification to *suggest a concrete edit* (e.g. "change
   member at 0x04 from s16 to u16") rather than naming the class.
