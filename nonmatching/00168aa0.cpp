// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00168aa0 func_00168aa0
u32 func_00168aa0(u32 a0, u32 a1) asm("func_00168aa0");
u32 func_00168aa0(u32 a0, u32 a1) {
    u32 t7;
    u32 a0_0;
    u32 v0;
    u32 t7_1;
    u32 v0_2;
    t7 = *(u32*)((a0 + 4));
    if (((s32)(t7) > 0)) {
        a0_0 = (a0 + 0x10);
        v0 = 0;
        do {
            t7_1 = *(u16*)(a0_0);
            a0_0 = (a0_0 + 0x10);
            t7 = (t7 + -1);
            v0 = ((t7_1 ^ a1) ? v0 : (v0 + 1));
        } while (((s32)(t7) != 0));
        v0_2 = v0;
    } else {
        v0_2 = 0;
    }
    return v0_2;
}
