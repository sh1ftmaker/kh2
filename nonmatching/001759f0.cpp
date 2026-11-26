// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00198510(u32) asm("func_00198510");

// 0x001759f0 func_001759f0
u32 func_001759f0(u32 a0) asm("_ZN2YS5PARTY16_OVR_check_leaveEv");
u32 func_001759f0(u32 a0) {
    u32 s1;
    u32 t7;
    u32 t7_0;
    if (((s32)(func_00198510(a0)) != 0)) {
        s1 = 0;
        t7 = *(u32*)((a0 + 0xaf8));
        do {
            if (((s32)(*(u32*)(((a0 + (s1 * 4)) + 0xaf8))) != 0)) {
                if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)(((a0 + (s1 * 4)) + 0xaf8))) + 0x24))))(*(u32*)(((a0 + (s1 * 4)) + 0xaf8)))) == 0)) {
                    return 0;
                }
            }
            s1 = (s1 + 1);
            t7 = ((s32)(s1) < (s32)(2));
        } while ((t7 != 0));
        t7_0 = 1;
    } else {
        t7_0 = 0;
    }
    return t7_0;
}
