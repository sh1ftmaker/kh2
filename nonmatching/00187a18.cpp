// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00187ab8(u32, u32, u32, u32, u32) asm("func_00187ab8");
extern "C" u32 func_00187b30(u32) asm("func_00187b30");

// 0x00187a18 func_00187a18
void func_00187a18(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2YS3ACT5TABLE3addEPKciiPi");
void func_00187a18(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    u32 t5;
    v0 = func_00187ab8(a0, a1, a2, a3, a4);
    if (((s32)(v0) == 0)) {
        v0_0 = func_00187b30(a0);
        *(u32*)(v0_0) = a1;
        v0 = v0_0;
    }
    *(u16*)((v0 + 4)) = a2;
    *(u16*)((v0 + 6)) = ((s32)(a2) >> 0x10);
    *(u16*)((v0 + 8)) = a3;
    t5 = 0xa;
    do {
        *(u16*)(((v0 + ((t5 - 0xa) * -2)) + 0xa)) = *(u16*)(a4);
        a4 = (a4 + 4);
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    return;
}
