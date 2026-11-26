// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001a1a20(u32, u32, u32) asm("func_001a1a20");

// 0x001a1db8 func_001a1db8
f32 func_001a1db8(u32 a0) asm("func_001a1db8");
f32 func_001a1db8(u32 a0) {
    *(f32*)((a0 + 0x1bc)) = 0.0f;
    *(f32*)((a0 + 0x1c0)) = 0.0f;
    return func_001a1a20(a0, *(u32*)((a0 + 0x184)), 0);
}
