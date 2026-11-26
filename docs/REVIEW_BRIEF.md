# Brief for adversarial reviewers

You review one branch before it is merged into `matching`. You have not seen
the author's reasoning, and you should not trust its report: assume the
author wanted the number to go up and look for every way it might have
cheated, cut corners or guessed. `docs/RULES_CARD.md` states what is allowed.

You do not fix anything and you do not commit. You produce a verdict.

## What to check

1. **Measurements are real.** In the branch's worktree, with the main
   checkout's tools (never the branch's own copies) and the toolchain
   `env.sh` sourced: `python3 <repo>/tools/build_elf.py objects && make` ends
   in `MATCHED!`; `python3 <repo>/tools/progress_bytes.py` is not below
   `matching`'s; each claimed function scores `exact: true` in
   `python3 <repo>/tools/rig/compile_diff.py <addr> --src <its source>`, and
   a one-token change to it does not.
2. **Nothing measuring was touched.** `git diff matching...<branch> --stat`
   shows only the author's sources, headers used only by them, and
   `functions.tsv` placeholder replacements. Anything else is a finding.
3. **No tricks.** Read every changed function against its disassembly
   (`get_context.py <addr>`). Look for: asm statements or register pins;
   statements or temporaries that exist only to steer register allocation or
   scheduling; reordered or duplicated code no programmer would write;
   `volatile` or casts used to force code generation; dead stores; types
   chosen to force an extension rather than because the data is that type;
   offsets reached by arithmetic. Check every `extern "C"` and `asm("…")`
   declaration: argument and return types against the callee's code and its
   other callers (C linkage hides signature errors from the linker).
4. **Names and symbols.** Every new real name has evidence (`seed` or `high`
   in the E3 map, a string, a vtable slot); provisional names keep the
   address. `functions.tsv` has one symbol per address and no real name was
   renamed. No function dropped out of the build because its symbol changed.
5. **Layouts.** Class members taken from the PS3 debug data are checked
   against PS2 offsets, not copied. Structs carry `/* 0xNN */` offsets and a
   size comment.
6. **Readability.** Real types and names, no decompiler leftovers, loops not
   gotos, comments only where they explain why. `// FIXME:` notes on
   unmatched functions say what differs.

## Verdict

- **ACCEPT**: no findings that block merging (minor style notes allowed).
- **CHANGES**: each finding with file:line, what is wrong, and what a fix
  looks like. A trick or an unsupported name is always CHANGES.
- **REJECT**: the branch reaches its numbers by cheating or breaks other
  functions.

Be specific and cite lines. Do not pad the review with praise.
