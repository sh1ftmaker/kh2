// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035db20 asm("D_0035db20");

// 0x002314c0 func_002314c0
f32 func_002314c0(u32 a0) asm("func_002314c0");
f32 func_002314c0(u32 a0) {
    f32 f0;
    *(f32*)(&D_0035db20) = *(f32*)(a0);
    *(f32*)(((u32)&D_0035db20 + 4)) = *(f32*)((a0 + 4));
    *(f32*)(((u32)&D_0035db20 + 8)) = *(f32*)((a0 + 8));
    *(f32*)(((u32)&D_0035db20 + 0x10)) = *(f32*)((a0 + 0xc));
    *(f32*)(((u32)&D_0035db20 + 0x14)) = *(f32*)((a0 + 0x10));
    f0 = *(f32*)((a0 + 0x14));
    *(f32*)(((u32)&D_0035db20 + 0x18)) = f0;
    return f0;
}
