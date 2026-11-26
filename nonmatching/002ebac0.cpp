// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2c044 asm("D_01e2c044");
extern "C" f32 func_002eb9d8(u32, f32) asm("func_002eb9d8");

// 0x002ebac0 func_002ebac0
// minilink-rodata 0x0037610c   (float literals live here in the original)
f32 func_002ebac0(u32 a0, u32 a1) asm("func_002ebac0");
f32 func_002ebac0(u32 a0, u32 a1) {
    *(f32*)((a1 + 0x110)) = 20.0f;
    *(f32*)((a1 + 0x114)) = 20.0f;
    *(f32*)((a1 + 0x11c)) = *(f32*)(&D_01e2c044);
    return func_002eb9d8(a0, 4.0f);
}
