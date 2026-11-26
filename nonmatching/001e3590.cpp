// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e3590 func_001e3590
u32 func_001e3590(u32 a0) asm("_Z14pppIsDrawFirstPv");
u32 func_001e3590(u32 a0) {
    switch (*(u8*)((a0 + 0xa8))) {
    case 1:
        return 1;
    case 3:
        return 2;
    case 5:
        return 3;
    case 7:
        return 4;
    case 9:
        return 5;
    case 11:
        return 6;
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    default:
        return 0;
    }
}
