// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e34e0 wtarget_001e34e0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001e34e0(u32 a0, u32 a1) asm("_Z16wtarget_001e34e0jjjj");
void lift_001e34e0(u32 a0, u32 a1) {
    u32 t7;
    switch (a1) {
    case 0:
        t7 = 1;
        break;
    case 1:
        t7 = 3;
        break;
    case 2:
        t7 = 5;
        break;
    case 3:
        t7 = 7;
        break;
    case 4:
        t7 = 9;
        break;
    default:
        t7 = 0xb;
        break;
    }
    *(u8*)((a0 + 0xa8)) = t7;
    return;
}
