// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");

// 0x001397d8 func_001397d8(int)
void lift_001397d8(u32 a0) asm("_Z13func_001397d8i");
void lift_001397d8(u32 a0) {
    u32 s0;
    u32 a0_0;
    s0 = 0;
    while ((a0_0 = ((s32)(s0) != 0) ? *(u32*)((s0 + 4)) : *(u32*)((*(u32*)(&D_00347f80) + 4))), (s0 = a0_0), ((s32)(a0_0) != 0)) {
        if ((*(u32*)((a0_0 + 0x10)) != a0)) {
            continue;
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_0) + 0x14))))(a0_0);
    }
    return;
}
