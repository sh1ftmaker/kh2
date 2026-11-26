// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00311450(u32) asm("func_00311450");

// 0x00311460 func_00311460
u32 func_00311460(u32 a0) asm("func_00311460");
u32 func_00311460(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(((u32)((a0 + -0xd)) < (u32)(0x23))) == 0)) {
        v0_0 = 0xffffffff;
    } else {
        v0 = func_00311450(a0);
        v0_0 = v0;
    }
    return v0_0;
}
