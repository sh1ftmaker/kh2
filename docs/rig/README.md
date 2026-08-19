# tools/rig — the agent-safe matching rig

A set of plain-python CLIs that let an LLM agent (or a person) pick an
undecompiled function, get everything known about it, iterate on a candidate
`.cpp`, and land it only when the compiled bytes are identical to the shipped
binary. Every tool prints JSON on stdout and is also importable.

Nothing here is model-specific. `driver.py` speaks the OpenAI chat-completions
tool-calling protocol, so any endpoint that implements it will do; the agent's
whole personality lives in `docs/rig/AGENT_PROMPT.md`.

## Setup

```sh
cd /data/agent-tom/kh2/rig-wt
source /data/agent-tom/kh2/env.sh        # KH2_NATIVE=1, PS2_TOOLCHAIN, shim on PATH
. /data/agent-tom/kh2/tools/env.sh       # objdiff-cli, m2c, ghidra-cli, spimdisasm
```

Order matters only in that `tools/env.sh` puts the PS2 `bin/` on PATH, which
shadows the system `make` with an ancient one. The rig always calls
`/usr/bin/make` and the compiler by absolute path, so it does not care — but you
should, if you run `make` by hand.

## The tools

| Tool | What it does |
|---|---|
| `list_candidates.py` | Undecompiled layout rows, filtered by size / namespace / decl_file / named-only / VU0, with `n_calls` and `uses_vu0` from a direct opcode scan of SLPM. Fast (no subprocesses). |
| `get_context.py <addr>` | Disassembly, Ghidra decompilation (cached), m2c draft, callee prototypes with `arity_status`, string refs, E3 DWARF class layouts, the nearest already-matched source, and a compilable candidate skeleton. Big blobs go to `out/rig/context/<addr>/`. |
| `compile_diff.py <addr> --src f.cpp` | The scorer. Compile → mini-link at the real address → normalize → byte compare → instruction diff. ~80 ms. |
| `promote.py <addr> --src f.cpp --dest src/…/tu.cpp` | Lands a byte-exact candidate: normalizes it to repo house style, updates `functions.tsv`, adds the missing member declaration to the class header, runs `make verify`, and rolls **everything** back byte-for-byte if the build does not print `MATCHED!`. |
| `park.py` / `lock.py` | Honest give-up record (`docs/rig/parked.tsv`) and per-address advisory locks so several agents can share one worktree. A lock records the owning pid and is taken over once that pid is gone, so it protects concurrent long-lived drivers, not successive one-shot CLI calls. |
| `driver.py` | The loop: one independent conversation per function, numbered immutable candidate files, JSONL transcript, `summary.json`. |
| `mock_endpoint.py` | A scripted OpenAI-compatible server for testing `driver.py` without a model. |

## How the scorer works

The build proper links every matched function at its layout address and compares
the whole ELF. That is too slow to sit in an agent loop, so `compile_diff` does
the same thing for one function:

1. compile the candidate with the Makefile's exact `CXXFLAGS`;
2. mini-link with a generated script that pins `.text.<mangled>` at the layout
   address, `INCLUDE`s `out/generated/symbols.ld`, adds `PROVIDE`s for any
   `func_XXXXXXXX` / `D_XXXXXXXX` token in the candidate, and dumps everything
   else at dummy high addresses;
3. read the symbol's bytes out of the mini ELF and zero-pad to the layout row
   size — exactly what `build_elf.normalize_final_elf` does. Bigger than the row
   is `size_ok: false` and can never match;
4. compare against `SLPM_666.75` over the full row: that comparison, and only
   that comparison, defines `exact`;
5. render the instruction diff by wrapping both byte blobs in `.incbin` objects
   and running `objdiff-cli diff --format json` — the same trick `tools/objdiff.py`
   uses for the project's scratch units.

Two sanity checks that must always hold: an already-matched source scores
`exact: true`, and a one-token perturbation of it does not.

## Callee declarations and the banned-move lint

The skeleton from `get_context` carries one line per callee,
`extern "C" u32 name_XXXXXX(args) asm("<link symbol>");`, where the asm label is
the registry symbol when the address is registered and the neutral
`func_XXXXXXXX` stub otherwise (E3 names that are not in the registry do not
link; `compile_diff` PROVIDEs the stubs). Unknown class pointers are rewritten
to `void*`. The model copies these lines instead of retyping mangled names — a
one-character typo there was the most common failure in the first Qwen runs.
Suggested includes are verified by compiling the skeleton (`-fsyntax-only`) so
two same-stem headers never end up in one candidate.

`compile_diff` rejects, unscored, any candidate containing an inline `asm`
*statement*, `__attribute__((naked))`, a `register ... asm("$sN")` pin or
`.incbin`. `asm("symbol")` labels on declarations are allowed — they are the
binding mechanism above.

## Model endpoints: Qwen3 and reasoning

`driver.py` sends `max_tokens` 12288 by default (Qwen3 thinking can spend 4k+
tokens per turn on a large context), logs `finish_reason` and the reasoning
length per turn, re-asks once when a reply is cut off before a tool call, and
offers `--no-think` (vLLM `chat_template_kwargs.enable_thinking=false`).
On the DGX Spark a single stream decodes at roughly 20 tok/s, so a thinking
turn can take minutes; `--no-think` turns take ~30 s.

## Candidate files

Candidates live outside `src/` and must compile standing alone, so they declare
their own methods-only class plus a local `*Layout` struct with explicit byte
offsets. `promote.py` converts that into repo style on the way in: it drops the
local class declaration when the repo already has a header for that class, adds
the header include using the spelling the destination TU already uses (ee-gcc 3.2
keys `#pragma once` on the spelled path, so mixing `"select.hpp"` and
`"tozawa/select.hpp"` in one TU is a redefinition error), and inserts the missing
member declaration into the class.

## Symbol policy

`functions.tsv` is authoritative for the symbol a definition must produce. When
an address is not registered yet, the rig falls back to the E3-2014 mangled name
only if the mapping confidence is `seed` or `high`; for weaker evidence it uses
the neutral `func_XXXXXXXX` stub rather than committing a possibly-wrong name.
`get_context` reports both (`symbol_to_define` and `e3_symbol`) plus
`symbol_origin`.

## Running the driver

```sh
python3 tools/rig/driver.py \
    --endpoint http://spark-e3f4.local:8000/v1 --model qwen3.8-27b \
    --pick --min-size 80 --max-size 200 --count 6 \
    --parallel 3 --max-attempts 20
```

Logs land in `out/rig/runs/<ts>/<addr>/`: `transcript.jsonl`, one
`attempt_NNN.cpp` per attempt, `summary.json`. Promotion is serialised across
threads because it touches shared repo files and runs a real build.
