// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_002e34d8(u32, u32) asm("func_002e34d8");
extern "C" void func_002e24e0(u32) asm("func_002e24e0");

// 0x002e2350 func_002e2350
// minilink-rodata 0x00375f20   (float literals live here in the original)
void func_002e2350(u32 a0) asm("func_002e2350");
void func_002e2350(u32 a0) {
    u8 frame[16];
    u32 v0;
    *(u32*)((a0 + 0x108)) = 0;
    *(u32*)((a0 + 0x100)) = 0;
    v0 = func_002e34d8(a0 + 0x68, 0);
    *(u32*)((a0 + 0x64)) = v0;
    *(f32*)((a0 + 0x104)) = (f32)(*(s32*)(v0));
    func_002e24e0(a0);
    *(f32*)((u32)frame) = 130.0f;
    *(f32*)(((u32)frame + 4)) = 180.0f;
    *(u8*)((a0 + 0x10c)) = 1;
    *(u32*)((a0 + 0x114)) = 0xffffffff;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(u32*)((a0 + 0x110)) = 0;
    if (((a0 + 0x120) != (u32)frame)) {
        *(Q16*)((a0 + 0x120)) = *(Q16*)((u32)frame);
    }
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)((u32)frame) = 140.0f;
    *(f32*)(((u32)frame + 4)) = 150.0f;
    if (((a0 + 0x130) != (u32)frame)) {
        *(Q16*)((a0 + 0x130)) = *(Q16*)((u32)frame);
    }
    return;
}
