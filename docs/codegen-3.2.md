# ee-gcc 3.2 codegen idioms (R5900, -O2)

Observed while matching functions with `tools/rig`. Every entry here was
confirmed by a byte-exact `compile_diff` or by a diff that changed exactly as
predicted. Add to it whenever an attempt teaches you something — the point is to
turn "try things until it matches" into "recognise the idiom".

Compiler and flags: `ee-g++ 3.2` (SCE EE 040921),
`-O2 -g0 -x c++ -fno-exceptions -fno-rtti -fpermissive -ffunction-sections -I src`.

## Register-to-register moves

`daddu rd, rs, zero` — that is how 3.2 spells `move` on the R5900. Seeing
`daddu t7, a1, zero` in the original where you produced nothing means the
original kept the value in a *separate* variable rather than reusing the
parameter register.

## Ternary vs if-assignment: not the same code

This is the single highest-yield idiom found so far.

```cpp
// (a) if-assignment
s32 v = max;  if (max < 0) v = m_MenuItemMax;  m_SelectMax = v;
// -> bltzl a1, L ; lhu a1, 4(a0) ; jr ra ; sh a1, 0x16(a0)
//    gcc reuses the argument register and picks a branch-likely.

// (b) ternary
m_SelectMax = (s16)((max < 0) ? (s32)m_MenuItemMax : max);
// -> bgez a1, L ; daddu t7, a1, zero ; lhu t7, 4(a0) ; jr ra ; sh t7, 0x16(a0)
//    gcc materialises a temporary and inverts the branch. THIS is the shipped code.
```

`Tz::Select::SetSelectMax` matched with (b) and not with (a), (a)-with-`u32`,
(a)-with-`s32`, or a mask-based variant. **When the original copies a parameter
into a `t`-register before a branch, try the ternary.**

## Load width tells you the member type

| Instruction | Member type |
|---|---|
| `lbu` | `u8` |
| `lb` | `s8` |
| `lhu` | `u16` |
| `lh` | `s16` |
| `lw` | `u32` / `s32` / pointer |
| `ld` | 64-bit, or a struct copy |

Getting this wrong shows up immediately: a `s16` member where the original has
`lhu` produces `sll`+`sra` sign-extension noise around your load.

## Sign vs zero extension

- signed narrowing/widening: `sll rX, rY, 16` + `sra rX, rX, 16` (16-bit),
  `sll`/`sra` by 24 for 8-bit
- unsigned: `andi rX, rY, 0xffff` / `andi rX, rY, 0xff`
- `sltu rX, zero, rY` is `(rY != 0)` — a bool conversion of a non-0/1 value
- a bare `andi rX, rX, 0xff` after an `andi rX, rX, 1` is a *QImode truncation of
  an already-narrow value*: the source had a `bool`/`u8` intermediate that gcc
  could not fold away. Plain `(u8)(word & 1)` **does** get folded (gcc narrows the
  load to `lbu` instead), so if you see `lw` + `andi 1` + `andi 0xff` the value
  reached the truncation through something gcc could not see through.

## Callee-saved registers mean "live across a call"

If the original uses `s0`–`s7` (and pays for `sd`/`ld` in the prologue and
epilogue) the value is live across a `jal`. If it uses `t0`–`t9`/`v1`, it is not.
When your version uses `t`-registers and the original uses `s`, you have folded a
variable that the original kept alive — usually because gcc proved your version's
value was rematerialisable (e.g. it could recompute a constant `0`), while the
original's could not be.

## Branch-likely forms

`bnezl` / `beql` / `bltzl` appear routinely at -O2; the delay-slot instruction is
executed **only when the branch is taken**. gcc picks the likely form based on
the shape of the `if`, so a `bnez` where the original has `bnezl` is a control-flow
shape difference, not a register problem.

**Decode `%hi` correctly.** The `lo` part is a *signed* 16-bit displacement, so
`lui 0x3c` + `-0x74e0` is `0x3c0000 - 0x74e0 = 0x3b8b20`, not `0x3c8b20`; gcc
emits `lui 0x3d` for an address whose low half is ≥ 0x8000. A wrong `hi` shows up
as `lui rX, 0x3d` vs `lui rX, 0x3c` in the diff — recompute the address.
(`func_00136968`, 0x00136968.)

