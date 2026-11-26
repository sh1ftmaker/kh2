// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035db00 asm("D_0035db00");

// 0x00228420 wtarget_00228420(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00228420(u32 a0, u32 a1) asm("_Z16wtarget_00228420jjjj");
void lift_00228420(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0035db00) = 0;
            *(u32*)(((u32)&D_0035db00 + 4)) = 0;
            *(u32*)(((u32)&D_0035db00 + 8)) = 0;
        }
    }
    return;
}
