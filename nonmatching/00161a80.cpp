// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c76c asm("D_0034c76c");

// 0x00161a80 func_00161a80
void func_00161a80(u32 a0) asm("func_00161a80");
void func_00161a80(u32 a0) {
    if (((s32)(a0) >= 0)) {
        if (((s32)(a0) >= (s32)(0x81))) {
            a0 = 0x80;
        }
    } else {
        a0 = 0;
    }
    *(u32*)(&D_0034c76c) = a0;
    return;
}
