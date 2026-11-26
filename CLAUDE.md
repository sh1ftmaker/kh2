# CLAUDE.md: Kingdom Hearts II Final Mix decompilation

A byte-matching decompilation of *Kingdom Hearts II Final Mix* (PlayStation 2,
Japan, `SLPM_666.75`): C++ that Sony's `ee-gcc 3.2-040921` turns back into the
exact bytes of the game's main ELF. Readable, correctly typed source is part
of the goal, not an afterthought. The project follows the working method of
the Four Swords Adventures decompilation (github.com/sh1ftmaker/fsa); where
this file is silent, that project's habits apply.

This file applies to every agent, not only Claude. Workers read
`docs/RULES_CARD.md`; reviewers read it and `docs/REVIEW_BRIEF.md`; whoever
coordinates reads `docs/COORDINATOR.md` and `docs/PLAN.md`.

## Build (Linux)

```sh
source <toolchain>/env.sh              # written by tools/setup_toolchain.sh
python3 tools/build_elf.py objects     # regenerate the object list (see below)
make                                   # compile, link, byte-compare: must end in MATCHED!
python3 tools/progress_bytes.py        # totals
python3 tools/lane.py score            # re-score the non-matching lane (about 10 s)
```

`SLPM_666.75` (sha256 `d869ce4b…bc87`) sits at the repository root, extracted
from your own disc (`isoinfo -i <iso> -x '/SLPM_666.75;1'`). It is ignored by
git; never commit it or anything derived from it.

`make` compares the whole ELF with the original. That comparison is the final
authority. Two things make it lie, and both have cost real work before:

- **A stale object list.** `make` alone can print `MATCHED!` without having
  compiled a new source. Run `python3 tools/build_elf.py objects` first
  whenever sources or `functions.tsv` changed.
- **An unsourced shell.** ee-g++ finds `as` and `ld` through `PATH`. Without
  the toolchain's `env.sh` every compile fails with `Assembler: unknown option
  -g0`, and a tool that swallows the error reports 0 %. Only the toolchain's
  `shim/` directory goes on `PATH`; its `bin/` ships an ancient 32-bit `make`.

## Measuring progress

The headline is **matched bytes of code** (`tools/progress_bytes.py`). The
function count is given beside it, never alone: before the small functions
were done it overstated progress more than three times. objdiff's
`matched_code_percent` is 100 % by construction here, because unwritten code
is the original's bytes; never quote it.

Three grades, kept apart in every report:

1. **Matched**: the function's source is linked into the ELF and the ELF is
   byte-identical. This is the only figure called progress.
2. **Reviewed**: matched, and it has passed review: evidenced names, real
   types, in the source file that owned it. Functions in `src/anon` and
   `src/autodecomp` are matched but not reviewed.
3. **Structural**: written, in the non-matching lane, and differing from the
   original only in register choice or instruction order (`tools/lane.py`
   classes `regalloc` and `scheduling`). Shown as a separate weighted figure:
   matched bytes plus size x match % of those functions. A further figure
   counts every written function the same way. Neither is called matched.

In public text (README, site, commit summaries) say "matched" or
"byte-matched". Do not write "honest".

<!-- status:start -->
Status (2026-11-26, written by `tools/site_data.py`): 6,247 of 14,618 functions, 402,992 of 2,226,245 bytes of code matched (18.1 %); structural progress 20.1 % (448,513 bytes, matched code plus partial credit for 351 structurally matched functions); 10,552 functions are written (72.9 % of the code), 54.5 % counting each by how closely it matches. By function size: under 80 B 64.5 %, 80–199 B 39.2 %, 200–999 B 4.30 %, 1 KB and more 0.32 %. Game code 6,097 / 13,806 functions (19.1 % of its bytes; Menus & Jiminy's Journal 18.7 %, Core gameplay 24.3 %, Camera, maps & HUD 28.7 %, Party members & models 14.6 %, Minigames 13.6 %, World map 22.1 %, Cutscenes & musical 27.6 %, Effects & particles 16.9 %, Smaller directories 20.0 %, Not placed yet 10.5 %); SDK & runtime 150 / 812 functions (3.40 %). 32 of 574 files in the file map have every function matched. The five overlays are not started. `make` ends in MATCHED!.
<!-- status:end -->

## Layout

| Path | What |
|---|---|
| `functions.tsv` | The symbol registry: one symbol per address. Authoritative for the name a definition must produce |
| `layout.tsv` | Every function's address and size. Generated (`tools/gen_layout.py`); never edit by hand |
| `src/<area>/` | Sources by original developer library (`tozawa`, `yasui`, `ys`, `tz`, `kn`, …), as the E3 debug build names them |
| `src/anon/` | Matched functions with no home yet, many generated upstream. Unreviewed |
| `src/autodecomp/` | One file per address, written by the machine lifter. Matched, unreviewed, placeholder names, raw offset access |
| `nonmatching/` | The non-matching lane: one written-but-not-matching function per file, scored by `tools/lane.py` into `SCORES.tsv`, never linked. Machine-written and unreviewed unless its header says otherwise. `legacy/` is an old upstream dump, not scored |
| `wip/` | Not built. Old experiments; do not add to it |
| `data/e3/` | Names, prototypes and class layouts recovered from the E3 2014 PS3 debug build, and the PS3-to-PS2 function map with its confidence grades |
| `docs/codegen-3.2.md` | What ee-gcc 3.2 does: the idiom catalogue. Read before matching anything |
| `docs/rig/` | The matching rig's own documents (tools/rig) |
| `tools/rig/` | `compile_diff.py` (the scorer), `get_context.py`, `promote.py`, `park.py`, `permuter.py`, `sweep.py` |
| `site/` | The progress website; `site/data` is generated by `tools/site_data.py` |

Compiler: `ee-gcc 3.2-040921`, `-O2 -g0 -fno-exceptions -fno-rtti
-fpermissive -ffunction-sections`, GCC 3 Itanium C++ ABI. No other known
project uses this exact compiler, so `docs/codegen-3.2.md` is the only
reference; add to it whenever a residue teaches something.

## Rules for matching work

1. **A function counts only when the whole ELF still matches.** `promote.py`
   lands a candidate and rolls everything back if `make verify` fails. Never
   hand-edit around it.
2. **One symbol per address.** Replace a placeholder in `functions.tsv`; do
   not append a second name. A source that defines the function under the old
   name is renamed in the same commit, or the function silently drops out of
   the build.
3. **No tricks.** No inline asm statements, no `register … asm("$sN")`, no
   `naked`, no `.incbin`, no byte arrays, no statements that exist only to
   steer registers or scheduling. `asm("symbol")` labels on *declarations*
   are the binding mechanism and are allowed. A function that matches only
   through a trick stays unmatched with a `// FIXME:` saying what differs.
