# layout.tsv regeneration (2026-08-18, branch `layout-regen`)

Regenerated `layout.tsv` (the function-boundary table: `addr end size name`, hex
addr/end, decimal size, non-overlapping ascending, `end == addr + size`) to cover
all discoverable code in the KH2FM main ELF section, not just the original
11,286 Ghidra-seeded functions. Delivered as `tools/gen_layout.py`
(+ `tools/ghidra/ExportFunctionBodies.java`), reproducible end-to-end.

## Result

|                | before | after | delta |
|---|---:|---:|---:|
| layout.tsv rows | 11,286 | 14,618 | +3,332 |
| total bytes (sum of row sizes) | 1,985,545 | 2,226,245 | +240,700 |
| matched (decompiled) bytes | 244,268 | 244,268 | 0 |
| matched % (`tools/progress_bytes.py`) | 12.3% | 10.97% | -1.33 pt |
| `make` | MATCHED! | MATCHED! | unchanged |

Matched byte count is unchanged (existing rows are kept byte-for-byte verbatim;
new rows are `.incbin` asm rows, so no compare bytes change) — the % drop is
purely the larger, more honest denominator. `out/generated/layout_status.tsv`
has 14,618 data rows, matching `layout.tsv` 1:1.

**Registry check**: all 4,678 `functions.tsv` addresses are still row starts in
the new `layout.tsv` (0 misses — expected, since existing rows are untouched).

**Cross-check**: `/data/agent-tom/kh2/e3/map/gap_functions_named.tsv` lists 97
addresses the E3-2014 symbol-leak mapping agent identified as "high confidence"
gap functions. All 97 (100%) are now covered by a layout row start; 193/222 of
the full (all-confidence) list are covered.

## Method

`tools/gen_layout.py` has four subcommands (`candidates`, `ghidra`, `emit`,
`all`); `all`/`emit` support `--dry-run` (prints counts, writes nothing).

1. **`candidates`**: from a Ghidra function-body export (`entry name thunk
   ranges`, produced by `tools/ghidra/ExportFunctionBodies.java`) and the
   current `layout.tsv`, compute new candidate function starts from seven
   evidence sources, scanned only over addresses not already owned by a known
   function body and not inside a detected pointer-table region (≥3
   consecutive words all pointing into the code span — vtable/fptr table, not
   code):
   - `jal` — direct-call targets from owned code (0 found at every iteration:
     Ghidra had already made every direct callee a function before this task
     started).
   - `cd` — `.ctors`/`.dtors` pointers (0x37A4B4–0x37A800): static-init call
     wrappers.
   - `j` — tail-jump targets outside any known body.
   - `tab` — targets of ≥3-word pointer runs in un-owned data (vtables/fptr
     tables) that point at un-owned code.
   - `lu` — addresses formed by `lui`/`addiu`/`ori`/`daddiu` pairs inside owned
     code, landing in the code span, un-owned.
   - `ee` — `/data/agent-tom/kh2/e3/map/ee_funcs.json` entries tagged
     `src:"gap"` (an independent PS3 E3-2014 symbol-leak cross-check).
   - `seq` — gap-fill: the start address of every remaining un-owned span in
     the code region, lowest priority, re-derived every iteration as earlier
     gap bytes get consumed by newly created functions.

   Every raw candidate is filtered through `plausible_function()`, a bounded
   R5900 CFG walk (`rabbitizer`, category `R5900`): decode from the candidate
   address, follow branch/jump targets and delay slots, reject on any invalid
   instruction, reject a conditional/loop branch that targets *before* the
   candidate's own entry (mid-function loop target ⇒ not a real start,
   `entry` isn't the true start), and require the walk to reach an explicit
   termination (`jr $ra`, or an unconditional `j`/branch with a resolvable
   target — an ambiguous register-indirect `jr $reg`/`jalr $reg` earns no
   credit by itself, since e.g. the literal word `0x00000008` also decodes as
   the syntactically-valid-but-meaningless `jr $zero`). Falling through
   (non-branch, non-jump) into an *already-owned* function body earns no
   credit either — real compiled functions don't rely on falling off the end
   into unrelated code; an *explicit* jump/branch into owned code (e.g. a
   ctor/dtor thunk tail-jumping to an earlier existing function) is still
   accepted.

