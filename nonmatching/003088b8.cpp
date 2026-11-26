// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00308780(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00308780");

// 0x003088b8 func_003088b8
u32 func_003088b8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_003088b8");
u32 func_003088b8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    return func_00308780(a0, 0, a1, a2, a3, a4, a5, a4);
}
