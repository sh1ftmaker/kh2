# tools/rig handoff — state as of 2026-08-19 (fleet rounds 0–3)

Entry point for the next session. Read `README.md` for the tools, `AGENT_PROMPT.md`
(+ `codegen-3.2.md`, appended to the system prompt) for the worker, `REFLECTOR_PROMPT.md`
for the reflector, `CAMPAIGN.md` for per-round numbers, `BENCH.md` for the held-out gate.

## Setup
```sh
cd /data/agent-tom/kh2/rig-wt && source /data/agent-tom/kh2/env.sh   # branch rig
curl -s http://spark-e3f4.local:8000/v1/models                        # vLLM qwen3.8-27b
```
Always `/usr/bin/make`. Never put the PS2 `bin/` on PATH.

## One round (what we ran today)
```sh
python3 tools/rig/scheduler.py --tier 1 --limit 60                    # queue.tsv, twin-led
python3 tools/rig/driver.py --no-think --queue out/rig/queue.tsv \
        --count 20 --parallel 5 --max-attempts 20 --log-dir out/rig/runs/roundN
python3 tools/rig/round_report.py out/rig/runs/roundN --label "round N ..."   # -> CAMPAIGN.md
python3 tools/rig/reflect.py out/rig/runs/roundN --llm --no-think     # worklist + proposals
```
Then: close ≥ 90 % near-misses by hand or accept reflector proposals → new entries in
`codegen-3.2.md` (confirmed only when a byte-exact pair shows it) → rerun. Before any
`AGENT_PROMPT.md` change: `python3 tools/rig/bench.py run --no-think [--prompt new.md]`
and compare `BENCH.md`. **The bench baseline has not been run yet** — run it first.

## Model facts (qwen3.8-27b on the DGX Spark)
- `--no-think` is the right mode: ~30 s/turn, ~20 tok/s per stream, 5–6 streams fine.
  Thinking mode spent 10–12 k tokens per turn on a 40 KB context and produced nothing
  better (one turn hit the 12,288 cap without a tool call).
- Per function: ~50 k prompt tokens over ~8 turns; 15 functions on 5 workers ≈ 8 min.
- It gets to 97–99.75 % often and then parks after 4 flat attempts; the residue is
  almost always one idiom (see `codegen-3.2.md` entries dated today). The reflector
  (Qwen, no-think, 315 s per round) diagnoses those residues correctly.

## Failure modes seen and the fix that closed each
| symptom | cause | fix (landed) |
|---|---|---|
| empty turns, `finished_reason=length` | Qwen thinking ate `max_tokens` 4096 | max_tokens 12288, re-ask on cut-off, `--no-think` |
| link errors on callees | model retyped mangled names / used unregistered E3 names | rig-generated `extern "C" … asm("<link symbol>")` callee lines in the skeleton |
| `already been declared` / header redefinition | two same-stem headers; upstream headers with duplicate decls | includes verified by compiling the skeleton; self-contained fallback; header hygiene (23 fixed, 14 structurally garbled `OBJ::VTABLE<T>` remain) |
| parse error before `{` ×3 → park | asm label on the *definition* line | compile hint + skeleton comment; 0 such parks in round 2+ |
| promote MATCHED! but row still `asm` | build regex rejected `extern "C"` stub definitions | `tools/common.py` def_re accepts it; promote asserts `cxx` |
| promote redefinition of class | candidate include spelled differently from the TU (`#pragma once` by spelling) | promote respells/drops candidate includes |
| `linker did not place func_…` | model defined the E3 mangled name when the registry symbol is a stub | prompt rule: `symbol_to_define` wins; asm-label stub form |
| twins not helping (1.00 twin parked at 68 %) | `similar_matched.snippet` was null for asm-label definitions | extract_definition finds `_impl`/asm("name") forms; full text + hint for ≥ 0.85 |
| 4 wasted attempts on callee arity | `_Z16u_call4_…jjjj` reported arity VERIFIED | placeholder names report arity as a guess |
| off-by-one parameter list at 99.75 % | `void* self` added to a *static* method | idiom "a0 used as data ⇒ no this" + diff-table row |

## Open items (in priority order)
1. Run the bench baseline; then accept/reject the round-1 reflector proposals
   (`out/rig/rounds/round1/proposals.md`) through it.
2. `reflect.py`: auto-append accepted idioms as *unconfirmed* entries; example store
   (`out/rig/examples/`) + retrieval by diff signature in `get_context`.
3. `campaign.py`: schedule → drive → report → reflect as one resumable command; nightly
   header audit of members `promote` added vs DWARF offsets.
4. Registry renames: many matched rows are still `func_XXXXXXXX` with a low-confidence E3
   name (e.g. `func_002aa048` = `Tz::JmNewInfo::SetCharaFlg`, now confirmed static by the
   match). Decide the rename policy (byte-exact match under the E3 prototype as evidence?).
5. Merge `rig` (+ `header-hygiene`, already merged here) with `layout-regen` into one main
   line; re-run the E3 mapper on the regenerated layout; fix the 2-function regression
   from a09f680 and update `docs/BASELINE.md`.
6. Tier 2 (200–500 B): `scheduler.py --tier 2` skeletons all compile; not yet attempted.
