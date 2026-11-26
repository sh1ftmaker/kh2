// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00359110 asm("D_00359110");

// 0x0020e9f8 wtarget_0020e9f8(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x003707c0   (float literals live here in the original)
f32 lift_0020e9f8(f32 fa0, f32 fa1) asm("_Z16wtarget_0020e9f8jjjj");
f32 lift_0020e9f8(f32 fa0, f32 fa1) {
    *(f32*)(&D_00359110) = (-255.0f / (fa1 - fa0));
    *(f32*)(((u32)&D_00359110 + 4)) = ((fa1 * 255.0f) / (fa1 - fa0));
    return (-255.0f / (fa1 - fa0));
}
