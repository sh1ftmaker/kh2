// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00195430(u32) asm("func_00195430");

// 0x00195558 func_00195558
u32 func_00195558(u32 a0) asm("func_00195558");
u32 func_00195558(u32 a0) {
    u32 s0;
    u32 s2;
    u32 v0_0;
    s0 = a0;
    s2 = (a0 + 0x820);
    do {
        v0_0 = func_00195430(s0);
        s0 = (s0 + 0x208);
    } while (((s32)(((s32)(s0) < (s32)(s2))) != 0));
    *(u32*)((a0 + 0x824)) = 0;
    return v0_0;
}
