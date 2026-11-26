// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001d1b60(u32, u32) asm("func_001d1b60");
extern "C" f32 func_002f8b30(u32, u32, u32, f32, f32) asm("func_002f8b30");

// 0x001d4f40 func_001d4f40
// minilink-rodata 0x0036e530   (float literals live here in the original)
f32 func_001d4f40(u32 a0, u32 a1, u32 a2) asm("func_001d4f40");
f32 func_001d4f40(u32 a0, u32 a1, u32 a2) {
    f32 f20;
    f20 = ((f32)((s32)(a1)) * func_002f8b30(a0, a1, a2, 0.5f, (f32)((s32)(a2))));
    return func_001d1b60(a0, *(u32*)((a0 + 0x2c)) + ((s32)(((f32)((s32)(a1)) * func_002f8b30(a0, a1, a2, 0.5f, (f32)((s32)(a2))))) ? (s32)(((f32)((s32)(a1)) * func_002f8b30(a0, a1, a2, 0.5f, (f32)((s32)(a2))))) : 1));
}
