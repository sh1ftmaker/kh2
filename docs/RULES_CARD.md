# Rules card (workers and reviewers)

All a worker needs. Workers do not read PLAN.md or COORDINATOR.md. CLAUDE.md
is already loaded. Changes in your worktree you did not make may be the
owner's: leave them and mention them in your report.

## Top three

1. Score with `compile_diff.py`, land with `promote.py`, and nothing else
   decides what matched.
2. No tricks, no guessed names (below).
3. Four flat attempts or a register-only diff: park it and move on.

## Setup

- Work only in the worktree and branch made for you. Commit as you go with
  the repository's identity, each message ending with
  `Co-Authored-By: <your model> <noreply@…>`. Never commit to `matching`,
  push, rebase, merge, or run a bare `git stash`.
- `source` the toolchain `env.sh` in every shell. Without it every compile
  fails and looks like a 0 % result.
- Never commit game data: `SLPM_666.75`, `kh2.elf`, `out/`, `build/`, the
  compiler archive, disc images or dumps.
- One build per worktree at a time; anything long-lived goes under `sbg`.

## Commands

```sh
python3 tools/build_elf.py objects && make           # once at the start: MATCHED!
python3 tools/progress_bytes.py | head -2            # baseline: write it in your report
python3 tools/rig/get_context.py <addr>              # everything known about one function
python3 tools/rig/compile_diff.py <addr> --src f.cpp # every attempt: compile, mini-link, diff
python3 tools/rig/permuter.py <addr> --src f.cpp     # a near-miss of 85 % or more
python3 tools/rig/promote.py <addr> --src f.cpp --dest src/<area>/<tu>.cpp
python3 tools/rig/park.py <addr> …                   # give-up record
```

Always pass absolute `--src` paths. `compile_diff` rejects, unscored, any
candidate with an asm statement, `naked`, a register pin or `.incbin`.

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

- Evidence is the E3 map at grade `seed` or `high` (`get_context` prints
  `symbol_origin`), a string in the binary, or a vtable slot.
- Unknown: `func_XXXXXXXX`, `D_XXXXXXXX`.
- Provisional descriptive names keep the address: `MenuCursor_0012ab40`.
  They stay freely renameable.
- `functions.tsv`: one symbol per address. Replace a placeholder; never
  append; never rename a real name. Rename the defining source in the same
  commit.
- Class members and layouts start from `data/e3` but every offset is checked
  against the PS2 code: the HD build shifted many classes. Structs carry
  `/* 0xNN */` offsets and a size comment.

## What you may change

Your functions' source file and headers only it uses; `functions.tsv`
placeholder replacements for your addresses. Anything shared (a class header
others include, another file, tools) is a **SHARED-EDIT**: do not make it;
list offset, width, type, the function that shows it and the name evidence
in your report.

## Finish and report

`make` prints `MATCHED!` after `build_elf.py objects`; the total is not
below your baseline; `git status` is clean; commit. Report in 300 words or
fewer: functions before and after, each parked function with its diff class,
SHARED-EDITS, new names with evidence, notes for the next agent, and any
tool fault you hit.

## Reviewers

You do not edit or commit; you judge. See `docs/REVIEW_BRIEF.md`.
