// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00181500(u32) asm("func_00181500");

// 0x002c22f0 func_002c22f0
u32 func_002c22f0(u32 a0) asm("_ZNK8worldmap3Key10getOpenNumEv");
u32 func_002c22f0(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 t7;
    u32 v0;
    s0 = (a0 + 4);
    s1 = 2;
    s2 = 0;
    t7 = *(u16*)((a0 + 4));
    do {
        s0 = (s0 + 4);
        if (((s32)(*(u16*)(s0)) != 0)) {
            v0 = func_00181500(*(u16*)(s0));
            t7 = (s2 + 1);
            s2 = (v0 ? t7 : s2);
        }
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return s2;
}
