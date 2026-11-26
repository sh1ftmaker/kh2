// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001f0430 func_001f0430
f32 func_001f0430(u32 a0, u32 a1) asm("func_001f0430");
f32 func_001f0430(u32 a0, u32 a1) {
    *(f32*)((a1 + 4)) = *(f32*)((a0 + 8));
    *(u32*)(a1) = a0;
    *(f32*)((a1 + 0x10)) = *(f32*)((a0 + 0x14));
    *(f32*)((a1 + 8)) = 0.0f;
    *(f32*)((a1 + 0x18)) = 0.0f;
    *(f32*)((a1 + 0x14)) = 0.0f;
    *(f32*)((a1 + 0xc)) = 0.0f;
    return 0.0f;
}
