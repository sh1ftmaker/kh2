// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d8a8 asm("D_0034d8a8");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");

// 0x0016dd28 func_0016dd28
u32 func_0016dd28(u32 a0) asm("func_0016dd28");
u32 func_0016dd28(u32 a0) {
    u32 s0;
    u32 a0_0;
    s0 = (*(u32*)(&D_0034d8a8) * 0x10dcd);
    *(u32*)(&D_0034d8a8) = s0;
    a0_0 = (*(u32*)(a0) + -1);
    *(u32*)(a0) = (s32)((u64)(func_00312db8((u32)(s0), func_00312db8((u32)(a0_0) + (u64)(1), *(u32*)(a0)))));
    return (s32)((u64)(func_00312db8((u32)(s0), func_00312db8((u32)(a0_0) + (u64)(1), *(u32*)(a0)))));
}
