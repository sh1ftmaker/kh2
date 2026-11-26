// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f468 asm("D_0035f468");
extern "C" u32 D_0035f470 asm("D_0035f470");
extern "C" u32 D_0035f480 asm("D_0035f480");

// 0x0028f690 func_0028f690
u32 func_0028f690(u32 a0) asm("func_0028f690");
u32 func_0028f690(u32 a0) {
    u32 t5;
    u32 t3;
    u32 t4;
    u32 t5_0;
    u32 t6;
    u32 v0_1;
    t5 = (*(u32*)(&D_0035f480) + (a0 * 0x374));
    t3 = (u32)&D_0035f468;
    t4 = (u32)&D_0035f468;
    t5_0 = *(u32*)((t5 + 0x184));
    t6 = 2;
    do {
        v0_1 = ((t5_0 ^ *(s16*)(t4)) ? 0 : t3);
        t4 = (t4 + 2);
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    if (((s32)(v0_1) == 0)) {
        v0_1 = (u32)&D_0035f470;
    }
    return v0_1;
}
