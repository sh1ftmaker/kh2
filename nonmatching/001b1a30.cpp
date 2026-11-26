// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0015cc70(u32, u32) asm("func_0015cc70");

// 0x001b1a30 func_001b1a30
// minilink-rodata 0x0036d99c   (float literals live here in the original)
f32 func_001b1a30(u32 a0, u32 a1) asm("_ZN2YS5LIGHT6CreateENS0_4TYPEE");
f32 func_001b1a30(u32 a0, u32 a1) {
    u32 t7;
    u32 t5;
    u32 v0;
    f32 f0;
    f32 f0_0;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 0xc)) = 0;
    *(f32*)((a0 + 8)) = 1.0f;
    *(u32*)((a0 + 0x10)) = 0;
    *(u8*)((a0 + 0x14)) = 0x80;
    t7 = (a0 + 0x14);
    *(u8*)((t7 + 1)) = 0x80;
    *(u8*)((t7 + 2)) = 0x80;
    *(u8*)((t7 + 3)) = 0x80;
    t5 = *(u32*)(a0);
    if ((t5 == 1)) {
        v0 = func_0015cc70(a0, a1);
        *(f32*)((a0 + 0x18)) = *(f32*)((v0 + 4));
        *(f32*)((a0 + 0x1c)) = *(f32*)((v0 + 8));
        f0 = *(f32*)((v0 + 0xc));
        *(f32*)((a0 + 0x20)) = f0;
        *(f32*)((a0 + 0x24)) = *(f32*)((v0 + 0x10));
        f0_0 = f0;
    } else {
        f0_0 = 1.0f;
    }
    return f0_0;
}
