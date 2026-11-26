// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036eeb0 asm("D_0036eeb0");
extern "C" u32 D_01d9e4b0 asm("D_01d9e4b0");
extern "C" void func_002fee78(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002fee78");

// 0x001e6100 func_001e6100
u32 func_001e6100(u32 a0) asm("func_001e6100");
u32 func_001e6100(u32 a0) {
    u8 frame[16];
    *(u32*)((u32)frame) = *(u32*)((a0 + 0x144));
    *(u32*)(((u32)frame + 8)) = ((s32)((((s32)(*(u32*)((*(u32*)((a0 + 0x8c)) + 0xf0))) < (s32)(0)) ? (*(u32*)((*(u32*)((a0 + 0x8c)) + 0xf0)) + 0x3ff) : *(u32*)((*(u32*)((a0 + 0x8c)) + 0xf0)))) >> 0xa);
    func_002fee78((u32)&D_01d9e4b0, (u32)&D_0036eeb0, *(u32*)((a0 + 0x114)) + *(u32*)((a0 + 0x104)), *(u32*)((a0 + 0x118)) + *(u32*)((a0 + 0x108)), *(u32*)((a0 + 0xc4)), *(u32*)((a0 + 0xd4)), *(u32*)((a0 + 0xe4)), *(u32*)((a0 + 0xf4)));
    return (u32)&D_01d9e4b0;
}
