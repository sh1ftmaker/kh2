// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00186110 func_00186110
u32 func_00186110(u32 a0, u32 a1) asm("func_00186110");
u32 func_00186110(u32 a0, u32 a1) {
    switch (*(u8*)((a1 + 0x24))) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
        return 1;
    case 1:
    case 6:
    case 7:
    case 8:
    case 9:
    default:
        return 0;
    }
}
