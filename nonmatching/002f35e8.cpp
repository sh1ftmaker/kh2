// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363c90 asm("D_00363c90");

// 0x002f35e8 ctarget_002f35e8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_002f35e8(u32 a0) asm("_Z16ctarget_002f35e8jjjj");
u32 lift_002f35e8(u32 a0) {
    if (((s32)(((u32)(a0) < (u32)(0xa))) != 0)) {
        return *(u32*)(((a0 << 2) + (u32)&D_00363c90));
    } else {
        return 0;
    }
}
