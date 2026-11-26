// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00133938 wtarget_00133938(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00133938(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_Z16wtarget_00133938jjjj");
u32 lift_00133938(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    *(u8*)((*(u32*)(a0) + 2)) = 0;
    *(u32*)((*(u32*)(a0) + 8)) = a3;
    *(u32*)((*(u32*)(a0) + 0xc)) = a4;
    *(u8*)((*(u32*)(a0) + 3)) = 0x20;
    *(u32*)((*(u32*)(a0) + 4)) = a1;
    *(u16*)(*(u32*)(a0)) = a2;
    v0 = *(u32*)(a0);
    *(u32*)(a0) = a1;
    return (v0 + 0x10);
}
