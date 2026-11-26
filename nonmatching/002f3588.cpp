// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002f3588 func_002f3588
u32 func_002f3588(u32 a0) asm("func_002f3588");
u32 func_002f3588(u32 a0) {
    if (((a0 >> 0x1c) == 7)) {
        a0 = ((a0 & 0xfffffff) | 0x80000000);
    }
    return a0;
}
