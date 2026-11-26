// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6ced0 asm("D_01c6ced0");

// 0x001ad948 wtarget_001ad948(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001ad948(u32 a0, u32 a1) asm("_Z16wtarget_001ad948jjjj");
void lift_001ad948(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01c6ced0) = 0;
            *(u32*)(((u32)&D_01c6ced0 + 4)) = 0;
        }
    }
    return;
}
