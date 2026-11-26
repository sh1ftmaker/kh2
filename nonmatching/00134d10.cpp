// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00134d10 func_00134d10
// minilink-rodata 0x0036ac48   (float literals live here in the original)
f32 func_00134d10(u32 a0) asm("func_00134d10");
f32 func_00134d10(u32 a0) {
    *(u32*)(a0) = 0;
    *(u32*)((a0 + 8)) = 0;
    *(f32*)((a0 + 0xc)) = 1.0f;
    *(f32*)((a0 + 0x1c)) = 1.0f;
    *(f32*)((a0 + 4)) = -10000000.0f;
    *(f32*)((a0 + 0x10)) = 1.0f;
    *(f32*)((a0 + 0x14)) = 1.0f;
    *(f32*)((a0 + 0x18)) = 1.0f;
    return 1.0f;
}
