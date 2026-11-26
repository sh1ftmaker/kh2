// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c768 asm("D_0034c768");

// 0x00161a58 func_00161a58
void func_00161a58(u32 a0) asm("func_00161a58");
void func_00161a58(u32 a0) {
    if (((s32)(a0) >= 0)) {
        if (((s32)(a0) >= (s32)(0x81))) {
            a0 = 0x80;
        }
    } else {
        a0 = 0;
    }
    *(u32*)(&D_0034c768) = a0;
    return;
}
