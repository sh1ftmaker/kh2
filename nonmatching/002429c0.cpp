// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001058e8(u32, u32) asm("func_001058e8");

// 0x002429c0 func_002429c0
u32 func_002429c0(u32 a0, u32 a1) asm("func_002429c0");
u32 func_002429c0(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_001058e8(a0, a1);
    *(u16*)(((v0 + 0x41a0) + 2)) = a1;
    *(u16*)((v0 + 0x41a0)) = a0;
    return v0;
}
