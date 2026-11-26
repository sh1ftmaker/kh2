// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350448 asm("D_00350448");
extern "C" u32 D_00350464 asm("D_00350464");

// 0x0019ee28 wtarget_0019ee28(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0019ee28(u32 a0, u32 a1) asm("_Z16wtarget_0019ee28jjjj");
void lift_0019ee28(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_00350448) = 0;
            *(f32*)(&D_00350464) = 0.0f;
            *(f32*)(((u32)&D_00350448 + 0x20)) = 0.0f;
        }
    }
    return;
}
