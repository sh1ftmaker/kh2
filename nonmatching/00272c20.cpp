// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f12c asm("D_0035f12c");

// 0x00272c20 func_00272c20
u32 func_00272c20(u32 a0) asm("func_00272c20");
u32 func_00272c20(u32 a0) {
    switch (a0) {
    case 0:
        return 4;
    case 1:
        return *(s8*)(*(u32*)(&D_0035f12c));
    case 2:
        return *(s8*)((*(u32*)(&D_0035f12c) + 1));
    case 3:
        return 1;
    case 4:
        return *(s8*)((*(u32*)(&D_0035f12c) + 2));
    default:
        return 0xffffffff;
    }
}