## Global structs: `lui` + `addiu` + offset access

```
lui   t3, 0x3c
addiu t4, t3, -0x74e0     ; t4 = &D_003b8b20  (the struct's address, materialised)
sh    t5, 0x2(t4)         ; member at +2
...
sh    t5, -0x74e0(t3)     ; member at +0, addressed directly
```

When the original takes a global's address with `addiu` and then accesses it
with a non-zero offset, the global is a **struct (or array)** and the accesses are
members of it — two separate `u16` globals never produce the `addiu`. Declare
one symbol with a local layout type and access members through it:

```cpp
struct D_003b8b20_t { u16 unk0; u16 unk2; };   // widths from the sh instructions
extern "C" D_003b8b20_t D_003b8b20 asm("D_003b8b20");
D_003b8b20.unk2 = -1;  D_003b8b20.unk0 = -1;
```

Name inferred types by address (`D_XXXXXXXX_t`, members `unkNN`) so nobody
mistakes them for a DWARF-verified layout. (`func_00136968`: 75.6 % → exact.)

## gcc 3.2 reschedules independent global stores

Five stores to distinct globals in source order `A B C D E` came out as
`C B D E A` — the instruction scheduler reorders stores it can prove independent.
If every instruction is present but the *order* of stores/loads to different
globals differs, do not change the code — **permute the statement order**. With
≤ 6 statements that is ≤ 720 `compile_diff` calls at 80 ms each; the exact order
for `func_00136968` was found in under 10 s. (A `permute` helper is worth adding
to the rig.)

## Is there a `this`? Read what happens to `$a0`

The E3 name says `Tz::JmNewInfo::SetCharaFlg(int)`, so the obvious candidate
takes `(void* self, int flg)`. The shipped code is

```
jal   GetSram
daddu s0, a0, zero        ; delay slot: a0 saved -- and then SHIFTED and MASKED
srl   t7, s0, 5 ; andi s0, s0, 0x1f
```

`a0` is treated as a scalar, so it *is* `flg`: the method is **static** (no
`this`), and `GetSram()` is called with no arguments. With a `self` parameter the
candidate moves `a1` instead (`daddu s0, a1, zero`) and is one instruction off at
99.75 % forever. Rule: `a0` dereferenced (`lw rX, off(a0)`) or forwarded to a
member callee → `this`; `a0` used as data → no `this`, the first listed argument
is in `a0`. (`func_002aa048`, exact once the parameter was removed.)

## Tail calls

A plain `j <addr>` at the end of a row, after the epilogue, is a sibling call:

```cpp
void Area::init() { func_0013dd28(); }
// -> addiu sp,-16 ; sd ra,0(sp) ; ld ra,0(sp) ; j 0x13dd28 ; addiu sp,16
```

gcc still builds the frame and saves/restores `ra` around it. `dk::Area::init`
matched with exactly this, first try.

## Globals

`-G0` means no `$gp` small-data addressing at all: every global is a `lui` plus a
displaced load/store or `addiu`. A `lui rX, 0x36` + `lw rY, -0x1348(rX)` pair is
the address `0x360000 - 0x1348 = 0x35ecb8`. Use the registry name for it
(`D_0035ecb8`) rather than a raw pointer cast when the context gives you one.

**A raw constant cast can never match a symbol reference.** `*(u32*)0x32bb1c = v;`
compiles to `lui t7, 0x33; ori t7, t7, 0xbb1c; sw v0, 0(t7)` (three instructions,
the constant is materialised). The shipped code is `lui t7, 0x33; sw v0, -0x44e4(t7)`
(two instructions, a `%hi/%lo` relocation against a symbol). So when the original
has `lui` + a load/store with a *displacement*, declare the global
(`extern "C" u32 D_0032bb1c asm("D_0032bb1c");` or the registry name) and use it;
`compile_diff` PROVIDEs any `D_XXXXXXXX` / `func_XXXXXXXX` token at its address.
Decode the address as `(hi << 16) + sign_extended(lo)`: `lui 0x33` + `-0x44e4` is
`0x32bb1c`, **not** `0x33bb1c`. (Seen on `AREA::CreateAllocator`, 0x00105370.)