4. **Names need evidence.** The E3 map grades each name (`seed`, `high`,
   `med`, `low`); `seed` and `high` may be used as real names. Anything else
   is provisional and keeps its address: `MenuCursor_0012ab40`. Unknown
   functions are `func_XXXXXXXX`, unknown data `D_XXXXXXXX`. A wrong name is
   worse than a placeholder.
5. **The PS3 layouts are not the PS2 layouts.** The HD build added members
   (`m_Xoffset16x9` shifts 98 UI classes by 4; `YS::OBJ` and others differ
   more). Take a class from `data/e3` as a starting point and check every
   offset against the PS2 code.
6. **Structure first.** For functions that will not match in one pass, get the
   fields, types, calls, constants and control flow right and stop. Judge a
   miss by its class, not its percentage. Park register-only residues
   (`tools/rig/park.py`); they are a search problem, not a writing problem.
7. **Measurement is not yours to change.** No edits to `tools/`, `Makefile`,
   `layout.tsv`, `objdiff.json` or the site data in a matching branch.

## Working habits

- Hard or stalled problem: read the evidence and the primary sources first
  (the assembly, GCC 3.2's source, ee-gcc's RTL dumps with `-dP -dl -dg`),
  write the model down, test it with a cheap experiment, and only then brief
  agents.
- Mechanical search finds the form; a model names and tidies it. Do not spend
  model tokens on register puzzles a permuter can run.
- After any batch run, `python3 tools/rig/sweep.py` (exact but unpromoted
  work) and `git status` must be clean before the yield is believed.
- Long-lived processes go under `sbg`; stop them when done.
- Commits are authored with the repository's identity and end with a
  `Co-Authored-By:` line naming the model that did the work.
- `matching` is pushed after every accepted, verified merge. Never force-push.

## Credits

This project continues GovanifY's `kh2` ("dasein"), MIT-licensed; the build
system, the first 4,680 matched functions and the E3 header skeletons are
his. See `LICENSE`.
