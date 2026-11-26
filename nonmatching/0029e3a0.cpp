// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002766d0(u32) asm("func_002766d0");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x0029e3a0 func_0029e3a0
u32 func_0029e3a0(u32 a0) asm("func_0029e3a0");
u32 func_0029e3a0(u32 a0) {
    u32 s0;
    s0 = (a0 + 1);
    return func_0028da70((func_002766d0(a0) + (s0 * 0x198)) + 0x4398, 8);
}
