// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc9e0(u32, u32) asm("func_001dc9e0");

// 0x002e9610 func_002e9610
void func_002e9610(u32 a0, u32 a1) asm("_ZN2Ts5FLARE7set_posERKN2kn7FVectorE");
void func_002e9610(u32 a0, u32 a1) {
    u32 v0;
    if ((a0 != a1)) {
        *(Q16*)(a0) = *(Q16*)(a1);
    }
    if (((a0 + 0x20) != a1)) {
        *(Q16*)((a0 + 0x20)) = *(Q16*)(a1);
    }
    if (((s32)(*(u32*)((a0 + 0x3c))) != 0)) {
        if ((func_001dc9e0(*(u32*)((a0 + 0x3c)), a1) != 0)) {
            v0 = func_001dc5f8(*(u32*)((a0 + 0x3c)));
            if ((v0 != a1)) {
                *(Q16*)(v0) = *(Q16*)(a1);
            }
        }
    }
    return;
}
