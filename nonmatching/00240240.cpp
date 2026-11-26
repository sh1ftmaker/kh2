// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00371698 asm("D_00371698");
extern "C" u32 func_002ff2e8(u32, u32) asm("func_002ff2e8");
extern "C" u32 func_002ff3fc(u32) asm("func_002ff3fc");
extern "C" void func_00240118(u32, u32, u32) asm("func_00240118");

// 0x00240240 func_00240240
u32 func_00240240(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz5MCard16GetFullPathFnameEPcii");
u32 func_00240240(u32 a0, u32 a1, u32 a2) {
    u8 frame[80];
    u32 s4;
    u32 s2;
    u32 v0_0;
    func_002ff2e8((u32)frame, (u32)&D_00371698);
    func_00240118((u32)frame + func_002ff3fc((u32)frame), a1, a2);
    s4 = 1;
    s2 = func_002ff3fc((u32)frame);
    do {
        v0_0 = func_002ff2e8(a0, (u32)frame);
        a0 = (a0 + s2);
        s4 = (s4 + -1);
    } while (((s32)(s4) >= 0));
    return v0_0;
}
