// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d5baa8 asm("D_01d5baa8");

// 0x001d9dd0 func_001d9dd0
u32 func_001d9dd0(u32 a0, u32 a1, u32 a2) asm("_ZN2YS6JIGSAW8GetTableEiii");
u32 func_001d9dd0(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t5;
    u32 t6_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 t5_4;
    t6 = *(u32*)(&D_01d5baa8);
    t7 = *(u32*)((t6 + 4));
    if (((s32)(t7) > 0)) {
        t5 = 0;
        t6_0 = (t6 + 8);
        do {
            t7_1 = *(u8*)((t6_0 + 4));
            if ((t7_1 == a0)) {
                t7_2 = *(u8*)((t6_0 + 5));
                if ((t7_2 == a1)) {
                    t7_3 = *(u8*)((t6_0 + 6));
                    if ((t7_3 == a2)) {
                        return t6_0;
                    }
                }
            }
            t5_4 = (t5 + 1);
            t5 = t5_4;
            t6_0 = (t6_0 + 0xa);
        } while (((s32)(((s32)(t5_4) < (s32)(t7))) != 0));
    }
    return 0;
}
