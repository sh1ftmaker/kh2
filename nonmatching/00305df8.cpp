// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0030f468(u32, u32) asm("func_0030f468");

// 0x00305df8 func_00305df8
u32 func_00305df8(u32 a0, u32 a1) asm("func_00305df8");
u32 func_00305df8(u32 a0, u32 a1) {
    if ((a0 == 1)) {
        func_0030f468(a1, a1);
    }
    return 0;
}
