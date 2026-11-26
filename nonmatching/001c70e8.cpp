// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d498f0 asm("D_01d498f0");
extern "C" u32 D_01d49940 asm("D_01d49940");

// 0x001c70e8 func_001c70e8
// minilink-rodata 0x0036df88   (float literals live here in the original)
f32 func_001c70e8() asm("_ZN2YS11PRIZEEFFECT4InitEv");
f32 func_001c70e8() {
    u32 t6;
    u32 t7;
    t6 = *(u32*)(&D_01d49940);
    *(u32*)(&D_01d49940) = ((t6 & 0xffffff87) | 0x30);
    *(f32*)(((u32)&D_01d498f0 + 8)) = 55.0f;
    *(f32*)((((u32)&D_01d498f0 + -0x20) + 0x6c)) = 60.0f;
    t7 = *(u64*)((((u32)&D_01d498f0 + -0x20) + 0x70));
    *(f32*)(&D_01d498f0) = 55.0f;
    *(u64*)((((u32)&D_01d498f0 + -0x20) + 0x70)) = (t7 | 1);
    *(f32*)(((u32)&D_01d498f0 + 4)) = 55.0f;
    *(u32*)(((u32)&D_01d498f0 + 0xc)) = 0;
    return 60.0f;
}
