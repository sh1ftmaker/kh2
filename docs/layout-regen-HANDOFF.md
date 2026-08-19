# layout.tsv regeneration — HANDOFF (WIP, stopped early on coordinator request)

Goal: regenerate `layout.tsv` (authoritative function-boundary table) so it covers ALL code in the
main ELF section, not just the 11,286 Ghidra-found functions; deliver as `tools/gen_layout.py`
(+ Ghidra export script) with docs/layout-regen.md, a verified `make` (MATCHED!), committed on
branch `layout-regen` (from `e3-symbols`). Do NOT push; do not touch other branches.

Stage reached: **evidence gathering / exploration done, generator NOT yet written, layout.tsv unchanged,
build untouched (still MATCHED! as on e3-symbols).** Everything below is what the next agent needs.

## How layout.tsv is consumed (read tools/common.py, tools/build_elf.py — verified)
- `common.load_boundaries()`: rows must be sorted, non-overlapping, `end == addr+size`, inside main
  (0x100000–0x37A4B4). Names default `func_xxxxxxxx` if blank.
- `build_elf.py objects` -> `out/generated/layout_status.tsv`: one row per layout row, mode `cxx` if
  functions.tsv maps the row addr to a symbol resolvable to a src file, else `asm`.
- `normalize`: for cxx rows only, patches exactly `size` bytes of the row from the linked ELF (pads
  with zeros / truncates). asm rows = untouched original bytes. So adding asm rows never changes bytes;
  **shrinking an existing cxx row would change the compare** — keep existing rows' addr/end untouched
  unless a new function start is proven inside them (none found so far, see below).
- objdiff units and `tools/progress_bytes.py` are per layout row (bytes total = sum of row sizes).

## Files created so far (all on branch layout-regen)
- `tools/ghidra/ExportFunctionBodies.java` — Ghidra headless post-script. Optional env
  `KH2_CANDIDATES` (file, one hex addr per line): for each candidate not inside an existing function
  body it disassembles + `CreateFunctionCmd` (Ghidra computes body via CFG). Then exports ALL functions
  to `KH2_BODIES_OUT` as TSV `entry name thunk ranges` (ranges = comma list `start-end`, end exclusive,
  all body ranges). Run (tested, ~3 s wall, JVM warm):
  ```
  . /data/agent-tom/kh2/tools/env.sh
  # the real project /data/agent-tom/kh2/tools/ghidra-projects is LOCKED by a running ghidra-cli
  # bridge JVM (pid ~609455) -> copy it first, work on the copy:
  cp -r /data/agent-tom/kh2/tools/ghidra-projects/kh2.gpr /data/agent-tom/kh2/tools/ghidra-projects/kh2.rep $WORK/gp/
  rm -f $WORK/gp/*.lock* $WORK/gp/kh2.rep/*.lock*
  KH2_CANDIDATES=cands.txt KH2_BODIES_OUT=$WORK/ghidra_bodies.tsv \
    $GHIDRA_INSTALL_DIR/support/analyzeHeadless $WORK/gp kh2 -process SLPM_666.75 -noanalysis \
    -scriptPath /data/agent-tom/kh2/kh2/tools/ghidra -postScript ExportFunctionBodies.java -max-cpu 8
  ```
  (drop `-readOnly` when creating functions so the project keeps them between iterations; base export
  used `-readOnly`). Log lines: `KH2_FUNCTION_COUNT_BEFORE/AFTER`, `KH2_CANDIDATES created= skipped= failed=`,
  `KH2_NOCODE <addr>` (disassembly failed), `KH2_CREATE_FAILED`.
- `tools/gen_layout_wip/ghidra_bodies_base.tsv` — the export of the untouched project (11,289 fns:
  all 11,286 layout rows + 0x001391f8 + two in the 0x01f18000 overlay section which must be ignored).
- `tools/gen_layout_wip/explore1_ghidra_vs_layout.py` — compares Ghidra bodies with layout rows.
  Findings: 417 Ghidra bodies are non-contiguous (mostly a 4-byte hole, sometimes a far-away shared
  tail, e.g. FUN_00108080 has ranges 0x108080-0x108094 + 0x1124e8-0x1124f0); 65 layout rows have
  addr/end != Ghidra body min/max (layout row was chosen as entry..end of first range or similar) —
  keep layout's values for existing rows. Layout code-span gaps: 6,306 gaps, 534,515 B; largest
  0x325bcc–0x35ebb8 (233,452 B) and 0x35ebb9–0x366390 (30,679 B, note odd start = string tail).
