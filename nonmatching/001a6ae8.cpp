// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6cb30 asm("D_01c6cb30");
extern "C" u32 D_01c6cb70 asm("D_01c6cb70");
extern "C" void func_00105110(u32) asm("func_00105110");

// 0x001a6ae8 u_tail0_001a6ae8()
void lift_001a6ae8() asm("_Z16u_tail0_001a6ae8v");
void lift_001a6ae8() {
    u8 frame[16];
    u32 s1;
    u32 s2;
    u32 s0;
    u32 sp;
    if (((s32)(*(u32*)(&D_01c6cb70)) > 0)) {
        s1 = 0;
        s2 = 0x1c70000;
        s0 = (u32)&D_01c6cb30;
        do {
            func_00105110(*(u32*)(((s0 + (s1 * 8)) + 4)));
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(*(u32*)((s2 + -0x3490))))) != 0));
    } else {
        sp = (u32)frame;
    }
    *(u32*)(&D_01c6cb70) = 0;
    return;
}
