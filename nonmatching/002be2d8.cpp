// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002be2d8 func_002be2d8
// minilink-rodata 0x00374fe0   (float literals live here in the original)
f32 func_002be2d8(u32 a0, u32 a1, u32 a2) asm("func_002be2d8");
f32 func_002be2d8(u32 a0, u32 a1, u32 a2) {
    u32 a1_0;
    u32 t7;
    a1_0 = (a1 << 2);
    *(f32*)((*(u32*)(((a1_0 + a0) + 0x2c)) + 0x220)) = *(f32*)(a2);
    t7 = (*(u32*)(((a1_0 + a0) + 0x2c)) + 0x220);
    *(f32*)((t7 + 4)) = *(f32*)((a2 + 4));
    *(f32*)((t7 + 8)) = *(f32*)((a2 + 8));
    *(f32*)((t7 + 0xc)) = 1.0f;
    return 1.0f;
}
