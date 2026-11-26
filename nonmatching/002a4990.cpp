// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5e4 asm("D_0035f5e4");

// 0x002a4990 func_002a4990
u32 func_002a4990(u32 a0) asm("_ZN2Tz10JmTreasure11Cur2WorldIdEi");
u32 func_002a4990(u32 a0) {
    u32 t6;
    u32 t7;
    u32 t5;
    u32 t6_0;
    u32 t7_1;
    u32 v0;
    u32 t7_2;
    if (((s32)(a0) < 0)) {
        t6 = *(u32*)(&D_0035f5e4);
        t7 = *(u32*)((t6 + 0x1088));
        a0 = (*(u32*)((t6 + 0x1084)) + ((s32)((((s32)(t7) < (s32)(0)) ? (t7 + 7) : t7)) >> 3));
    }
    t5 = 0;
    t6_0 = (*(u32*)(&D_0035f5e4) + 0x1001);
    t7_1 = *(u8*)((*(u32*)(&D_0035f5e4) + 0x1001));
    v0 = 0;
    do {
        t6_0 = (t6_0 + 8);
        t7_2 = *(u8*)(t6_0);
        if (((s32)(t7_2) != 0)) {
            t5 = (t5 + t7_2);
            t7_1 = ((s32)(a0) < (s32)(t5));
            if (((s32)(t7_1) != 0)) {
                break;
            }
        }
        v0 = (v0 + 1);
        t7_1 = ((s32)(v0) < (s32)(0xf));
    } while ((t7_1 != 0));
    return v0;
}
