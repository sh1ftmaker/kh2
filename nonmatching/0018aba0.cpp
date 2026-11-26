// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ee90 asm("D_0034ee90");
extern "C" u32 func_0018c420(u32) asm("func_0018c420");
extern "C" void func_001980d0(u32) asm("func_001980d0");

// 0x0018aba0 func_0018aba0
// minilink-rodata 0x0036cb90   (float literals live here in the original)
f32 func_0018aba0(u32 a0) asm("func_0018aba0");
f32 func_0018aba0(u32 a0) {
    u32 t6;
    u32 v0;
    u32 t5;
    func_001980d0(a0);
    *(u32*)(a0) = (u32)&D_0034ee90;
    *(f32*)((a0 + 0xa20)) = 0.0f;
    *(f32*)((a0 + 0xa24)) = 0.0f;
    *(u32*)((a0 + 0xa30)) = 0;
    func_0018c420(a0 + 0xa40);
    t6 = *(u32*)((a0 + 0x600));
    v0 = func_0018c420(a0 + 0xaa0);
    *(f32*)((a0 + 0xb00)) = 0.0f;
    *(u32*)((a0 + 0xb04)) = 0;
    *(u32*)((a0 + 0xb08)) = 0;
    t5 = *(u32*)((a0 + 0x588));
    *(u32*)((a0 + 0x588)) = (t5 | 8);
    *(u32*)((a0 + 0x600)) = ((t6 & 0xffffff87) | 0x18);
    *(f32*)((a0 + 0xb28)) = 360.0f;
    *(u32*)((a0 + 0xb0c)) = 0;
    *(f32*)((a0 + 0xb10)) = 360.0f;
    *(f32*)((a0 + 0xb2c)) = 720.0f;
    *(f32*)((a0 + 0xb14)) = 720.0f;
    *(f32*)((a0 + 0xb1c)) = 360.0f;
    *(f32*)((a0 + 0xb30)) = 180.0f;
    *(f32*)((a0 + 0xb18)) = 60.0f;
    *(f32*)((a0 + 0xb20)) = 720.0f;
    *(f32*)((a0 + 0xb24)) = 180.0f;
    return v0;
}