- `tools/gen_layout_wip/explore2_candidates.py` -> `cands1.json` — candidate function starts by
  evidence source, computed against the Ghidra-owned bitmap (owned = inside any Ghidra body):
  | source | count of unknown targets |
  |---|---|
  | jal targets from owned code | **0** (Ghidra already made every direct callee a function) |
  | j (tail-jump) targets outside any body | 3 |
  | .ctors/.dtors pointers (0x37A4B4–0x37A800) | 68 |
  | pointer runs >=3 in un-owned words pointing into code span (vtables/fptr tables; 479 runs) | 1,028 distinct |
  | lui/addiu(ori) formed addresses in owned code, into code span, un-owned | 956 (INCLUDES vtable/literal/string data addrs — must be validated) |
  | union of the above | 1,985 |
  | e3/map ee_funcs.json `src:"gap"` extras | 2,475 (only 783 overlap the union; 1,692 come from ee_analyze's "code after jr $ra in gaps" + jal targets decoded from gap bytes) |
  Conclusion: the missing code is a self-contained cluster reachable only through function pointers /
  vtables (C++ virtuals) and static ctors -> discovery must iterate: create functions for validated
  seeds in Ghidra, re-export, rescan new bodies for jal/j/lui-addiu targets, repeat to fixpoint, then a
  last low-priority pass for un-referenced code following function ends ("seq" heuristic).
- `tools/gen_layout_wip/gapview.py` — gap content histogram: 4,720 gaps are all-zero (18,880 B,
  alignment padding), 1,586 "other" (515,635 B); size bins of "other": <16 B:132, <64:677, <256:575,
  <1k:157, >=1k:45. No gap is 100% code-span pointers under the naive test (need per-word view).

## Next steps (exact)
1. Write `tools/gen_layout.py` (single file, stdlib only; optionally use rabbitizer from
   /data/agent-tom/kh2/tools/venv for a validity cross-check). Subcommands:
   `candidates` (evidence sources above -> out/generated/layout_candidates.txt with source tags),
   `ghidra` (drive analyzeHeadless on a project copy with the script above; loop until 0 created),
   `emit` (bodies TSV -> layout.tsv + out/generated/layout_gaps.tsv), `all`.
   Include a pure-python fallback CFG walker (linear sweep with max-forward-target; jr $ra/j/b end
   rules; jump-table recovery via lui/addiu of table addr) for when Ghidra is unavailable, and use it
   to VALIDATE candidates before feeding Ghidra (reject: word at addr looks like a code-span pointer /
   run of pointers = vtable or jump table; walk hits invalid instr; backward branch before entry).
   Own R5900 validity decoder: main opcode set + SPECIAL/REGIMM/MMI/COP tables (notes in the agent's
   thread; rabbitizer `Instruction(w,addr,category=R5900).isValid()` treats `break` as valid).
2. Order candidates by evidence strength (jal > ctors/dtors > j > ptr-run > lui/addiu > ee extras > seq)
   and feed Ghidra in phases; after each phase re-export and recompute (new bodies give new jal targets).
   Verify Ghidra did not extend a new body over an existing function (post-check non-overlap in
   Python; clip end at next entry, 4-byte align). Non-contiguous bodies: use entry..max end only if the
   holes contain no other function's bytes; else entry..end of first range — document.
3. Emit rows: keep existing rows verbatim (addr/end/name); new rows `FUN_xxxxxxxx`; skip overlay
   entries (0x01f18000+). Check every functions.tsv address is a row start (report mid-row hits).
4. Classify remaining gaps (zero/alignment, jump table = words pointing into the preceding function's
   body, fptr table/vtable = >=3 words at function entries, string, literal pool, unknown code-like)
   -> out/generated/layout_gaps.tsv; list any >=64 B "unknown code-like" in the report.
5. `source /data/agent-tom/kh2/env.sh && make` (must print MATCHED!), `make objdiff-report`,
   `python3 tools/progress_bytes.py`, `python3 tools/build_elf.py objects` and check
   layout_status.tsv rows == layout.tsv rows. Baseline before: 11,286 rows.
6. docs/layout-regen.md + commit (author sh1ftmaker <shiftmaker@gmail.com>, trailer
   `Co-Authored-By: Claude Fable 5 <noreply@anthropic.com>`), no push.

## Known problems / caveats
- Ghidra project lock: never run headless against /data/agent-tom/kh2/tools/ghidra-projects directly
  while the ghidra-cli bridge JVM is alive; use a copy (62 MB).
- Ghidra `-noanalysis` + CreateFunctionCmd will not know noreturn callees for NEW functions unless the
  callee is already marked; expect some merged/over-long bodies at `jal abort`-style ends.
- lui/addiu targets and pointer-run targets include data (vtables, strings, floats interleaved in the
  code span) — validation is mandatory before creating functions.
- The e3 mapping agent (`/data/agent-tom/kh2/e3/map/gap_functions_named.tsv`, 97 high matches) wants
  layout rows for gap functions; those addresses are a good cross-check set for the result.
