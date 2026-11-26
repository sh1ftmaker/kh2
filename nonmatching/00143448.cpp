// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348804 asm("D_00348804");
extern "C" u32 func_00141778(u32, u16) asm("func_00141778");

// 0x00143448 func_00143448
u32 func_00143448(u16 a0) asm("func_00143448");
u32 func_00143448(u16 a0) {
    return func_00141778(*(u32*)(&D_00348804), a0);
}
