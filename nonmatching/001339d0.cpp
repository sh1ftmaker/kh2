// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001339d0 wtarget_001339d0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001339d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_Z16wtarget_001339d0jjjj");
u32 lift_001339d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    *(u8*)((*(u32*)(a0) + 2)) = 0;
    *(u32*)((*(u32*)(a0) + 8)) = a3;
    *(u32*)((*(u32*)(a0) + 0xc)) = a4;
    *(u8*)((*(u32*)(a0) + 3)) = 0x30;
    *(u32*)((*(u32*)(a0) + 4)) = a1;
    *(u16*)(*(u32*)(a0)) = a2;
    *(u32*)(a0) = (*(u32*)(a0) + 0x10);
    return a1;
}
