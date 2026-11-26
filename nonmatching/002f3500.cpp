// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003767d0 asm("D_003767d0");
extern "C" void func_002f3c28(u32) asm("func_002f3c28");
extern "C" void func_003080d0(u32, u32, u32) asm("func_003080d0");

// 0x002f3500 func_002f3500
u32 func_002f3500(u32 a0, u32 a1, u32 a2) asm("func_002f3500");
u32 func_002f3500(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 v0;
    u32 v0_0;
    if (((s32)(((u32)(*(u32*)((a0 + 0x10))) < (u32)(a1))) != 0)) {
        s0 = ((a2 ? a2 : 0x1000000) + -1);
        do {
            if (((s32)(s0) < 0)) {
                func_003080d0((u32)&D_003767d0, a1, a2);
                func_002f3c28(a0);
            }
            s0 = (s0 + -1);
            v0 = ((u32)(*(u32*)((a0 + 0x10))) < (u32)(a1));
        } while (((s32)(v0) != 0));
        v0_0 = v0;
    } else {
        v0_0 = ((u32)(*(u32*)((a0 + 0x10))) < (u32)(a1));
    }
    return v0_0;
}
