// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c940b4 asm("D_01c940b4");

// 0x001aff90 func_001aff90
u32 func_001aff90(u32 a0, u32 a1) asm("func_001aff90");
u32 func_001aff90(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 t5;
    u32 t6_0;
    u32 t7_1;
    u32 t7_2;
    t6 = *(u32*)(&D_01c940b4);
    t7 = *(u32*)((t6 + 4));
    if (((s32)(t7) > 0)) {
        t5 = 0;
        t6_0 = (t6 + 8);
        do {
            t7_1 = *(u8*)(t6_0);
            if ((t7_1 == a0)) {
                t7_2 = *(u8*)((t6_0 + 1));
                if ((t7_2 == a1)) {
                    return t6_0;
                }
            }
            t5 = (t5 + 1);
            t6_0 = (t6_0 + 0xe);
        } while (((s32)(((s32)(t5) < (s32)(t7))) != 0));
    }
    return 0;
}
