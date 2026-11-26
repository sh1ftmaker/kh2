// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_007fffff asm("D_007fffff");

// 0x00314640 func_00314640
void func_00314640(u32 a0, u32 a1) asm("func_00314640");
void func_00314640(u32 a0, u32 a1) {
    *(u32*)((a1 + 4)) = (*(u32*)(a0) >> 0x1f);
    if (((s32)(((*(u32*)(a0) >> 0x17) & 0xff)) == 0)) {
        *(u32*)(a1) = 2;
        return;
    } else {
        *(u32*)((a1 + 8)) = (((*(u32*)(a0) >> 0x17) & 0xff) + -0x7f);
        *(u32*)(a1) = 3;
        *(u32*)((a1 + 0xc)) = (((*(u32*)(a0) & (u32)&D_007fffff) << 7) | 0x40000000);
        return;
    }
}
