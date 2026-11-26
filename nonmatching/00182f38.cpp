// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ed00 asm("D_0034ed00");
extern "C" u32 D_01c60588 asm("D_01c60588");
extern "C" void func_0019a308(u32) asm("func_0019a308");

// 0x00182f38 YS::UNIT::InitMinigame()
void lift_00182f38() asm("_ZN2YS4UNIT12InitMinigameEv");
void lift_00182f38() {
    u8 frame[16];
    u32 s1;
    u32 s2;
    u32 s0;
    u32 sp;
    if (((s32)(*(u32*)(&D_0034ed00)) > 0)) {
        s1 = 0;
        s2 = 0x350000;
        s0 = (u32)&D_01c60588;
        do {
            func_0019a308(*(u32*)(((s0 + (s1 * 0xc)) + 8)));
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(*(u32*)((s2 + -0x1300))))) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
