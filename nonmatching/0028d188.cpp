// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0028d188 func_0028d188
// minilink-rodata 0x00374438   (float literals live here in the original)
f32 func_0028d188(u32 a0) asm("func_0028d188");
f32 func_0028d188(u32 a0) {
    *(u8*)((a0 + 0x19c)) = 0;
    *(u32*)((a0 + 0x1b8)) = 0;
    *(u8*)((a0 + 0x19d)) = 0;
    *(f32*)((a0 + 0x1a0)) = 30.0f;
    *(u32*)((a0 + 0x1a4)) = 0;
    *(u32*)((a0 + 0x1a8)) = 0;
    *(u32*)((a0 + 0x1ac)) = 0;
    *(u32*)((a0 + 0x1b0)) = 0;
    *(u32*)((a0 + 0x1b4)) = 0;
    return 30.0f;
}
