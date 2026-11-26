// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ab260(u32, u32, u32, u32, u32, u32, u32, f32, f32) asm("func_001ab260");

// 0x001aa8f0 func_001aa8f0
u32 func_001aa8f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001aa8f0");
u32 func_001aa8f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_001ab260(*(u32*)(a0), a0 + 0x40, a1, a2, a3, a4, *(u32*)((a0 + 0x38)), *(f32*)((a0 + 0x24)), *(f32*)((a0 + 0x28)));
}
