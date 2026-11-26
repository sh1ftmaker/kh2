// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002766d0(u32) asm("func_002766d0");

// 0x0029e2f8 func_0029e2f8
u32 func_0029e2f8(u32 a0) asm("func_0029e2f8");
u32 func_0029e2f8(u32 a0) {
    return func_00139d78((func_002766d0(a0) + ((a0 + 1) * 0x198)) + 0x4398);
}
