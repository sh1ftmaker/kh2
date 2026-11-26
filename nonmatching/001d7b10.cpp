// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d7980(u32) asm("func_001d7980");

// 0x001d7b10 func_001d7b10
u32 func_001d7b10(u32 a0) asm("_ZN2YS4STOP5startEif");
u32 func_001d7b10(u32 a0) {
    u32 s1;
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 v0_1;
    u32 t7_2;
    *(u16*)(a0) = 0;
    s1 = 3;
    t7 = *(u32*)((a0 + 4));
    do {
        t7_0 = *(u32*)(((a0 + ((s1 - 3) * -8)) + 4));
        if (((s32)(t7_0) != 0)) {
            v0_1 = func_001d7980(t7_0);
            t7_2 = *(u16*)(a0);
            *(u16*)(a0) = (t7_2 | *(u16*)((v0_1 + 2)));
            v0 = v0_1;
        }
        s1 = (s1 + -1);
        t7 = (t7_2 | *(u16*)((v0_1 + 2)));
    } while (((s32)(s1) >= 0));
    return v0;
}
