# The E3 context

"E3" is the PS3 HD 2.5 ReMIX build of KH2FM shown at E3 2014: a debug EBOOT
that (unlike the PS2 retail SLPM_666.75 this repo targets) ships with DWARF
debug info -- real function/parameter/local names, real class layouts, real
control flow before optimization. `/data/agent-tom/kh2/autodecomp` extracted
that DWARF and, since it's a different CPU (PPC vs the PS2's EE/MIPS) and a
different (debug) build, ran a machine-code similarity matcher to line its
functions up with the ones in this repo's PS2 layout. The result is a
same-game, (mostly) same-source second copy of the answer key: not exact --
PS2 retail dropped asserts, reordered some fields, and the compilers differ --
but close enough that `tools/rig/get_context.py`'s `e3_context()` uses it as
the primary structural reference when writing a candidate.

## What each file is

Small, versioned in this repo under `data/e3/` (~9 MB total):

| file | what it is |
|---|---|
| `simmatch/predictions.tsv` | the E3(PPC)<->EE(PS2) function map, one row per matched pair, with a confidence tier |
| `simmatch/funcs_dwarf.json` | E3 DWARF function records (signature, params, locals) keyed by PPC address |
| `names/map_functions.tsv` | the map joined with mangled/demangled names -- what `get_context.py` looks a `ee_addr` up in first |
| `names/map_globals.tsv` | the same, for globals |
| `e3pilot/pilot.tsv`, `pilot_big.tsv` | curated candidate lists for seeding a campaign: every mapped, still-undecompiled function with its E3 name and a confidence tier; `pilot_big.tsv` is the >=300 B subset |
| `e3pilot/results_round5.tsv` | per-function status/fuzzy-match % for the round-5 converted candidates in the large tarball's `e3pilot/cand/` |
| `coverage/index.tsv` | per-function status/fuzzy/source for the deterministic (non-E3) lifter's best candidate, in `names/src/` |

Large, fetched on demand into `$KH2_E3_DATA` (~280 MB uncompressed, one
tarball):

| path (under `$KH2_E3_DATA/`) | what it is |
|---|---|
| `e3pilot/raw/<ppc_addr>.json` | Ghidra pseudo-C decompilation of the E3 (PPC) function, DWARF-typed -- the structural reference (`ps3_pseudo_c` in `get_context.py`'s output) |
| `e3pilot/cand/<ee_addr>.cpp` | the E3 pseudo-C mechanically converted to compiling ee-gcc source (round 5) -- often has the right control flow/calls/field names already (`e3_candidate`) |
| `names/src/<ee_addr>.cpp` | the deterministic lifter's best candidate for the row, annotated with E3-derived names (`best_candidate_named`) |
| `e3pilot/hdr_ps2/<Class>.hpp` | PS2-corrected class layout headers for classes that appear as `this` or an argument type (`ps2_class_header`) |

`get_context.py` resolves every one of these paths itself (`_e3_path()`),
checking `data/e3/` first, then `$KH2_E3_DATA`, then (this machine only) the
original `/data/agent-tom/kh2/autodecomp/out` workspace as a last-resort
fallback. `RIG_NO_E3=1` disables the whole block, same as before this file
existed.

## Install

```
tools/rig/fetch_e3.sh <url-or-local-path-to-tarball>   # verifies SHA256SUMS, extracts to ~/.cache/kh2-e3
```

Pass a second argument, or set `$KH2_E3_DATA` beforehand, to extract
somewhere else. The current tarball:

```
/data/agent-tom/kh2/e3-dist/e3-context-2026-08-22.tar.zst   (14 MB, sha256 in SHA256SUMS alongside it)
```

`data/e3/` needs no install step -- it's committed.

## Refreshing the map

The map, names and pilot lists are produced in `/data/agent-tom/kh2/autodecomp`
(read-only from this worktree; the pipeline lives there, not here). To refresh
after the registry gains matched functions or the DWARF/simfeat pipeline
changes:

```
cd /data/agent-tom/kh2/autodecomp
../tools/venv/bin/python -m ad.simmatch run --merge      # re-predict the E3<->EE map -> out/simmatch/predictions.tsv
../tools/venv/bin/python -m ad.names run                 # apply names -> out/names/{map_functions,map_globals}.tsv, out/names/src/
../tools/venv/bin/python -m ad.promote_names run --wt /data/agent-tom/kh2/promote-wt [--min-tier med]
```

`promote_names` is the one step that touches this repo: it renames
placeholder (`func_XXXXXXXX`) registry symbols to the mapped E3 name, gated
on `make verify` not regressing. After a refresh, re-copy the small files into
`data/e3/` and re-tar the large ones (same layout: `e3pilot/raw`,
`e3pilot/cand`, `names/src`, `e3pilot/hdr_ps2`, tarred from inside
`autodecomp/out/`) into a new dated tarball + `SHA256SUMS` under
`/data/agent-tom/kh2/e3-dist/`.

## Calibration

The deterministic (non-LLM) lifter pipeline alone reaches **6,238 functions /
400,488 B = 20.17 %** of the binary (promote-wt HEAD 04cf846,
`autodecomp/HANDOFF-2026-08-22.md`). On top of that, a held-out set of 20
functions in the 200-500 B range that the Spark-hosted model (ornith-1.5-35b-a3b,
no-think) matched **0/20** was retried with one Sonnet agent per function (12
attempts, no promote): **6/20 exact, 20/20 compiled, median best fuzzy
94.2 %** (`out/rig/runs/sonnet20/summary.tsv`). That gap -- not model size
alone, since ornith got 8/20 to compile but 0 exact -- is the reason to lean
on the E3 context (`ps3_pseudo_c` / `e3_candidate` as the structural
reference) rather than asking a model to reconstruct control flow from
disassembly alone.

## Seeding a campaign from pilot_big.tsv

`tools/rig/campaign.py` normally rebuilds `out/rig/queue.tsv` every round by
running `scheduler.py`, which scores *all* undecompiled rows on
E3-agnostic signals (twin similarity, callee arity, leaf-ness, ...). To
instead drive rounds toward the E3-mapped, high-confidence functions in
`pilot_big.tsv` (>=300 B, name + PS3 structural reference available), pass
`--seed-file`:

```
python3 tools/rig/campaign.py --seed-file data/e3/e3pilot/pilot_big.tsv \
    --rounds 6 --workers 16 --no-think --push
```

This was a small addition to `campaign.py`: `--seed-file` makes each round
call `write_seed_queue()` instead of `scheduler.py` -- it reads the TSV's
`ee_addr`/`size`/`conf` columns, drops rows already matched or parked (same
rule scheduler.py applies), and ranks by confidence tier then size
descending, so the highest-confidence, biggest-byte-count rows are attempted
first. `--tier`/`--min-size`/`--max-size` still filter the seed rows the same
way they filter `scheduler.py`'s own output.
