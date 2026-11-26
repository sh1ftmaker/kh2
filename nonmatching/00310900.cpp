// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00311af0(u32) asm("func_00311af0");

// 0x00310900 func_00310900
f32 func_00310900(u32 a0) asm("func_00310900");
f32 func_00310900(u32 a0) {
    f32 f1;
    if (((s32)(a0) >= 0)) {
        f1 = func_00311af0(a0);
    } else {
        f1 = (func_00311af0((a0 & 1) | (a0 >> 1)) + func_00311af0((a0 & 1) | (a0 >> 1)));
    }
    return (147456000.0f / f1);
}
