// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00150e00(u32, u32) asm("func_00150e00");

// 0x00150de0 func_00150de0
u32 func_00150de0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_00150de0");
u32 func_00150de0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    *(u32*)((a0 + 0x19a0)) = a5;
    return func_00150e00(a0, a1);
}
