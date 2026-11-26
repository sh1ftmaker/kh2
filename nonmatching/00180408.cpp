// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");

// 0x00180408 func_00180408
u32 func_00180408(u32 a0, u32 a1) asm("func_00180408");
u32 func_00180408(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    if (((s32)(a1) != 0)) {
        v0 = func_00168b38(a1, 9, 0);
        v0 = (v0 != 0) ? *(u32*)((v0 + 8)) : 0;
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
