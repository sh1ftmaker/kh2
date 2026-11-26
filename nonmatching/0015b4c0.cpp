// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050c8(u32) asm("func_001050c8");

// 0x0015b4c0 func_0015b4c0
u32 func_0015b4c0(u32 a0) asm("func_0015b4c0");
u32 func_0015b4c0(u32 a0) {
    u32 v0;
    v0 = func_001050c8(a0);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(v0) + 4))))(v0, a0);
}
