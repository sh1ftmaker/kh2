// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e3538 wtarget_001e3538(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001e3538(u32 a0, u32 a1) asm("_Z16wtarget_001e3538jjjj");
void lift_001e3538(u32 a0, u32 a1) {
    u32 t7;
    switch (a1) {
    case 0:
        t7 = 2;
        break;
    case 1:
        t7 = 4;
        break;
    case 2:
        t7 = 6;
        break;
    case 3:
        t7 = 8;
        break;
    case 4:
        t7 = 0xa;
        break;
    default:
        t7 = 0xc;
        break;
    }
    *(u8*)((a0 + 0xa8)) = t7;
    return;
}
