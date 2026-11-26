// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ad990(u32, f32, f32) asm("func_001ad990");
extern "C" u32 func_001bfd60(u32, u32, f32) asm("func_001bfd60");

// 0x001945a0 func_001945a0
// minilink-rodata 0x0036cf00   (float literals live here in the original)
u32 func_001945a0(u32 a0, u32 a1, u32 a2, f32 fa0) asm("_ZN2YS3OBJ15set_parts_colorEjjf");
u32 func_001945a0(u32 a0, u32 a1, u32 a2, f32 fa0) {
    u32 v0;
    u32 t7;
    v0 = func_001bfd60(a0 + 0x8e0, a1, fa0);
    *(u8*)((v0 + 4)) = a2;
    t7 = (v0 + 4);
    *(u8*)((t7 + 1)) = (a2 >> 8);
    *(u8*)((t7 + 2)) = (a2 >> 0x10);
    *(u8*)((t7 + 3)) = (a2 >> 0x18);
    return func_001ad990(v0 + 8, 0.0f, 1.0f);
}
