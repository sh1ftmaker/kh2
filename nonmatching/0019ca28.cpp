// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001902a8(u32, u32) asm("func_001902a8");

// 0x0019ca28 func_0019ca28
u32 func_0019ca28(u32 a0, u32 a1) asm("func_0019ca28");
u32 func_0019ca28(u32 a0, u32 a1) {
    u8 frame[32];
    u32 v0;
    *(u32*)(((u32)frame + 0xc)) = 0;
    *(u32*)((a0 + 4)) = *(u32*)(a1);
    *(u32*)((a0 + 8)) = *(u32*)((a1 + 4));
    *(u32*)((a0 + 0xc)) = *(u32*)((a1 + 8));
    *(u32*)((a0 + 0x10)) = *(u32*)((a1 + 0xc));
    *(u32*)((a0 + 0x14)) = *(u32*)((a1 + 0x10));
    v0 = func_001902a8(a0 + 4, (u32)frame);
    *(u32*)((a0 + 0x24)) = *(u8*)((*(u32*)(((u32)frame + 0xc)) + 1));
    return v0;
}
