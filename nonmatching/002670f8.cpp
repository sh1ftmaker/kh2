// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f0e4 asm("D_0035f0e4");

// 0x002670f8 func_002670f8
u32 func_002670f8(u32 a0) asm("func_002670f8");
u32 func_002670f8(u32 a0) {
    u32 t7;
    u32 t5;
    u32 t4;
    u8 t7_0;
    t7 = ((s32)(*(u16*)((*(u32*)(&D_0035f0e4) + 0x1c))) >> 0);
    t5 = 0;
    t4 = 0;
    do {
        t7_0 = (((s32)(*(u16*)((*(u32*)(&D_0035f0e4) + 0x1c))) >> t5) & 1);
        if ((t7_0 != 0)) {
            if ((t5 == a0)) {
                return (t4 + 1);
            }
            t4 = (t4 + 1);
        }
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(0xa));
    } while ((t7 != 0));
    return 0xffffffff;
}
