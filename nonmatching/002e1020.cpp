// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_002e0fa0(u32, u32) asm("func_002e0fa0");

// 0x002e1020 func_002e1020
// minilink-rodata 0x00375ec0   (float literals live here in the original)
f32 func_002e1020(u32 a0) asm("func_002e1020");
f32 func_002e1020(u32 a0) {
    u8 frame[16];
    *(f32*)((u32)frame) = 80.0f;
    *(f32*)(((u32)frame + 4)) = 155.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(u32*)((a0 + 0x7c)) = 0x64;
    *(u8*)((a0 + 0x84)) = 0;
    if (((a0 + 0xd0) != (u32)frame)) {
        *(Q16*)((a0 + 0xd0)) = *(Q16*)((u32)frame);
    }
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)((u32)frame) = 100.0f;
    *(f32*)(((u32)frame + 4)) = 85.0f;
    if (((a0 + 0xe0) != (u32)frame)) {
        *(Q16*)((a0 + 0xe0)) = *(Q16*)((u32)frame);
    }
    return func_002e0fa0(a0, 0);
}
