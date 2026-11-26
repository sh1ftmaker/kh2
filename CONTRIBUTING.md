# Contributing

Contributions from people and from AI agents are held to the same rules.

## Before you start

The goal is C++ source that `ee-gcc 3.2-040921` builds into the exact bytes
of `SLPM_666.75`, and that reads like code the original programmers could
have written. A function that matches only through a construct nobody would
write is not a match here.

Read, in this order: [CLAUDE.md](CLAUDE.md) (build, measurement, rules),
[docs/RULES_CARD.md](docs/RULES_CARD.md), [docs/codegen-3.2.md](docs/codegen-3.2.md)
(what this compiler does), [docs/REVIEW_BRIEF.md](docs/REVIEW_BRIEF.md) (what
the reviewer checks).

## Setup

You need your own legally obtained copy of the game and of the compiler
archive. Nothing from the disc may be committed.

```sh
isoinfo -i "<your iso>" -x '/SLPM_666.75;1' > SLPM_666.75
tools/setup_toolchain.sh <path>/ee-gcc3.2-040921-full.tar.gz ~/ps2
source ~/ps2/env.sh
python3 tools/build_elf.py objects && make        # MATCHED!
```

Requirements: x86_64 Linux with 32-bit glibc, `patchelf`, `python3`, `make`.
A Docker path also exists (`docker/ps2`, place the archive there);
[docs/native-toolchain.md](docs/native-toolchain.md) explains both.

## Working

Pick functions with `tools/rig/list_candidates.py`, get context with
`tools/rig/get_context.py`, score with `tools/rig/compile_diff.py`, land with
`tools/rig/promote.py`. [docs/rig/README.md](docs/rig/README.md) describes the
tools. Open a pull request against `matching` that states the functions
matched before and after, the evidence for each new name, and anything that
still differs.

## What gets a submission rejected

Inline asm or register pins; code shaped only to steer the compiler; field
access by cast and offset; guessed names; edits to measuring tools or
generated files; game data. The full list is in the rules card.

## AI assistance

Welcome, and most of this project is written that way. The bar is the same:
no trick-based matches, evidence for names, and a review by a session that
did not write the code. Commits name the model in a `Co-Authored-By:` line.
