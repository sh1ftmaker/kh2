// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350910 asm("D_00350910");
extern "C" u32 func_001b3b70(u32, u32, u32, u32) asm("func_001b3b70");

// 0x001a6bc8 func_001a6bc8
u32 func_001a6bc8(u32 a0, u32 a1, u32 a2) asm("_ZN2YS8FIELDOBJC1EPKNS_8OBJENTRYERKN2kn7FVectorEf");
u32 func_001a6bc8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_001b3b70(a0, a1, 4, a2);
    *(u32*)(a0) = (u32)&D_00350910;
    *(u32*)((a0 + 0xabc)) = (*(u32*)((a0 + 0xabc)) | 4);
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x100);
    *(u32*)((a0 + 0x3b0)) = 3;
    *(u32*)((a0 + 0x600)) = ((*(u32*)((a0 + 0x600)) & 0xffffff87) | 8);
    return v0;
}
