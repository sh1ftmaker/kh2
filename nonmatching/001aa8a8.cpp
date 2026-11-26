// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001aafe8(u32, u32, u32, u32, u32, u32, f32, f32) asm("func_001aafe8");

// 0x001aa8a8 func_001aa8a8
u32 func_001aa8a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001aa8a8");
u32 func_001aa8a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_001aafe8(*(u32*)(a0), a0 + 0x40, a1, a2, a3, a4, *(f32*)((a0 + 0x24)), *(f32*)((a0 + 0x28)));
}
