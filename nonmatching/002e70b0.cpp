// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00106450(u32) asm("func_00106450");

// 0x002e70b0 func_002e70b0
void func_002e70b0(u32 a0) asm("_ZN2Ti3AfpD1Ev");
void func_002e70b0(u32 a0) {
    u32 a0_0;
    u32 t7;
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        a0_0 = *(u32*)((a0 + 4));
        t7 = (*(u32*)((a0 + 4)) + (*(u32*)((*(u32*)((a0 + 4)) + -4)) << 6));
        do {
            t7 = (t7 + -0x40);
        } while ((a0_0 != t7));
        func_00106450(a0_0 + -0x10);
        return;
    } else {
        return;
    }
}
