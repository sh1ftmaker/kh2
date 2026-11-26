// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035e440 asm("D_0035e440");

// 0x00236d60 YI::IMAGE_CACHE::Clear()
void lift_00236d60() asm("_ZN2YI11IMAGE_CACHE5ClearEv");
void lift_00236d60() {
    u32 t6;
    u32 t5;
    *(u8*)((u32)&D_0035e440) = 0;
    t6 = (u32)&D_0035e440;
    t5 = ((u32)&D_0035e440 + 0x600);
    do {
        *(u8*)(t6) = 0;
        *(u32*)((t6 + 4)) = 0;
        t6 = (t6 + 0x18);
    } while (((s32)(t6) < (s32)(t5)));
    return;
}
