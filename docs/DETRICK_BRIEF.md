# Brief: take a compiler trick out of a function

The whole game already builds byte-identical. Some functions only match
because of a trick. Your job is to make each listed function match **without**
its trick, as code a programmer could have written. If you cannot, leave the
function exactly as it was and say what you learned.

## Rules (these decide whether your work is kept)

1. The object must not change: `python3 tools/try_unit.py <file>` prints
   `same`. Anything else means the edit is not done.
2. Never trade one trick for another. Not allowed as a replacement: assembly
   statements, `register ... asm("$n")`, `volatile`, empty `asm("")`,
   `__builtin_expect`, compiler switches, dead stores or temporaries or casts
   that exist only to steer the compiler, duplicated or reordered code nobody
   would write, `goto` where a loop or `if` says the same.
3. Edit only the files on your list, and in them only the listed functions
   and the local declarations they use. No headers, no tools, no other files.
   Other agents are working in this checkout on other files at this moment:
   never run `make`, `git stash`, `git commit`, `git checkout` of anything but
   your own file, or any command that touches files outside your list.

## The tricks

| note | what it is | what usually replaces it |
|---|---|---|
| `reg-pin` | `register T x asm("$16")` | the variable's real lifetime: declare it where it is first needed, merge or split variables, change which expression is computed first, make a temporary a real named value or remove one |
| `barrier` | `asm("")`, `asm("" : "+r"(p))`, `asm volatile("" ::: "memory")` | the compiler was folding, hoisting or reordering something; find the source shape where it does that by itself (a pointer kept in a local, an early return, a different loop form, a struct member instead of a cast) |
| `volatile` | `*(volatile T*)(p + n)` or a `volatile` declaration | it forced a reload or kept two stores apart; real types often do it (a struct with the right member types, `char`-typed access, a second pointer variable) or the statement order was different |
| `cpu-asm` | an assembly statement with ordinary instructions | the C that compiles to those instructions |
| `flags` | the file is built with an optimiser switch (see its row in `linked_units.tsv`) | a source shape that matches with the plain switches; test with `tools/try_unit.py <file> --flags "-G0"` (the switches you want after the standard ones), and report the switches that work; do not edit `linked_units.tsv` |

## How to work

```sh
source /data/agent-tom/kh2/env.sh
python3 tools/try_unit.py <file>                 # same / which functions differ
python3 tools/try_unit.py <file> --show <symbol> # assembly diff, target against yours
python3 tools/rig/get_context.py <addr>             # the original function's disassembly
```

- Take the trick out, run the check, read the diff. The diff tells you what
  the compiler did differently (register choice, instruction order, an extra
  move, a reload); change the source shape that causes that, not the symptom.
- `docs/codegen-3.2.md` lists what this compiler (ee-gcc 3.2, -O2) does with
  common source shapes. Search it for the instruction pattern you see.
- A function has a time box of about ten attempts. If it still differs, put
  it back exactly (`try_unit.py` prints `same` again) and move on.
- Functions in a file are independent, but a file counts only when
  `try_unit.py` says `same` for the whole file.

## What worked in the first round (15 of 52)

- **Stores through `volatile` casts**: a struct with real member types, the
  stores written in another order. The scheduler sorts stores to one base by
  itself, and the assembler fills a jump's delay slot by itself, so the source
  order that matches is often the plain ascending one, or the reverse.
  `tools/detrick.py --kinds order` already tried every order of adjacent
  volatile stores; what is left needs the struct, a different base pointer, or
  a value held in a local (`f32 z = 0.0f;` stored four times).
- **Pins**: keep the argument alive to the call that really takes it (a method
  called with its `this`), give a second group of calls its own base variable,
  declare the pointer before the value computed from it.
- **Barriers**: early returns instead of one folded condition; a real loop in
  place of labels.
- **Did not yield, do not spend attempts**: optimiser switches (`flags`),
  hand-written vector routines, reads of `$gp`, hardware registers at
  `0x1000xxxx` (those are really volatile), an address written as a constant
  where a symbol would add a relocation.

## Report (plain prose, no praise)

For every listed function: `removed` or `kept`, and one line on what worked or
what still differed. End with the output of `try_unit.py` for each file.
