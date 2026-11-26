// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00154288 func_00154288
u32 func_00154288(u32 a0, u32 a1) asm("func_00154288");
u32 func_00154288(u32 a0, u32 a1) {
    if ((a1 != 1)) {
        if (((s32)(a1) < (s32)(2))) {
            return 3;
        } else {
            if ((a1 != 2)) {
                return 3;
            } else {
                return 2;
            }
        }
    } else {
        return 0;
    }
}
