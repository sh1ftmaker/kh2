// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b1be0(u32, f32) asm("func_001b1be0");

// 0x00174b88 func_00174b88
u32 func_00174b88(u32 a0) asm("func_00174b88");
u32 func_00174b88(u32 a0) {
    return func_001b1be0(*(u32*)(a0), *(f32*)((a0 + 4)));
}
