// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3b38 asm("D_004f3b38");
extern "C" void func_00160d28(u32) asm("func_00160d28");

// 0x00160de0 wtarget_00160de0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00160de0(u32 a0) asm("_Z16wtarget_00160de0jjjj");
void lift_00160de0(u32 a0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_004f3b38) : *(u32*)((s0 + 0x80))), (s0 = a0), ((s32)(a0) != 0)) {
        if ((*(u32*)((a0 + 0x1a8)) != a0)) {
            continue;
        }
        func_00160d28(a0);
    }
    return;
}
