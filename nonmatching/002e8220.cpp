// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002eb990(u32, u32, f32) asm("func_002eb990");

// 0x002e8220 func_002e8220
u32 func_002e8220(u32 a0) asm("_ZN2Ts21trap_skateboard_trickEP8BD_VALUE");
u32 func_002e8220(u32 a0) {
    return func_002eb990(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(f32*)((a0 + 8)));
}
