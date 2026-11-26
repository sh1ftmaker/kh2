// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00207260() asm("func_00207260");

// 0x002072a8 func_002072a8
f32 func_002072a8(u8 a0) asm("func_002072a8");
f32 func_002072a8(u8 a0) {
    func_00207260();
    return ((s32)(((s32)((((f32)((s32)((a0 << 1))) * func_00207260()) - (f32)((s32)((a0 >> 1))))) << 0x18)) >> 0x18);
}
