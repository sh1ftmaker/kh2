// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" void func_002ceb08(u32, u32) asm("func_002ceb08");

// 0x002e2d88 u_tail4_002e2d88(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002e2d88(u32 a0, u32 a1) asm("_Z16u_tail4_002e2d88jjjj");
void lift_002e2d88(u32 a0, u32 a1) {
    u32 s0;
    s0 = *(u32*)(&D_00361f60);
    if (((s32)(*(u32*)(&D_00361f60)) != 0)) {
        func_002ceb08(a0, a1);
    }
    *(u32*)((s0 + 0x114)) = a0;
    *(u8*)((s0 + 0x118)) = (a1 & 0xff);
    return;
}
