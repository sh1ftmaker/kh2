// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6cb98 asm("D_01c6cb98");

// 0x001a82b0 func_001a82b0
u32 func_001a82b0(u32 a0) asm("_ZN2YS8TREASURE5TABLE4EachEPKS1_");
u32 func_001a82b0(u32 a0) {
    if (((s32)(a0) == 0)) {
        return (*(u32*)(&D_01c6cb98) + 4);
    } else {
        return (((u32)((a0 + 0xc)) < (u32)(((*(u32*)(&D_01c6cb98) + (*(u16*)((*(u32*)(&D_01c6cb98) + 2)) * 0xc)) + 4))) ? (a0 + 0xc) : 0);
    }
}
