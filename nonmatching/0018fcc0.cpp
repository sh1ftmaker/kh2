// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a6490(u32, f32) asm("func_001a6490");

// 0x0018fcc0 func_0018fcc0
u32 func_0018fcc0(u32 a0) asm("_ZN2YS19trap_magic_set_costEP8BD_VALUE");
u32 func_0018fcc0(u32 a0) {
    return func_001a6490(*(u32*)(a0), *(f32*)((a0 + 4)));
}
