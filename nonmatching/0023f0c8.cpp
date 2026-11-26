// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32, u32) asm("func_00139d78");

// 0x0023f0c8 func_0023f0c8
u32 func_0023f0c8(u32 a0, u32 a1) asm("func_0023f0c8");
u32 func_0023f0c8(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_00139d78(a0, a1);
    *(u32*)((a0 + 0x90)) = a1;
    return v0;
}
