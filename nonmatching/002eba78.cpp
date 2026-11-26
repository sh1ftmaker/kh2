// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2c040 asm("D_01e2c040");
extern "C" f32 func_002eb9d8(u32, f32) asm("func_002eb9d8");

// 0x002eba78 func_002eba78
// minilink-rodata 0x00376104   (float literals live here in the original)
f32 func_002eba78(u32 a0, u32 a1) asm("func_002eba78");
f32 func_002eba78(u32 a0, u32 a1) {
    *(f32*)((a1 + 0x110)) = 16.0f;
    *(f32*)((a1 + 0x114)) = 16.0f;
    *(f32*)((a1 + 0x11c)) = *(f32*)(&D_01e2c040);
    return func_002eb9d8(a0, 8.0f);
}
