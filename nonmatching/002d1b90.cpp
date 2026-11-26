// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002d1bf8() asm("func_002d1bf8");

// 0x002d1b90 func_002d1b90
// minilink-rodata 0x003759e4   (float literals live here in the original)
f32 func_002d1b90() asm("func_002d1b90");
f32 func_002d1b90() {
    u8 frame[32];
    *(f32*)(((u32)frame + 0x1c)) = 0.0f;
    *(f32*)((u32)frame) = 70.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0x10)) = 70.0f;
    *(f32*)(((u32)frame + 4)) = 5.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)(((u32)frame + 0x18)) = 0.0f;
    *(f32*)(((u32)frame + 0x14)) = 240.0f;
    return func_002d1bf8();
}