2. **`ghidra`**: copies `/data/agent-tom/kh2/tools/ghidra-projects/kh2.{gpr,rep}`
   to a scratch directory (the real project is held open by the ghidra-cli
   bridge JVM), strips lock files, then drives `analyzeHeadless` with
   `ExportFunctionBodies.java`: validated candidates go in via
   `KH2_CANDIDATES`, Ghidra disassembles + `CreateFunctionCmd`s each one not
   already inside a function (real disassembly + CFG, not the Python
   approximation), and every function in the project is re-exported. Any
   address Ghidra itself rejects (`KH2_NOCODE` — disassembly failed —  or
   `KH2_CREATE_FAILED`) is recorded in `out/generated/layout_rejected.txt` and
   never re-proposed.

3. Repeat 1–2 to a **fixpoint** (0 new validated candidates). This run:
   iteration 1 (`ee`/`tab`/`lu`/`cd`/`j` dominate) created 3,094 of 3,179
   candidates; iterations 2–3 (mostly newly-exposed `seq`/a few residual
   `tab`/`lu`/`ee`/`cd`) added 157 then 33; iterations 4–25 each added 1–12
   more as `seq` gap-filling chewed through the tail of a few large gaps one
   small function at a time, converging to 0 new candidates. 3,331 new
   functions total (11,289 → 14,620 in the Ghidra project, including 3
   pre-existing extras noted in the prior exploration).

4. **`emit`**: turns the final body export into the new `layout.tsv`.
   Existing rows are kept byte-for-byte (same addr/end/name). New functions
   get **one row per contiguous Ghidra body range**, not just entry→max-end:
   a Ghidra body can be non-contiguous (observed: a 4-byte hole, or a
   far-away shared tail fragment *before* its own entry point, reachable only
   by an incoming jump). Ranges are placed greedily in address order against
   a claimed-bytes bitmap seeded from the existing rows, so existing rows
   always win any conflict and no row ever overlaps another. Also computes
   `out/generated/layout_gaps.tsv` (not committed, regenerate with
   `python3 tools/gen_layout.py emit`) classifying everything still
   uncovered.

Runtime: candidate computation + CFG validation ≈2s in Python; each
`analyzeHeadless` round-trip ≈1–2s (JVM already warm); the whole discovery
fixpoint (2 invocations, 26 Ghidra rounds total) ran in ≈85s wall.

## Gap table (remaining 293,815 B across 5,708 gaps, `layout_gaps.tsv`)

| class | count | bytes | notes |
|---|---:|---:|---:|
| `zero` | 5,611 | 22,540 | alignment padding (all-zero words) |
| `other` | 30 | 251,424 | mostly two known large blocks (see below); rest is literal pools / floats / interleaved vtable data that doesn't meet the `ptrs_mostly`/`string` thresholds |
| `unknown_code_like` | 64 | 3,428 | passes the CFG-walk plausibility check but wasn't independently discovered by any evidence source (see below — **all 17 gaps ≥64 B here are a known, pre-existing artifact, not new undiscovered code**) |
| `string` | 1 | 14,263 | ≥90% printable bytes |
| `ptrs_mostly` | 2 | 2,160 | ≥60% (but <100%) of words point into the code span |

`other` is dominated by the two largest gaps already flagged in the original
exploration: 0x325bcc–0x35ebb8 (233,452 B, still unclassified — the biggest
open question in this dataset, likely a mix of literal-pool floats, VU0
microcode, or an unreferenced overlay-adjacent data block; no evidence source
in this pass produced a validated candidate inside it) and 0x35ebb9–0x366390
(30,679 B, odd start = tail of a string table). Both were already gaps before
this task and remain unresolved; a deeper per-word classifier (float-literal
heuristics, VU0 opcode recognition) is out of scope for this pass — flagged
for a follow-up.

### `unknown_code_like` gaps ≥ 64 B (all 17 — explained, not new)

Every one of these traces back to an **existing** (pre-regen) layout row whose
Ghidra body is non-contiguous with a fragment physically *before* the row's
own entry address — exactly the "65 layout rows where Ghidra body min/max !=
row addr/end" quirk the prior exploration pass (`explore1_ghidra_vs_layout.py`)
already documented, and which the handoff explicitly says to leave alone
("keep layout's values for existing rows"). Example: existing row
`00100690 001006ac 28 FUN_00100690` has Ghidra body ranges
`[('0x100618','0x10068c'), ('0x100690','0x1006ac')]` — the first range (a
shared-tail fragment reachable by an incoming jump, not this function's own
straight-line code) is legitimately code but was never assigned to any row
by the original layout, and this pass intentionally does not retroactively
extend or split an existing row to reclaim it. Verified for all 17:

