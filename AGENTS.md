# AGENTS.md

Instructions for AI coding agents contributing to this repository, whichever
tool or model runs them. People should read [CONTRIBUTING.md](CONTRIBUTING.md);
the rules are the same.

## The project in brief

A byte-matching decompilation of *Kingdom Hearts II Final Mix* (PlayStation 2,
`SLPM_666.75`). The task is C++ source that `ee-gcc 3.2-040921` builds into the
exact bytes of the game's main ELF, written the way the original programmers
could have written it. A match obtained through constructs nobody would write
does not count.

## Setup

The game is not in the repository. The person running you must provide
`SLPM_666.75` at the repository root and a toolchain set up with
`tools/setup_toolchain.sh`. If either is missing, stop and say so. Never
download, reconstruct or commit game data or the compiler.

```sh
source <toolchain>/env.sh
python3 tools/build_elf.py objects && make     # must end in MATCHED!
```

If a clean `matching` checkout does not print `MATCHED!`, report that before
changing anything. One build per checkout at a time.

## Choosing a task

`python3 tools/rig/list_candidates.py` lists unwritten functions;
`python3 tools/rig/scheduler.py` ranks them. Take functions of one class or
one source file together: they share a header, and the header is most of the
work. Lock what you take (`python3 tools/rig/lock.py`). Work on a branch off
`matching`, never on `matching` itself.

## The loop

1. `python3 tools/rig/get_context.py <addr>`: disassembly, a draft, callee
   prototypes, E3 class layouts, the nearest matched twin, and a compilable
   skeleton. Copy the skeleton's callee declarations verbatim; do not retype
   mangled names.
2. Read `docs/codegen-3.2.md` for the shape the diff points at.
3. Write natural C++ with real types. Score every attempt with
   `python3 tools/rig/compile_diff.py <addr> --src <file>` (about 80 ms).
   Change one thing at a time.
4. When it is exact, `python3 tools/rig/promote.py <addr> --src <file> --dest
   src/<area>/<file>.cpp`. It verifies the whole ELF and rolls back on
   failure.
5. Stop rule: four attempts without improvement, or the diff is registers
   only. Record it with `python3 tools/rig/park.py` and move on.

## Hard rules

- No inline asm statements, `naked`, register pins, `.incbin` or byte arrays.
- No statements, temporaries or casts that exist only to steer code
  generation. Leave the function unmatched with a `// FIXME:` instead.
- No field access through casts and offsets in new hand-written code; declare
  the member.
- No guessed names. Use `seed`/`high` names from `data/e3`, or a placeholder
  that keeps the address.
- No edits to `tools/`, `Makefile`, `layout.tsv`, `objdiff.json`, `site/data`,
  or the README and CLAUDE.md blocks between `<!-- …:start -->` and
  `<!-- …:end -->`.
- One symbol per address in `functions.tsv`.

## Submitting

Commit to your branch only; never push, merge or rebase unless asked. End
each commit message with a `Co-Authored-By:` line naming your model. Report
in plain factual prose: functions matched before and after, the evidence for
each new name, each function that still differs and how, and any shared
header change you need. A separate reviewer judges the branch without seeing
your reasoning ([docs/REVIEW_BRIEF.md](docs/REVIEW_BRIEF.md)); only ACCEPT
merges.

## More detail

[CLAUDE.md](CLAUDE.md) (build, measurement, rules),
[docs/RULES_CARD.md](docs/RULES_CARD.md) (the worker's card),
[docs/codegen-3.2.md](docs/codegen-3.2.md) (the compiler),
[docs/PLAN.md](docs/PLAN.md) (the plan).
