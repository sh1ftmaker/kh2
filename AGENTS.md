# AGENTS.md

Instructions for AI coding agents contributing to this repository, whichever
tool or model runs them. People should read [CONTRIBUTING.md](CONTRIBUTING.md);
the rules are the same.

## The project in brief

*Kingdom Hearts II Final Mix* (PlayStation 2, `SLPM_666.75`). The whole main
executable already builds from source and is byte-identical to the original.
The task now is to make that source readable C++ without ever breaking the
match: real names, real types and members, the original file structure, and
C++ in place of assembly and compiler tricks.

## Setup

The game is not in the repository. The person running you must provide
`SLPM_666.75` at the repository root and a toolchain set up with
`tools/setup_toolchain.sh`. If either is missing, stop and say so. Never
download, reconstruct or commit game data or the compiler.

```sh
source <toolchain>/env.sh
make                               # must end in MATCHED!
python3 tools/quality.py           # baseline: write the totals in your report
```

If a clean `matching` checkout does not print `MATCHED!`, report that before
changing anything. One build per checkout at a time.

## Kinds of task

- **Clean up a function**: replace an assembly statement, register pin or
  assembly file with C++ that compiles to the same bytes.
  `out/generated/quality.tsv` lists every function's kind.
- **Name**: apply names from `notes/e3/e3_names.tsv` with
  `tools/rename_fn.py`, within the evidence rules.
- **Type**: replace offset access with named members, checking each class
  layout against the PS2 code.
- **Place**: move functions into their original source file
  (`data/tu_map.tsv`).

Work on a branch off `matching`, one file or one class at a time.

## Hard rules

- The build ends in `MATCHED!` after every commit. A rewrite that does not
  match yet goes to `nonmatching/<addr>.cpp`, not into `src/`.
- No new assembly statements, register pins, `naked`, `.incbin`, byte arrays,
  per-file compiler flags, or statements that exist only to steer the
  compiler. Removing one is the job; adding one is a rejection.
- No guessed names. Evidence is the PS3 debug build at tier `seed`, `high`,
  `sim-high` or `sim-vt-high`, a string, or a vtable slot. Lower tiers keep
  the address in the name. A description of what a function does is not a
  name.
- Rename only with `tools/rename_fn.py`.
- No edits to `tools/`, `Makefile`, `layout.tsv`, `site/data`, or the README
  and CLAUDE.md blocks between `<!-- …:start -->` and `<!-- …:end -->`.

## Submitting

`python3 tools/gate.py --worker` must print `gate: ok`. Commit to your branch
only; never push, merge or rebase unless asked. End each commit message with a
`Co-Authored-By:` line naming your model. Report in plain factual prose:
`quality.py` totals before and after, the evidence for each new name, what
still resists and why, and any shared header change you need. A separate
reviewer judges the branch without seeing your reasoning
([docs/REVIEW_BRIEF.md](docs/REVIEW_BRIEF.md)); only ACCEPT merges.

## More detail

[CLAUDE.md](CLAUDE.md) (build, measurement, rules),
[docs/RULES_CARD.md](docs/RULES_CARD.md) (the worker's card),
[docs/codegen-3.2.md](docs/codegen-3.2.md) (the compiler),
[notes/linking.md](notes/linking.md) (linked units),
[docs/PLAN.md](docs/PLAN.md) (the plan).
