// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001337f0 wtarget_001337f0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001337f0(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_001337f0jjjj");
u32 lift_001337f0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    *(u8*)((*(u32*)(a0) + 2)) = 0;
    *(u32*)((*(u32*)(a0) + 8)) = a2;
    *(u32*)((*(u32*)(a0) + 0xc)) = (a1 | 0x50000000);
    *(u8*)((*(u32*)(a0) + 3)) = 0x10;
    *(u32*)((*(u32*)(a0) + 4)) = 0;
    *(u16*)(*(u32*)(a0)) = a1;
    v0 = *(u32*)(a0);
    *(u32*)(a0) = ((v0 + (a1 << 4)) + 0x10);
    return (v0 + 0x10);
}
