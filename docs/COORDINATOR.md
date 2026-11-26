# Coordinator runbook

For whoever runs the agents and merges into `matching`. Workers read
`docs/RULES_CARD.md` instead. Written before the 2026-11-25 adoption of the
fork's source; the loop and the rakes still hold, the engine table is about
matching from scratch and is history.

## The loop

```
pick work (scheduler.py / a file's function list) and lock it
  -> worktree + branch off matching
  -> worker with a compact brief (below); wait for its report
  -> fresh reviewer with docs/REVIEW_BRIEF.md; never the worker itself
  -> ACCEPT: rebase onto matching, make, gate.py, quality.py not worse
  -> merge, python3 tools/site_data.py --stage, commit, push matching
  -> update docs/roadmap.yml when a milestone starts, moves or finishes
  -> close the finished agents and stop their background processes
```

Merge branches that touch a shared header one at a time, and check for
duplicate declarations after each rebase.

## Briefs

Short. The top three rules first, then the goal, the check command, the doc
line ranges to read, a time box and the report format. Point at documents;
do not paste them. When a new rule comes up, fold it into the brief rather
than appending. Low-effort agents stop early: run them in rounds with
disjoint work lists.

## Which engine for what

Measured on this project (docs/rig/ARENA.md, docs/rig/BENCH.md) and on FSA:

| Work | Engine |
|---|---|
| Twins, straight-line and simple branchy functions | The lifter and twin transfer (`autodecomp`), no model |
| Near-miss of 85 % and above | `tools/rig/permuter.py` |
| Finishing what a mechanical tool located (apply, name, tidy) | A cheap low-effort model |
| Under 200 B, unwritten | Cheapest tier that solves them |
| 200 B to 1 KB | A strong model per file; never solved by small models here |
| Register-only residue | Park. It is a search or compiler-model problem |
| Review | A different session from the author, one tier up for cheap authors |

## Usage and housekeeping

- The owner sets a weekly usage ceiling. Check usage before launching and at
  every agent report; launch nothing new within two points of it.
- Commits carry the model that did the work in `Co-Authored-By:`.
- Push `matching` after each accepted, verified merge. Never force-push.
- A worker's "per the owner" change may be real: the owner talks to agents
  directly. Ask before reverting it.

## Rakes (each cost time once)

**Build and measurement**
- A failed compile leaves the previous `kh2.elf` in place, so `cmp` alone can
  pass on a stale file. Trust `make`'s exit status and last line.
- The fork's `tools/rename_fn.py` does not follow token-pasting macros
  (`fn##__suffix`): one file needed two pasted identifiers renamed by hand.
- An unsourced shell breaks every compile ("Assembler: unknown option -g0").
  A bench run in that state scored a false 0 %.
- Only the toolchain's `shim/` goes on `PATH`; its `bin/` has an ancient
  32-bit `make`, `diff` and `cmp`.
- objdiff's `matched_code_percent` is 100 % by construction. Quote
  `tools/progress_bytes.py`.
- A bench run once leaked real promotes into matched files. After any bench
  or batch run `git status` must be clean.
- `compile_diff` resolves a relative `--src` against the repository, not the
  current directory. Always pass absolute paths.

**Symbols**
- Renaming a registry symbol without renaming the source that defines it
  silently removes the function from the build (two functions were lost this
  way and found later).
- Bare method names collide across classes (`ACT::callback` and
  `VM::callback`); resolve sources by qualified name.
- E3 names that are not in the registry do not link. Use the rig-generated
  callee declarations.
- A header can declare a return type the bytes contradict (`bool` for an
  `s32`); the bytes win.
- Some registry names for trap functions may be off by one slot, and two
  SDK addresses were mislabelled (`0x2feee8` is `strcat`). Check before
  trusting a name near those.

**Layouts**
- PS3 class layouts are not PS2 layouts. Applying corrections blindly
  regresses matches; validate per class.
- Typed member access is not a matching lever by itself: it changed
  alias-driven ordering and lost more near-misses than it gained.

**Compiler**
- Register allocation is per function: surrounding functions in the file do
  not change it. Do not search file context for a register residue.
- Brute force over source shapes on 718 near-misses of 90 % and above
  produced no match. Those residues need the allocator model.
- Float literals that must match need their `.sdata` slot pinned; 88
  functions depended on this.
- About 680 functions use VU0 or MMI instructions and 57 are 4-byte aligned
  and cannot be placed by the linker as separate functions.

**Processes**
- `pkill -f <pattern>` and `kill $(pgrep -f …)` match your own shell. Kill
  by PID.
- Killing one `multiprocessing.Pool` worker hangs the pool; kill the parent.
- Ghidra on the PS3 ELF loops forever unless "Non-Returning Functions -
  Discovered" is disabled.
- Agents must never run a bare `git stash`.

**Models**
- Thinking mode on the local Qwen model spent its whole token budget before
  answering; it ran without thinking.
- A prompt change is accepted only on a held-out bench with three trials;
  single trials varied from 5 to 13 of 28 on the same prompt.
- Long conversations do worse than a fresh context with a distilled
  diagnosis.

## Where the older material lives

`docs/rig/` (rig README, campaign logs, arena, bench), `docs/codegen-3.2.md`
(the idiom catalogue), `docs/layout-regen.md`, `docs/e3/`. Research reports
and the lifter are outside the repository in the owner's workspace.
