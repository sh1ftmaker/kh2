// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");

// 0x002f0798 func_002f0798
u32 func_002f0798(u32 a0) asm("func_002f0798");
u32 func_002f0798(u32 a0) {
    u32 v0;
    v0 = func_0010c7e8(*(u32*)((*(u32*)(a0) + 4)));
    return ((u32(*)(u32))(*(u32*)((*(u32*)(v0) + 0x28))))(v0);
}
