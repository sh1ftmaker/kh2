// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001058e8(u8) asm("func_001058e8");

// 0x00242a28 func_00242a28
u32 func_00242a28(u8 a0) asm("func_00242a28");
u32 func_00242a28(u8 a0) {
    u32 v0;
    v0 = (func_001058e8(a0) + 0x41a0);
    *(u32*)((v0 + 4)) = ((*(u32*)((v0 + 4)) & 0xfffffffe) | ((u32)(0) < (u32)(a0)));
    return v0;
}
