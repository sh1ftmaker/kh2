// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00359110 asm("D_00359110");

// 0x0020ea70 wtarget_0020ea70(unsigned int, unsigned int, unsigned int, unsigned int)
f32 lift_0020ea70(u8 a0, u8 a1) asm("_Z16wtarget_0020ea70jjjj");
f32 lift_0020ea70(u8 a0, u8 a1) {
    *(f32*)(((u32)&D_00359110 + 8)) = (f32)((s32)(a1));
    *(f32*)(((u32)&D_00359110 + 0xc)) = (f32)((s32)(a0));
    return (f32)((s32)(a0));
}
