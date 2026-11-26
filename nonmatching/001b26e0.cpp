// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48c80 asm("D_01d48c80");

// 0x001b26e0 wtarget_001b26e0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001b26e0(u32 a0, u32 a1) asm("_Z16wtarget_001b26e0jjjj");
void lift_001b26e0(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01d48c80) = 0;
            *(u32*)(((u32)&D_01d48c80 + 4)) = 0;
        }
    }
    return;
}
