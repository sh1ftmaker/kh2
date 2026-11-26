// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ec94 asm("D_0035ec94");

// 0x002413f0 func_002413f0
u32 func_002413f0() asm("_ZN2Tz5MCard10GetLoadPosEv");
u32 func_002413f0() {
    u32 t6;
    u32 t5;
    u32 t4;
    u32 t6_0;
    u32 t7;
    u8 t7_1;
    u32 t7_2;
    t6 = *(u32*)(&D_0035ec94);
    t5 = *(s8*)((t6 + 1));
    t4 = ((s32)(t5) < (s32)(0x63));
    if (((s32)(((s32)(t5) < (s32)(0x63))) != 0)) {
        t6_0 = ((t5 << 5) + t6);
        do {
            t7 = *(u8*)((t6_0 + 8));
            t7_1 = ((t7 ^ 1) & 1);
            if ((t7_1 == 0)) {
                t7_2 = *(u32*)((t6_0 + 8));
                if (((s32)((t7_2 & 2)) == 0)) {
                    return (t4 ? t5 : 0xffffffff);
                }
            }
            t5 = (t5 + 1);
            t4 = ((s32)(t5) < (s32)(0x63));
            t6_0 = (t6_0 + 0x20);
        } while (((s32)(t4) != 0));
    }
    return (t4 ? t5 : 0xffffffff);
}
