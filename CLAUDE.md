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
tools/setup_toolchain.sh <path>/ee-gcc3.2-040921-full.tar.gz ~/ps2   # once
source ~/ps2/env.sh                    # KH2_NATIVE=1, PS2_TOOLCHAIN, KH2_OBJDIFF_DIR
make                                   # compile, link, byte-compare: must end in MATCHED!
python3 tools/quality.py               # what the source is made of, and how much is named
```

`SLPM_666.75` (sha256 `d869ce4b…bc87`) sits at the repository root, extracted
from your own disc (`isoinfo -i <iso> -x '/SLPM_666.75;1'`). It is ignored by
git; never commit it or anything derived from it.

With `KH2_NATIVE=1` the build runs in a no-network bubblewrap sandbox laid out
like the project's Docker container (`tools/sandbox.sh`: the repository at
`/work`, the compiler at `/opt/ps2/gcc`). Without it, `make` uses Docker as
upstream does. The Sony SDK libraries need two older compilers, which
`setup_toolchain.sh` fetches into `tools/compilers/`.

`make` compares the whole ELF with the original. That comparison is the final
authority. After changing sources or `functions.tsv`, a failed compile makes
`make` stop; a stale `kh2.elf` from an earlier run can still be lying around,
so read `make`'s last line, not `cmp` alone.

## Where the source comes from

The whole main executable builds from source and is byte-identical. The first
4,680 functions and the build system are GovanifY's; the rest of the matching
was done in the `zcroker/kh2` fork (machine-written with Claude Code), which
this project adopted as its base on 2026-11-25. This project adds the names
from the PS3 debug build, the file map, the rules, the gate and the site. The
earlier independent matching work of this repository is in history (tag
`pre-adopt-2026-11-25`).

## Measuring progress

Every function is built from source, so "matched" no longer separates done
from not done. Four figures, kept apart in every report
(`tools/quality.py`, `tools/site_data.py`):

1. **Built from source, byte-identical**: all of it. Not progress any more;
   it must simply never drop.
2. **Decompiled to C/C++**: the headline. A function counts when it is plain
   C or C++ (`cpp`), or C++ with vector-unit assembly that this compiler
   cannot express in C (`vu0-asm`). It does not count while it is an assembly
   file (`asm-file`), has inline CPU assembly (`inline-asm`) or a register pin
   (`reg-pin`), or sits in a file where assembly has not been attributed to
   single functions yet (`asm-unit`).
3. **Named**: `functions.tsv` gives it a real name, not an address
   placeholder.
4. **Reviewed**: named, typed with real members, in its original source file,
   and through review. Almost nothing is yet; most source is register-style
   machine output.

In public text say "decompiled", "byte-identical" and "named". Do not write
"honest".

<!-- status:start -->
Status (2026-11-26, written by `tools/site_data.py`): 9,401 of 11,509 functions, 1,366,776 of 2,015,044 bytes of code decompiled to C/C++ (67.8 %); all 11,509 are built from source and the executable is byte-identical, but 2,108 still use assembly or a register pin; 3,536 functions (33.0 % of the code) carry a real name. By function size: under 80 B 86.7 %, 80–199 B 83.7 %, 200–999 B 68.1 %, 1 KB and more 40.2 %. Game code 9,103 / 10,879 functions (68.5 % of its bytes; Menus & Jiminy's Journal 90.1 %, Core gameplay 69.0 %, Camera, maps & HUD 70.4 %, Party members & models 45.4 %, Minigames 43.9 %, World map 80.8 %, Cutscenes & musical 74.3 %, Effects & particles 44.0 %, Smaller directories 69.3 %, Not placed yet 52.4 %); SDK & runtime 298 / 630 functions (58.4 %). 348 of 668 files in the file map have every function matched. The five overlays are not started. `make` ends in MATCHED!.
<!-- status:end -->

## Layout

| Path | What |
|---|---|
| `functions.tsv` | The symbol registry: one symbol per address. Authoritative for the name a definition must produce. Rename with `tools/rename_fn.py`, never by hand |
| `layout.tsv` | The build's function table (11,509 rows). `data/layout_full.tsv` is a fuller table (14,618 function starts) from this project's earlier analysis; the extra ones are small functions inside linked units |
| `linked_units.tsv` | Whole source files compiled as one object and linked at their original address, with their data and per-file compiler flags (`notes/linking.md`) |
| `src/<area>/` | Sources by original developer directory (`tozawa`, `yasui`, `harata`, `naka`, …) |
| `src/anon/` | Source with no home yet: `unit_<addr>.cpp` linked units and older batches. Machine-written |
| `src/sdk/`, `src/newlib/`, `src/libgcc/`, `src/libsupc++/` | Sony SDK, C library and compiler runtime code |
| `nonmatching/` | The non-matching lane (`tools/lane.py`). Empty of scored files now that everything builds; use it for clean rewrites that do not match yet. `legacy/` is an old upstream dump |
| `data/e3/`, `notes/e3/` | Names, prototypes and class layouts from the E3 2014 PS3 debug build, the PS3-to-PS2 map with confidence tiers, and what has been applied |
| `data/tu_map.tsv` | The original source file of every function, from the PS3 build's compile units |
| `notes/` | The fork's notes: linking, unit boundaries, machine-suggested names (`function_names.tsv`: descriptions by a model, not evidence) |
| `docs/codegen-3.2.md` | What ee-gcc 3.2 does: the idiom catalogue |
| `tools/rig/` | This project's matching rig. `get_context.py` works on this base; `compile_diff.py`, `promote.py` and the lane scorer have not been re-checked against the new build and must be before use |
| `site/` | The progress website; `site/data` is generated by `tools/site_data.py` |

Compiler: `ee-gcc 3.2-040921`, base flags `-O2 -g0 -fno-exceptions -fno-rtti
-fpermissive -ffunction-sections`; linked units add their own (`-G0`,
`-fno-strict-aliasing`, `-g` are common and plausibly original; flags that
only disable an optimisation pass are steering and are on the clean-up list).

## Rules

1. **The ELF stays byte-identical.** Every change ends in `MATCHED!`. A
   rewrite that does not match yet goes to `nonmatching/`, not into `src/`.
2. **One symbol per address**, changed only with `tools/rename_fn.py`, which
   renames the registry and every source together and reverts if any function
   would resolve differently.
3. **No new tricks, and fewer old ones.** No new assembly statements, register
   pins, `naked`, `.incbin`, byte arrays, per-file flags, or statements that
   exist only to steer the compiler. The adopted source has many; removing
   one is progress, adding one is a rejection. `asm("symbol")` labels and
   file-scope `asm("a = b")` aliases are linkage, not code.
4. **Names need evidence.** Evidence is the PS3 debug build at tier `seed`,
   `high`, `sim-high` or `sim-vt-high`, a string in the binary, or a vtable
   slot. Lower tiers are provisional and keep the address
   (`MenuCursor__DeleteAll_0012ab40`). A model's description of what a
   function does is not a name. A wrong name is worse than a placeholder.
5. **The PS3 layouts are not the PS2 layouts.** The HD build added members
   (`m_Xoffset16x9` shifts 98 UI classes by 4; `YS::OBJ` and others differ
   more). Check every offset against the PS2 code.
6. **Readability is the work now.** Real members instead of offsets, real
   parameters and locals instead of `r4`/`a0`, the original file, one
   reviewed class header per class.
7. **Measurement is not yours to change** in a work branch: `tools/`,
   `Makefile`, `layout.tsv`, `linked_units.tsv` flags, site data.

## Working habits

- Hard or stalled problem: read the evidence and the primary sources first
  (the assembly, GCC 3.2's source, ee-gcc's RTL dumps with `-dP -dl -dg`),
  write the model down, test it with a cheap experiment, and only then brief
  agents.
- Mechanical search finds the form; a model names and tidies it. Do not spend
  model tokens on register puzzles a permuter can run.
- After any batch run `git status` must be clean and `python3 tools/gate.py`
  must print `gate: ok` before the result is believed.
- Long-lived processes go under `sbg`; stop them when done.
- Commits are authored with the repository's identity and end with a
  `Co-Authored-By:` line naming the model that did the work.
- `matching` is pushed after every accepted, verified merge. Never force-push.

## Credits

GovanifY's `kh2` ("dasein") is the origin: the build system, the first 4,680
matched functions and the header skeletons. The `zcroker/kh2` fork brought the
build to all 11,509 functions. Both are MIT-licensed; see `LICENSE`.
