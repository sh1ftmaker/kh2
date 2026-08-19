# Rig handoff (Phase 2: agent-safe matching rig) — 2026-08-18

Status: **reconnaissance only**. I was told to stop after ~15 minutes, before writing code.
Nothing under `tools/rig/` exists yet (empty dir). No driver, no prompt, no smoke test.
What follows is the verified design + every command I actually ran and confirmed working,
so the next agent can start writing code immediately.

## Deliverable state
| Item | State |
|---|---|
| A. tools/rig/{list_candidates,get_context,compile_diff,promote,park,lock}.py | NOT WRITTEN |
| B. tools/rig/driver.py | NOT WRITTEN |
| C. docs/rig/AGENT_PROMPT.md, README.md, docs/codegen-3.2.md | NOT WRITTEN |
| D. smoke test | NOT RUN (Spark endpoint verified reachable, see below) |

## Verified facts (all commands run from this worktree, `source /data/agent-tom/kh2/env.sh && . /data/agent-tom/kh2/tools/env.sh`)
- Spark: `curl -s http://spark-e3f4.local:8000/v1/models` -> model id `qwen3.8-27b`, max_model_len 262144. Reachable.
- **Always call the compiler by full path** `$PS2_TOOLCHAIN/bin/ee-g++` (= /data/agent-tom/kh2/toolchain/gcc/bin/ee-g++).
  A bare `ee-g++` from PATH failed with "cannot exec cc1plus". Compile of src/tz/ui_accessors.cpp with the repo flags
  `-O2 -g0 -x c++ -fno-exceptions -fno-rtti -fpermissive -ffunction-sections -I src` takes **13 ms**.
  Headers in src/ use `#pragma once` (warning only) and relative includes (`"../common/types.h"`) — candidate files
  living under out/rig/ should `#include "common/types.h"` with `-I src`.
- **Mini-link works and is fast (13 ms)**: `docs/rig/minilink.example.ld` — places `.text.<mangled>` at the layout
  address, INCLUDEs `out/generated/symbols.ld` (PROVIDE aliases from functions.tsv + src-derived func_/D_ aliases,
  regenerate via `python3 tools/build_elf.py objects` when functions.tsv changes), dumps other .text*/.rodata*/.data*
  at dummy high addresses. Command:
  `ee-ld --no-check-sections -T mini.ld -o mini.elf cand.o -L$PS2_TOOLCHAIN/lib/gcc-lib/ee/3.2-ee-040921 -lgcc`
  Then `_ZN2Tz9PartyInfo11GetPartyMaxEv` sits at 0x281100 size 8 with resolved bytes identical to SLPM (jr ra / lw v0,0(a0)).
  Also add PROVIDEs for any `func_XXXXXXXX`/`D_XXXXXXXX` tokens found in the candidate file itself
  (mirror `tools/build_elf.py::collect_source_addr_aliases`). Undefined symbols -> ee-ld error text
  "undefined reference to `X'" -> parse and report as compile_errors so the model uses registry names.
- Byte extraction: read symbol from mini.elf symtab (`tools/build_elf.py::load_text_symbols`), read bytes via
  `common.load_elf_image/read_elf_vaddr`, then **normalize exactly like `build_elf.normalize_final_elf`**: pad with
  zeros to the layout row size if smaller; if larger -> `size_ok=False`, never exact. `exact` = padded bytes ==
  SLPM bytes at `addr_to_file_offset(addr)` over the full row (`FuncRange.size`).
- objdiff units in this repo compare *incbin'd raw bytes* (base=SLPM bytes, target=linked-ELF bytes) — see
  `tools/objdiff.py::render_group_asm` + `build_units`. Do the same for compile_diff: write target.bin/base.bin,
  wrap with `.globl SYM / .type SYM,@function / .incbin`, `ee-as -G0`, `ee-objcopy -R .mdebug -R .pdr`, then
  `objdiff-cli diff -1 target.o -2 base.o SYM --format json -o -` (objdiff-cli 3.8.0 in tools/bin; JSON shape not yet
  inspected — check `match_percent` and per-row instruction text; fallback: ee-objdump -d both + difflib).
