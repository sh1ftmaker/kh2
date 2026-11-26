// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00177860(u32) asm("func_00177860");

// 0x00177bf8 func_00177bf8
u32 func_00177bf8(u32 a0) asm("func_00177bf8");
u32 func_00177bf8(u32 a0) {
    u32 s0;
    u32 s0_0;
    u32 v0;
    s0 = *(u8*)((a0 + 0xb04));
    if (((s32)(((s32)(s0) < (s32)(*(s8*)((func_00177860(a0) + 0x2d))))) != 0)) {
        v0 = *(u8*)((a0 + 0xb04));
    } else {
        s0_0 = ((s32)(s0) < (s32)(*(s8*)((func_00177860(a0) + 0x2d))));
        v0 = *(s8*)((func_00177860(a0) + 0x2d));
    }
    return v0;
}
