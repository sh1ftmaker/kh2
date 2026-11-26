# Project plan

Rewritten 2026-11-25, when the project adopted the `zcroker/kh2` fork's source
as its base. The website's path is `docs/roadmap.yml`; keep the two in step.
The plan this replaces is `docs/PLAN-2026-11-pre-adoption.md`; the August
engine-by-size roadmap is `docs/rig/ROADMAP.md`.

## What changed

On 2026-11-25 a check of other efforts found that the `zcroker/kh2` fork
builds the whole main executable from source, byte-identical. That was
verified here in a no-network sandbox (identical output; a one-line change to
a source breaks the build). This repository was at 18 % by its own matching.
Continuing to match from scratch would have duplicated finished work, so the
fork's source became the base and this project's effort moved to what that
source lacks.

GovanifY, the original author, has said (2026-11-01) that he and a friend
have about 90 % of the bytes matched privately with ported symbols and hope
to release in a month or two. That release may overtake parts of this plan;
re-check before each large wave.

## Where things stand

All 11,509 functions build and match. Of the code bytes:

| kind | share | meaning |
|---|---|---|
| `cpp` | 62.8 % | plain C/C++ |
| `vu0-asm` | 5.0 % | C++ with vector-unit assembly C cannot express |
| `inline-asm` | 15.9 % | has inline CPU assembly: not decompiled as written |
| `asm-unit` | 10.3 % | in a file where assembly is not yet attributed per function |
| `asm-file` | 3.9 % | plain assembly file |
| `reg-pin` | 2.0 % | pins a variable to a register |

3,536 functions (33 % of bytes) have a real name. Almost none of the source
is reviewed: it is register-style machine output with raw offsets.

## Principles

1. **The build never stops matching.** Rewrites that do not match yet wait in
   `nonmatching/`.
2. **Decompiled, named, reviewed** are separate figures; none is inflated by
   the others.
3. **No new tricks; fewer old ones.**
4. **Names come from evidence**, with a tier.
5. **Research before agents; search before models.** The August finding
   stands: register choice and scheduling are the compiler's, and the fork's
   per-file flags are a lead on why.
6. **Whole files, one owner each**, the class header first.

## Phases

### A0: adoption (done 2026-11-25)

Fork source as base; native sandbox build; `tools/quality.py`; site, README
and rules rewritten; 1,458 top-tier names applied (also offered to the fork
as zcroker/kh2#1).

### A1: names

- Overloads, constructors and destructors (about 130 top-tier names): choose
  a scheme `rename_fn.py` accepts, or teach it mangled names.
- Lower tiers (about 3,500): apply as provisional names that keep the
  address, or promote each with a second piece of evidence (string, vtable
  slot, call site constant). This repository's earlier registry had about
  2,500 of these applied; `git show pre-adopt-2026-11-25:functions.tsv`.
- The 86 conflicts between the registry and the debug build.
- Globals (about 1,000 mapped).

### A2: classify, then clean

- Attribute assembly to single functions in the `asm-unit` files (compile
  with `-S` and read the `#APP` regions per function).
- Sort inline assembly by what it does: 128-bit copies (the compiler
  generates these from an aligned 128-bit type), steering (`nop`, `addiu`
  with a register operand, `break`), real hand-written routines.
- Rewrite, cheapest class first. Each removal must leave the build matched.
- Per-file flags: keep the ones that look like a library's real settings
  (`-G0`, `-fno-strict-aliasing`, `-g`), and treat pass-disabling flags as a
  clean-up item for the unit that carries them.
- Test those flags on the old near-misses in `pre-adopt` history: they may
  explain the register residue this project measured in August.

### A3: files and classes

- Move functions out of `src/anon` into the 588 original files
  (`data/tu_map.tsv`), by script, verified per batch.
- PS2-checked class headers from `data/e3` types, one owner per class.

### A4: readable source

Whole-file passes: members for offsets, parameters and locals for registers,
with the gate and an adversarial review on every branch. The grinder of the
Four Swords project is the model for running this at volume; the lanes become
`name`, `type`, `clean`.

### A5: the whole game

Data owned by its files beyond the linked units; the five overlays (the fork
has partial source under `src/ovl_*`); a behaviour harness in PCSX2.

## Decisions

- 2026-08-18: independent line of development; no upstream pull requests.
- 2026-11-25: own repository `sh1ftmaker/kh2`; Four Swords method as model.
- 2026-11-25: adopt the `zcroker/kh2` source as base; contribute names back
  (owner: "I'm not decompiling for clout").
- 2026-11-25: the headline figure is "decompiled to C/C++", not "matched".
