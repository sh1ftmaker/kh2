// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 func_0021f620(u32, u32) asm("func_0021f620");

// 0x001fb6c8 func_001fb6c8
f32 func_001fb6c8(u32 a0) asm("func_001fb6c8");
f32 func_001fb6c8(u32 a0) {
    u8 frame[32];
    *(u32*)((u32)frame) = a0;
    *(u32*)(((u32)frame + 4)) = *(u32*)((a0 + 0x48));
    *(u32*)(((u32)frame + 8)) = (u32)&D_01d9e8c0;
    *(f32*)(((u32)frame + 0xc)) = *(f32*)((a0 + 0x44));
    *(f32*)(((u32)frame + 0x10)) = *(f32*)((a0 + 0x40));
    *(u32*)(((u32)frame + 0x14)) = (a0 + 0x30);
    return func_0021f620((u32)frame, 0);
}
