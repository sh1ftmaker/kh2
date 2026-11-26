// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001c1748(u32, u32, u32, u32, u32) asm("func_001c1748");

// 0x001c6fa8 func_001c6fa8
// minilink-rodata 0x0036df80   (float literals live here in the original)
f32 func_001c6fa8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001c6fa8");
f32 func_001c6fa8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 t7;
    v0 = func_001c1748(a0, *(u32*)((a1 + 0x9f4)), a3, a4, a4);
    *(u32*)((a0 + 0x28)) = 0;
    t7 = (a0 + 0x30);
    *(f32*)((a0 + 0x30)) = 0.0f;
    *(u32*)((a0 + 0x4c)) = a2;
    *(u32*)((a0 + 0x50)) = a1;
    *(f32*)((t7 + 4)) = 0.0f;
    *(f32*)((t7 + 8)) = 0.0f;
    *(f32*)((t7 + 0xc)) = 0.0f;
    *(f32*)((a0 + 0x40)) = 900.0f;
    *(u8*)((a0 + 0x44)) = 0;
    *(u8*)((a0 + 0x45)) = 0x1e;
    *(u32*)((a0 + 0x48)) = 0;
    *(u8*)((a0 + 0x14)) = *(u8*)(a2);
    *(u8*)((a0 + 0x16)) = 0xffffffff;
    return v0;
}
