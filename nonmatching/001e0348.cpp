// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e348 asm("D_01d9e348");

// 0x001e0348 wtarget_001e0348(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001e0348(u32 a0, u32 a1) asm("_Z16wtarget_001e0348jjjj");
void lift_001e0348(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01d9e348) = 0;
            *(u32*)(((u32)&D_01d9e348 + 4)) = 0;
        }
    }
    return;
}
