# Project plan: how Kingdom Hearts II Final Mix gets decompiled

Adopted 2026-11-25, when the project became its own repository and took over
the working method of the Four Swords Adventures decompilation (FSA). The
website's path is `docs/roadmap.yml`; keep the two in step. The older
engine-by-size roadmap is `docs/rig/ROADMAP.md` and stays as the record of
what the model arena measured.

## Principles

1. **The whole-ELF compare is the authority.** Everything else is a faster
   approximation of it.
2. **Bytes are the headline.** Function counts are shown beside them.
3. **Structure first, byte match second.** Every function written and right
   in shape, then the match.
4. **No tricks, evidence for names, review before merge.** Machine-lifted
   code is matched but unreviewed, and is labelled so everywhere.
5. **Research before agents.** A stalled class of problem gets a written
   model from primary sources before any worker is briefed on it.
6. **Search finds the form; a model names and tidies it.**
7. **Whole files, not single functions**, once the file map is applied: one
   owner per file, the class header first.

## Where things stand

6,247 of 14,618 functions, 18.1 % of code bytes (2026-11-25). Under 80 B is
two-thirds done; 200 B and up holds two-thirds of the code and is 3 % done.
About 5,100 further functions have a compiling, non-matching candidate from
the lifter, outside the repository. The August model arena found that nobody
fails at comprehension: every unsolved residue was register colouring or
delay-slot fill.

## Phases

### K0: house in order (done 2026-11-25)

Standalone repository, one `matching` branch, CLAUDE.md, AGENTS.md, rules
card, review brief, coordinator runbook, website, README status block.

### K1: the non-matching lane

FSA keeps every written function compiled and reported whether or not it
matches. Here an inexact function cannot be in the tree at all, so 5,100
candidates sit outside it and each new attempt starts from nothing.

- A directory of sources that are compiled and scored by the build but never
  linked (`nonmatching/<area>/…`), with one scoreboard file listing address,
  percentage and diff class for each.
- Import the lifter's candidates (`autodecomp/out/coverage`) as the first
  content, each headed `// FIXME(lifter): <pct> %, <class>`. Candidates with
  VU0 inline asm stay out.
- `promote.py` moves a function from the lane into `src/` when it is exact.

### K2: the structural metric

A port of FSA's `tools/structural.py` to MIPS: classify each inexact
function's diff (register-only, scheduling or delay-slot, operands,
missing/extra, different) and give weighted credit to the first two. The
site and README then show weighted beside matched, as FSA's do. Until it
exists, no weighted figure is published.

### K3: the gate

`tools/gate.py`: the whole-ELF compare after a forced object-list rebuild;
no drop in the total; `functions.tsv` has one symbol per address; no banned
construct in changed files; no change to measuring tools; no decompiler
leftovers in hand-written files; every renamed symbol's evidence grade.
Review (docs/REVIEW_BRIEF.md) covers what a script cannot see.

### K4: real source files

The E3 debug build's compile units give 588 original source files for all
14,618 functions (hold-out: 90 % file, 98 % directory). Move functions out
of `src/anon` and `src/autodecomp` into those files, with a re-runnable,
revertible script, verifying the ELF after each batch. Then PS2-corrected
class headers, one owner each, before any wave touches the class.

### K5: the compiler

Before more agent waves on functions of 200 B and up:

- Verify the allocator model. The priority formula comes from vanilla GCC
  3.2.3 `global.c`; construct two sources where it predicts an s0/s1 flip and
  check the Sony build with `-dl -dg` dumps. Write `docs/REGALLOC.md`.
- Delay-slot fill (`reorg.c`) and `sched2` the same way.
- Run the permuter and a flag sweep over every near-miss in the lane.

### K6: the grinder

FSA's grind v2, with this project's scorer: lean worker sessions (short
system prompt, a prepared task text, a few tools), lanes `write`,
`structure` and `match`, a judge that keeps any improvement with nothing
worse, a reviewer session per kept change, a usage watchdog with the owner's
weekly ceiling. Small-function files on the cheapest tier that solves them;
larger files on stronger tiers; functions at 95 % and above go to the match
lane, not to a writer.

### K7: the bulk, then the whole game

Whole-file waves in the order the file map and the callee graph suggest
(most-called first); large functions cut into pieces by source statement;
VU0 and MMI functions; files owning their data; the five overlays; a
behaviour harness in PCSX2 comparing the original with our build.

## Decisions

- 2026-08-18: independent line of development; no upstream pull requests.
- 2026-08-20: the Qwen fleet is for functions under 200 B only.
- 2026-11-25: own repository `sh1ftmaker/kh2`, full history kept; the old
  fork is archived as `sh1ftmaker/kh2-upstream-fork`.
- 2026-11-25: FSA's method is the model for this project.
- 2026-11-25: the compiler archive is no longer distributed with the
  repository; `tools/setup_toolchain.sh` takes it from a local path.
