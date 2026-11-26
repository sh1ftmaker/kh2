# Rules card (workers and reviewers)

All a worker needs. Workers do not read PLAN.md or COORDINATOR.md. CLAUDE.md
is already loaded. Changes in your worktree you did not make may be the
owner's: leave them and mention them in your report.

## Top three

1. The build ends in `MATCHED!` after every commit. Nothing else decides
   whether a change is acceptable.
2. No new tricks, no guessed names (below). Removing assembly, pins and
   offset access is the work.
3. A rewrite that will not match after four tries goes to `nonmatching/` with
   a note on what differs. Move on.

## Setup

- Work only in the worktree and branch made for you. Commit as you go with
  the repository's identity, each message ending with
  `Co-Authored-By: <your model> <noreply@…>`. Never commit to `matching`,
  push, rebase, merge, or run a bare `git stash`.
- `source` the toolchain `env.sh` in every shell.
- Never commit game data: `SLPM_666.75`, `kh2.elf`, `out/`, `build/`, the
  compilers, disc images or dumps.
- One build per worktree at a time; anything long-lived goes under `sbg`.

## Commands

```sh
make                                          # MATCHED! (about 20 s; first build longer)
python3 tools/quality.py                      # totals: write them in your report
grep <addr> out/generated/quality.tsv         # one function's kind and source file
python3 tools/rig/get_context.py <addr>       # disassembly, PS3 name and prototype, class layouts
python3 tools/rename_fn.py --check NAMES.tsv  # dry-run a rename (addr, new_name, evidence)
python3 tools/gate.py --worker                # before your last commit: gate: ok
```

A linked unit (`linked_units.tsv`, `notes/linking.md`) is one source file
built whole with its own flags; its functions must stay in address order.
`tools/rig/compile_diff.py` and `promote.py` have not been re-checked against
this build: do not rely on them until the coordinator says so.

## Reading a diff (the short list; the rest is docs/codegen-3.2.md)

- `lui`+`addiu`/`ori`/load is a symbol (`D_XXXXXXXX`), decoded as
  `(hi << 16) + signext(lo)`; a raw `*(u32*)0x…` cast never matches it. A
  `lui` that is off by exactly one is a mis-decoded negative low half.
- `a0` used as data means a static method: no `this`.
- A call whose result is unused must be declared `void`.
- `j callee` at the end is `return callee(…)`.
- `movz`/`movn` is a ternary; an `if` gives a branch.
- Stores come out in ascending offset order; independent stores get
  rescheduled, so try statement order before anything else.
- Float literals load from `.sdata` through a register; they are literals in
  source.
- Constructor and destructor loops, vptr stores and member destructor calls
  are compiler-generated: declare the class and let the compiler write them.
- s-registers are assigned by reference count and live-range length, not by
  declaration order. A pure s-register swap is not fixed by reordering
  declarations: park it.
- Retail stripped `ErrorPrintf`, `ErrorRaise`, `AxaAssert` and `printf`
  calls that the E3 build still has. Drop them.

## No tricks

Banned, and CHANGES or REJECT in review:

- Escape hatches: asm statements, `register … asm`, `naked`, `.incbin`,
  hand-typed byte arrays, `#pragma`, new `goto`.
- Steering: `volatile` or casts to force code generation; types picked to
  force an extension; temporaries, dead stores, duplicated or reordered
  statements that exist only to move registers; stack padding.
- Field access through casts and offsets (`*(T*)((u8*)p + 0x10)`) in
  hand-written code. Declare the member in the class.
- Fabrication: dummy functions or data that force order.
- Measurement: edits to `tools/`, `Makefile`, `layout.tsv`, `objdiff.json`,
  `site/data`, generated README blocks.
- Decompiler leftovers: `M2C_`, `saved_reg`, `var_`/`sp`+hex locals,
  Ghidra's `param_1`, `uVar1`, `local_` names, `undefined4` types.

A construct that exists only to match needs a one-line comment and a
precedent (an earlier reviewed match or a catalogue entry); otherwise it is a
FIXME.

## Names

Evidence or a placeholder.

- Evidence is the PS3 debug build at tier `seed`, `high`, `sim-high` or
  `sim-vt-high` (`notes/e3/e3_names.tsv`), a string in the binary, or a
  vtable slot. `notes/function_names.tsv` holds a model's descriptions: use
  them to understand, never as names.
- Unknown: `func_XXXXXXXX`, `D_XXXXXXXX`.
- Provisional descriptive names keep the address: `MenuCursor_0012ab40`.
  They stay freely renameable.
- `functions.tsv`: one symbol per address, changed only with
  `tools/rename_fn.py`. Never rename a real name.
- Class members and layouts start from `data/e3` but every offset is checked
  against the PS2 code: the HD build shifted many classes. Structs carry
  `/* 0xNN */` offsets and a size comment.

## What you may change

The source files of your task and headers only they use; `functions.tsv`
through `tools/rename_fn.py`; a `linked_units.tsv` row only to *remove* a
flag your rewrite makes unnecessary. Anything shared (a class header others
include, another file, tools) is a **SHARED-EDIT**: do not make it; list
offset, width, type, the function that shows it and the name evidence in
your report.

## Finish and report

`make` prints `MATCHED!`; `quality.py` shows no kind worse than your
baseline; `gate.py --worker` prints `gate: ok`; `git status` is clean;
commit. Report in 300 words or fewer: totals before and after, what you
cleaned, named or typed, what resisted and why, SHARED-EDITS, new names with
evidence, and any tool fault you hit.

## Reviewers

You do not edit or commit; you judge. See `docs/REVIEW_BRIEF.md`.
