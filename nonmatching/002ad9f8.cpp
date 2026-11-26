// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f620 asm("D_0035f620");
extern "C" u32 D_0035f628 asm("D_0035f628");
extern "C" u32 D_0035f62c asm("D_0035f62c");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_001a82b0(u32) asm("func_001a82b0");
extern "C" u32 func_002a4390(u32) asm("func_002a4390");

// 0x002ad9f8 Tz::JmComplete::CheckTreasure()
u32 lift_002ad9f8() asm("_ZN2Tz10JmComplete13CheckTreasureEv");
u32 lift_002ad9f8() {
    u32 s0;
    u32 s1;
    u32 v0_0;
    u32 t7;
    u32 t7_1;
    s0 = 0;
    s1 = 0;
    for (;;) {
        v0_0 = func_001a82b0(s0);
        if (((s32)(v0_0) == 0)) break;
        if ((*(u8*)((v0_0 + 4)) != 0)) {
            s0 = v0_0;
            continue;
        }
        if ((*(u16*)((v0_0 + 8)) == 0)) {
            s0 = v0_0;
            continue;
        }
        if ((*(u16*)((v0_0 + 8)) == 0x800)) {
            s0 = v0_0;
            continue;
        }
        if (((s32)(func_00181500(*(u16*)((v0_0 + 8)))) != 0)) {
            *(u32*)(&D_0035f628) = (*(u32*)(&D_0035f628) + 1);
            if (((s32)(func_002a4390(v0_0)) != 0)) {
                t7 = (*(u32*)(&D_0035f620) + 0xec);
                t7_1 = (t7 + ((s1 >> 5) << 2));
                *(u32*)(t7_1) = (*(u32*)(t7_1) | (1 << (s1 & 0x1f)));
                *(u32*)(&D_0035f62c) = (*(u32*)(&D_0035f62c) + 1);
            }
        }
        s0 = v0_0;
        s1 = (s1 + 1);
    }
    return v0_0;
}