## Tail calls

gcc 3.2 turns `return f(a, b);` at the end of a function into `j f` with the
epilogue (`ld ra`, `addiu sp`) hoisted before it and the arguments set up in the
delay slot. If the original ends in `j 0x...` rather than `jal` + `jr ra`, the
source *returns the callee's result* (or the callee is `void` and so is the
function). Writing `f(a, b); return x;` produces `jal` + `jr ra` instead and never
matches. (Same function.)

## Function-local constants

`li rX, 1` is `addiu rX, zero, 1`; `move rX, zero` is `daddu rX, zero, zero`.
gcc 3.2 rematerialises small constants aggressively rather than keeping them in
registers, so a constant showing up twice in the original is normal and does not
mean the source assigned it twice.

## Naming a D_ global from lui/addiu pairs: subtract the signed-%lo carry

`lui t7, 0x36` + `addiu t7, t7, -0x59a0` loads **0x35a660**, so the symbol is
`D_0035a660` — NOT `D_0036...`. When %lo ≥ 0x8000 the assembler bumps %hi by 1
to compensate for sign extension; reading the lui literal as the address's top
half names a symbol 0x10000 too high, and the only diff you'll see is one lui
off by exactly 1 (compile_diff now emits a hint for this). Derive the address
as `(hi << 16) + sign_extend16(lo)`.

## OPEN residue: destructor-family s1/s2 swap (park, don't grind)

Family: `dk::GET_MUNNY`/`GAUGE_FRIEND` D0/D1 (0x0031c7a8, 0x0031c838,
0x0031c6f8) — manual array-dtor loop (top-test `do { if (begin==end) break;
end -= 0x158; virtcall(end); } while (1)`) followed by a tail with ~5 `this`
uses. gcc allocates `this`→s1 / `begin`→s2; the original wants `this`→s2 /
`begin`→s1. Every decl-order / loop-shape / compare-order / self-copy variant
compiles to the same swap (best 98.79 %, files in wip/regalloc-family/).
The light-tail twin `func_0031d9b8` (auto80_199_queue.cpp:14203) matches with
the identical loop, so the trigger is the tail's register pressure. If your
diff is a pure s1↔s2 rename on this shape: park with reason "s1/s2 dtor-family
swap" — do not spend attempts on it.

## OPEN residue: return-value pseudo not coalesced into v0 (park, don't grind)

`YS::MISSION::GetCount` (0x001d87b8): the original zeroes/loads **v0 directly**
on every return path (`daddu v0, zero, zero` in branch delay slots, `lw v0,...`
for the value); every source shape we produce routes the return through a
scratch pseudo (`a0`/`t6`) plus a final `daddu v0, tN`. Tried: early-return vs
accumulator vs branch-assigned local, int/u32 returns, extern "C", operand
swaps, the twin transcription style (func_001d8578 family) — all identical
95.19 %. The adjacent addu operand order (`v0+s0` vs `s0+v0`) flips with it, so
one upstream RTL difference drives both. If your diff is exactly "extra move
into v0 at the end + zeroed scratch in delay slots": park with reason
"v0-coalesce residue".

## VERIFIED: three more idioms from tonight's hand-closes

- **Ctor callee needs `this`**: a constructor call in the target means the
  callee's real first arg is the object; a rig-declared arity (even VERIFIED)
  can be short by one or more leading args — trust the argument registers in
  the original (`a0..t3` setup before `jal`), not the declared arity.
- **Cross-jump hides a store**: `b <addr>` targeting the *delay-slot
  instruction* of another branch executes that store with the current register
  values — an else-path can share the taken-path's `sw`. If a path seems to
  "not write" an out-param the source clearly should write, look for a branch
  into the other path's delay slot (0x0027aed8: `*c = a - cnt` lived there).
- **`u8` truncation**: `andi rX, rX, 0x1` followed by `andi rX, rX, 0xff` is a
  bool/u8-typed flag — write `u8 f = (u8)(expr & 1)` or the twins' union
  (`U32U8 t; t.u = ...; t.u &= 1u; if (t.b == 0)`).
- **`a <= b` (signed)** compiles as `addiu t, b, 1; slt a, t` — write
  `a < b + 1` or `a <= b`, both emit it.
