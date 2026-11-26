// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00124748(u32, u32) asm("func_00124748");

// 0x001241b8 kn::ModelMulti::setDisplayFlag(char*, short*)
void lift_001241b8(u32 a0, u32 a1, u32 a2) asm("_ZN2kn10ModelMulti14setDisplayFlagEPcPs");
void lift_001241b8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 v0;
    u32 s2;
    u32 v0_0;
    u32 sp;
    v0 = func_00124748(a0, 0);
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x34))))(v0, a1, a2);
    if (((s32)(((s32)(1) < (s32)(*(u32*)((a0 + 0x10))))) != 0)) {
        s2 = 1;
        do {
            v0_0 = func_00124748(a0, 1);
            ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(v0_0) + 0x34))))(v0_0, a1 + *(u32*)(((a0 + ((s2 - 1) * 4)) + 0x20)), a2);
            s2 = (s2 + 1);
        } while (((s32)(((s32)(s2) < (s32)(*(u32*)((a0 + 0x10))))) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
