// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e7798 func_001e7798
void func_001e7798(u32 a0, u32 a1) asm("func_001e7798");
void func_001e7798(u32 a0, u32 a1) {
    u32 t5;
    u32 t7;
    u32 t6;
    u32 t6_0;
    u32 t7_1;
    u32 t7_2;
    t5 = (a1 + -0x10);
    *(u32*)((t5 + 8)) = 0;
    *(u32*)(a0) = t5;
    t7 = *(u32*)((a1 + -0x10));
    t6 = *(u32*)((a0 + 0xc));
    *(u32*)((a0 + 0xc)) = (t6 - (t7 - t5));
    t6_0 = *(u32*)((t5 + 4));
    if ((t6_0 != 0)) {
        t7_1 = *(u32*)((t6_0 + 8));
        if ((t7_1 == 0)) {
            *(u32*)(t6_0) = *(u32*)((a1 + -0x10));
            *(u32*)((*(u32*)((a1 + -0x10)) + 4)) = t6_0;
            a1 = *(u32*)(t6_0);
            t5 = t6_0;
        } else {
            a1 = *(u32*)(t5);
        }
    } else {
        a1 = *(u32*)(t5);
    }
    t7_2 = *(u32*)((a1 + 8));
    if (((s32)(t7_2) == 0)) {
        *(u32*)(t5) = *(u32*)(a1);
        *(u32*)((*(u32*)(a1) + 4)) = t5;
    }
    return;
}
