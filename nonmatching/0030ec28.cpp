// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305a30(u32) asm("func_00305a30");

// 0x0030ec28 func_0030ec28
u32 func_0030ec28() asm("func_0030ec28");
u32 func_0030ec28() {
    return ((u32)(0) < (u32)((func_00305a30(4) & 0x10000)));
}