- ee-objdump on SLPM_666.75 works for reading (`-d --start-address=0x281100 --stop-address=...`), prints
  "no symbols" warning on stderr — harmless. Labels come from spimdisasm via `kh2-disasm-func <start> <end> <outdir>`
  (note its default ELF is /data/agent-tom/kh2/kh2/SLPM_666.75 — set `KH2_ELF=<this worktree>/SLPM_666.75`).
- E3 data: /data/agent-tom/kh2/e3/map/ee_symbols_mapped.tsv (7,356 rows; confidence: seed 1700, high 978, med 1563,
  low 3108, body-inlined 3) columns ee_addr ee_size mangled demangled ppc_addr decl_file confidence evidence.
  /data/agent-tom/kh2/e3/symbols/functions_dwarf.tsv (linkage_name, name, qualified, decl_file, decl_line) — DWARF
  qualified names give VERIFIED arity; types.txt has `class X size=N` blocks with `type name @0xOFF` members and
  `fn Name` lines (byte offsets are what the prompt must force the model to use). Namespace counts in
  e3/symbols/namespaces.tsv (dk 17002, kn 10960, YS 4777, gm 3158, YW 1486, Tz 1062 ...).
- Registry: functions.tsv `symbol<TAB>addr` (mangled or `NS::Class::Func(int)` form; `resolve_symbol_name` in
  tools/common.py mangles the latter). `common.load_registry()` scans src/ to find which TU defines each symbol
  (slow-ish; use out/generated/layout_status.tsv for asm-vs-cxx status in list_candidates).
- Baseline: 4,680/11,286 functions matched, 12.31% bytes (docs/BASELINE.md). Existing matched sources are ugly
  (hard-coded `*(u32*)(this+0x54)` style) — fine as examples for get_context but the prompt should push class layouts.
- Ghidra: `ghidra-cli decompile --project kh2 --program SLPM_666.75 FUN_XXXXXXXX` (~25 s cold) — cache under
  out/rig/ghidra_cache/<addr>.c. coddog needs a decomp.yaml + generated map (tools/coddog-smoke/, `coddog match FUN_x -t 0.9`).

## Suggested file plan (not started)
- tools/rig/rigcommon.py: paths (ROOT=worktree, RIG_OUT=out/rig, E3=/data/agent-tom/kh2/e3), loaders for layout/registry/
  E3 mapping/DWARF/types.txt, `resolve(addr|symbol)`, `disasm(addr,end)` via ee-objdump, `has_vu0` regex
  (`\b(lqc2|sqc2|cfc2|ctc2|qmfc2|qmtc2|v[a-z]+(\.[xyzw]+)?)\b`), callee extraction from `jal`, string-ref heuristic
  (lui/addiu pairs -> printable bytes in ELF), json_out().
- compile_diff.py = compile (13 ms) -> mini-link (13 ms) -> extract/normalize -> exact check -> objdiff JSON diff, cap 120 lines.
- promote.py: re-run compile_diff exact, append function to dest TU, ensure registry symbol == mangled def name,
  `make verify` (KH2_NATIVE=1 via env.sh; ~10 s), rollback with `git checkout -- <files>` on non-MATCHED.
- lock.py: `os.open(out/rig/locks/<addr>.lock, O_CREAT|O_EXCL)` with pid+ts JSON.
- driver.py: OpenAI chat-completions with tools; stop rules per task; transcript JSONL + numbered attempt .cpp.

## Next steps (priority)
1. Write rigcommon.py + compile_diff.py; sanity: `compile_diff.py 0x281100 --src src/tz/ui_accessors.cpp` must say exact.
2. list_candidates.py + get_context.py (E3 mapping join, types.txt snippet, DWARF prototypes, m2c draft when no VU0).
3. AGENT_PROMPT.md, lock.py, park.py, promote.py.
4. driver.py against the Spark; smoke test 6 functions (3×80–200 B, 3×200–500 B, named, no VU0, Tz/YS/dk), --parallel 3.
5. README.md, codegen-3.2.md from observed idioms; commit matches separately.
