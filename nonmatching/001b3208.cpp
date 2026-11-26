// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001b3208 YS::OBJOCC::disable(int)
void lift_001b3208(u32 a0, u32 a1) asm("_ZN2YS6OBJOCC7disableEi");
void lift_001b3208(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 t4;
    u32 t5;
    u32 t3;
    u32 t6_0;
    u32 t7_1;
    u32 t5_2;
    u32 t6_3;
    u32 t7_4;
    t6 = *(u32*)(a0);
    t7 = *(u32*)((t6 + 4));
    if (((s32)(t7) > 0)) {
        t4 = 0;
        t5 = t6;
        t3 = 0;
        do {
            t6_0 = *(u32*)((((t4 << 3) + t6) + 8));
            if ((t6_0 == a1)) {
                t7_1 = *(u32*)((a0 + 4));
                t5_2 = *(u32*)((((t3 + (t4 * 0x90)) + t7_1) + 0x80));
                t6_3 = *(u32*)((t5_2 + 8));
                *(u32*)((t5_2 + 8)) = (t6_3 | 2);
                t5 = *(u32*)(a0);
            }
            t7_4 = *(u32*)((t5 + 4));
            t4 = (t4 + 1);
            t6 = t5;
        } while (((s32)(((s32)(t4) < (s32)(t7_4))) != 0));
    }
    return;
}
