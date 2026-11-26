// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e35f0 func_001e35f0
u32 func_001e35f0(u32 a0) asm("_Z13pppIsDrawLastPv");
u32 func_001e35f0(u32 a0) {
    switch (*(u8*)((a0 + 0xa8))) {
    case 2:
        return 1;
    case 4:
        return 2;
    case 6:
        return 3;
    case 8:
        return 4;
    case 10:
        return 5;
    case 12:
        return 6;
    case 0:
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
    default:
        return 0;
    }
}
