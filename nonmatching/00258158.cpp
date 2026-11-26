// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0031acc0(u32) asm("func_0031acc0");

// 0x00258158 func_00258158
u32 func_00258158(u32 a0) asm("func_00258158");
u32 func_00258158(u32 a0) {
    func_0031acc0(a0 + 0x368);
    func_0031acc0(a0 + 0x1b4);
    return func_0031acc0(a0);
}
