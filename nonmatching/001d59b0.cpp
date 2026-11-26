// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d5ba6c asm("D_01d5ba6c");
extern "C" void func_001d5960(u32) asm("func_001d5960");

// 0x001d59b0 func_001d59b0
void func_001d59b0() asm("_ZN2YS9LINK_FLAG5CheckEv");
void func_001d59b0() {
    u8 frame[16];
    u32 a0_0;
    u32 s1;
    u32 s2;
    u32 s0;
    u32 sp;
    if (((s32)(*(u32*)((*(u32*)(&D_01d5ba6c) + 4))) > 0)) {
        a0_0 = *(u32*)(&D_01d5ba6c);
        s1 = 0;
        s2 = 0x1d60000;
        s0 = 0;
        do {
            func_001d5960((a0_0 + (s0 + (s1 * 0x3c))) + 8);
            a0_0 = *(u32*)((s2 + -0x4594));
            s1 = (s1 + 1);
        } while (((s32)(s1) < (s32)(*(u32*)((*(u32*)((s2 + -0x4594)) + 4)))));
    } else {
        sp = (u32)frame;
    }
    return;
}
