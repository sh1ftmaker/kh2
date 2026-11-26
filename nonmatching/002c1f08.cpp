// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361bf0 asm("D_00361bf0");
extern "C" u32 func_001050c8(u32, u32) asm("func_001050c8");
extern "C" u32 func_002ee8a8(u32, u32, u32) asm("func_002ee8a8");

// 0x002c1f08 func_002c1f08
// minilink-rodata 0x0037553c   (float literals live here in the original)
f32 func_002c1f08(u32 a0, u32 a1) asm("func_002c1f08");
f32 func_002c1f08(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_002ee8a8(a0, func_001050c8(a0, a1), a1);
    *(f32*)(((a0 + 0x210) + 4)) = 0.0f;
    *(f32*)(((a0 + 0x210) + 8)) = 0.0f;
    *(f32*)(((a0 + 0x210) + 0xc)) = 0.0f;
    *(u32*)(a0) = (u32)&D_00361bf0;
    *(f32*)((a0 + 0x220)) = 0.0f;
    *(f32*)(((a0 + 0x220) + 4)) = 0.0f;
    *(f32*)(((a0 + 0x220) + 8)) = 0.0f;
    *(f32*)(((a0 + 0x220) + 0xc)) = 1.0f;
    *(f32*)((a0 + 0x210)) = 0.0f;
    return v0;
}
