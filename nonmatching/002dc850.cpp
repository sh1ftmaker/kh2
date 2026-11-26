// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002e4af8(u32) asm("func_002e4af8");
extern "C" void func_001444c8(u32, u32, u32) asm("func_001444c8");
extern "C" void func_0015ee10(u32) asm("func_0015ee10");

// 0x002dc850 func_002dc850
// minilink-rodata 0x00375d68   (float literals live here in the original)
f32 func_002dc850(u32 a0) asm("_ZN2Ti6MGJump5resetEv");
f32 func_002dc850(u32 a0) {
    u8 frame[64];
    u32 s1;
    u32 s0;
    *(f32*)((u32)frame) = 900.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 200.0f;
    *(f32*)(((u32)frame + 0x1c)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 2000.0f;
    *(f32*)(((u32)frame + 0x10)) = -900.0f;
    *(f32*)(((u32)frame + 0x14)) = -6000.0f;
    *(f32*)(((u32)frame + 0x18)) = -2000.0f;
    s1 = (a0 + 0x8078);
    func_001444c8((u32)frame + 0x20, (u32)frame + 0x10, (u32)frame);
    *(u32*)(s1) = *(u32*)(((u32)frame + 0x20));
    *(u32*)((s1 + 4)) = *(u32*)(((u32)frame + 0x24));
    *(u32*)((s1 + 8)) = *(u32*)(((u32)frame + 0x28));
    *(u32*)((s1 + 0xc)) = *(u32*)(((u32)frame + 0x2c));
    *(u32*)((s1 + 0x10)) = *(u32*)(((u32)frame + 0x30));
    *(u32*)((s1 + 0x14)) = *(u32*)(((u32)frame + 0x34));
    s0 = (a0 + 0x8000);
    *(u8*)((s0 + 0x90)) = 0;
    func_0015ee10(2);
    *(f32*)((a0 + 0xd4)) = 0.0f;
    *(f32*)((s0 + 0x68)) = 0.0f;
    *(u32*)((a0 + 0x88)) = 0;
    *(u32*)((a0 + 0x8c)) = 0;
    *(u32*)((a0 + 0x90)) = 0;
    *(f32*)((a0 + 0xd8)) = -1.0f;
    *(u8*)((s0 + 0x6c)) = 0;
    *(u32*)((s0 + 0x70)) = 0;
    *(u32*)((s0 + 0x74)) = 0;
    return func_002e4af8(a0 + 0x100);
}
