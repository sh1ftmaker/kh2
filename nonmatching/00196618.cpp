// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c61b08 asm("D_01c61b08");

// 0x00196618 func_00196618
u32 func_00196618(u32 a0, u32 a1) asm("func_00196618");
u32 func_00196618(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 t5;
    u32 t7_0;
    u32 t7_1;
    u32 t6_2;
    u32 t7_3;
    u32 t6_4;
    u32 t5_5;
    t6 = *(u32*)(&D_01c61b08);
    t7 = *(u16*)(t6);
    if (((s32)(t7) != 0)) {
        t5 = 0;
        t7_0 = (0 << 1);
        do {
            t7_1 = (t7_0 + t6);
            t6_2 = *(u8*)((t7_1 + 2));
            if ((t6_2 == a0)) {
                t7_3 = *(u8*)((t7_1 + 3));
                if ((t7_3 == a1)) {
                    return t5;
                }
            }
            t6_4 = *(u32*)(&D_01c61b08);
            t5_5 = (t5 + 1);
            t5 = t5_5;
            t6 = t6_4;
            t7_0 = (t5_5 << 1);
        } while (((s32)(t7_0) != 0));
    }
    return 0xffffffff;
}
