// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");

// 0x00161548 func_00161548
u32 func_00161548(u32 a0, u32 a1) asm("func_00161548");
u32 func_00161548(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(a1) >= 0)) {
        if (((s32)(*(u32*)((a0 + 0x40))) == 0)) {
            v0_0 = 0;
        } else {
            v0 = ((s32)(func_00168b38(*(u32*)((a0 + 0x40)), 9, a1)) != 0) ? *(u32*)((func_00168b38(*(u32*)((a0 + 0x40)), 9, a1) + 8)) : 0;
            v0_0 = v0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 0;
    }
    return v0_1;
}
