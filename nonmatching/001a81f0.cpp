// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6cb98 asm("D_01c6cb98");

// 0x001a81f0 func_001a81f0
u32 func_001a81f0(u32 a0, u32 a1, u32 a2) asm("_ZN2YS8TREASURE5TABLE3GetEiii");
u32 func_001a81f0(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t5;
    u32 t6_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t5_5;
    t6 = *(u32*)(&D_01c6cb98);
    t7 = *(u16*)((t6 + 2));
    if (((s32)(t7) != 0)) {
        t5 = 0;
        t6_0 = (t6 + 4);
        do {
            t7_1 = *(u8*)((t6_0 + 4));
            if ((t7_1 == 0)) {
                t7_2 = *(u8*)((t6_0 + 5));
                if ((t7_2 == a0)) {
                    t7_3 = *(u8*)((t6_0 + 6));
                    if ((t7_3 == a1)) {
                        t7_4 = *(u8*)((t6_0 + 7));
                        if ((t7_4 == a2)) {
                            return t6_0;
                        }
                    }
                }
            }
            t5_5 = (t5 + 1);
            t5 = t5_5;
            t6_0 = (t6_0 + 0xc);
        } while (((s32)(((s32)(t5_5) < (s32)(t7))) != 0));
    }
    return 0;
}