```
0x100614-0x00100690  owner existing row FUN_00100690
0x105e64-0x00105ec8  owner existing row FUN_00105ec8
0x13df48-0x0013df98  owner existing row FUN_0013df98
0x1443bc-0x00144410  owner existing row FUN_00144410
0x161410-0x00161488  owner existing row FUN_00161488
0x191658-0x00191738  owner existing row FUN_00191738
0x194710-0x00194750  owner existing row FUN_00194750
0x197ea4-0x00197f60  owner existing row FUN_00197f60
0x1995f4-0x00199668  owner existing row FUN_00199668
0x1ba060-0x001ba0f8  owner existing row FUN_001ba0f8
0x1c2ad4-0x001c2b18  owner existing row FUN_001c2b18
0x1c5060-0x001c5128  owner existing row FUN_001c5128
0x1c7ab4-0x001c7b48  owner existing row FUN_001c7b48
0x1c8dfc-0x001c8e60  owner existing row FUN_001c8e60
0x1d6850-0x001d68c0  owner existing row FUN_001d68c0
0x241f1c-0x00241f78  owner existing row FUN_00241f78
0x2bc7ec-0x002bc938  owner existing row FUN_002bc938
```

Fixing these would mean splitting or extending existing rows (adding a
*second* row for the pre-entry fragment, since a single `addr,end,size` row
can't represent a non-contiguous body) — deliberately left for a follow-up
that specifically targets the 65-row list, so as not to touch existing rows'
established addr/end in this pass.

## Known limitations

- **Validation depends on `rabbitizer`** (from `/data/agent-tom/kh2/tools/venv`)
  rather than a hand-written R5900 opcode table; `gen_layout.py` adds the venv
  `site-packages` to `sys.path` automatically via `KH2_TOOLS`. Without
  rabbitizer importable, `plausible_function()` degrades to "accept
  everything" (documented in the module docstring) — not recommended, kept
  only so `emit`/`candidates` don't hard-fail in a minimal environment.
- `isValid()` alone is a weak signal (dense MIPS opcode space — data words
  routinely decode as syntactically valid instructions, e.g. `jr $zero` for
  the raw word `0x8`); this pass adds a bounded CFG walk requiring an
  *explicit* termination and treats indirect `jr $reg`/`jalr $reg` (target
  not statically known) as inconclusive rather than a free pass. It's still
  an approximation, not a full alias/points-to analysis.
- The 233 KB `other` gap at 0x325bcc–0x35ebb8 is still unclassified; no
  evidence source in this run produced a validated candidate inside it.
- The `ghidra` subcommand always talks to a scratch copy of the Ghidra
  project (`/data/agent-tom/kh2/tools/ghidra-projects/kh2.{gpr,rep}` copied to
  `--scratch`, default `/tmp/kh2_gen_layout_gp`); it never touches the real
  project (which is normally held open by the ghidra-cli bridge JVM).
- `MAX_ITERS = 25` per invocation is a safety cap, not the fixpoint condition
  (the condition is 0 new validated candidates); this run needed two
  invocations (25 iterations, then 1 more that found 0) to fully converge.

## Reproducing

```
source /data/agent-tom/kh2/tools/env.sh   # JAVA_HOME, GHIDRA_INSTALL_DIR, venv on PATH
cd /data/agent-tom/kh2/kh2
python3 tools/gen_layout.py ghidra --scratch /tmp/kh2_gen_layout_gp   # iterate to fixpoint (re-run until "fixpoint reached")
python3 tools/gen_layout.py emit --bodies out/generated/ghidra_bodies.tsv
source /data/agent-tom/kh2/env.sh
make && make objdiff-report && python3 tools/progress_bytes.py
```

`python3 tools/gen_layout.py candidates` alone (no Ghidra) recomputes and
prints per-tier raw/validated candidate counts against a given `--bodies`
export, for quick iteration on the evidence sources / validator without
paying for a headless round-trip.
