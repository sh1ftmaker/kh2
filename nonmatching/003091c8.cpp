// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_003088f8(u32, u32, u32, u32, u32, u32) asm("func_003088f8");

// 0x003091c8 func_003091c8
u32 func_003091c8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_003091c8");
u32 func_003091c8(u32 a0, u32 a1, u32 a2, u32 a3) {
    return (func_003088f8(0x80000008, a3, 0x40, 0, 0, 0) ? 0 : 0x800);
}
