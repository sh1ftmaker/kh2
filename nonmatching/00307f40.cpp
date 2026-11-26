// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00306e80(u32) asm("func_00306e80");

// 0x00307f40 func_00307f40
u32 func_00307f40(u32 a0, u32 a1, u32 a2) asm("func_00307f40");
u32 func_00307f40(u32 a0, u32 a1, u32 a2) {
    if (((s32)(a2) != 0)) {
        func_00306e80(a2);
    }
    return 1;
}
