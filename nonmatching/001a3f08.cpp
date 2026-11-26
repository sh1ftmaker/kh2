// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350758 asm("D_00350758");
extern "C" u32 func_0018d050(u32, u32, u32, u32, u32, u32, u32) asm("func_0018d050");

// 0x001a3f08 func_001a3f08
u32 func_001a3f08(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("_ZN2YS10ATTACK_OBJC1EPNS_6BTLOBJEPNS_6STDOBJEiPPS0_ii");
u32 func_001a3f08(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 t0;
    u32 v0;
    u32 t7;
    u32 t7_0;
    if (((s32)(a1) != 0)) {
        t0 = *(u32*)((a1 + 0x48c));
    }
    v0 = func_0018d050(a0, a1, a2, a3, *(u8*)((t0 + 0x24c)), 0xffffffff, a5);
    *(u32*)(a0) = (u32)&D_00350758;
    *(u32*)((a0 + 0xc4)) = a6;
    *(u32*)((a0 + 0x2d0)) = a4;
    t7 = *(u8*)((*(u32*)((a0 + 0x28)) + 0x12));
    if (((t7 & 0xa) == 0)) {
        t7_0 = *(u32*)((a0 + 0x10));
        *(u32*)((a0 + 0x24)) = (t7_0 + 0x80);
    }
    return v0;
}
