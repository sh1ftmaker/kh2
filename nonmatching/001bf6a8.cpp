// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x001bf6a8 func_001bf6a8
void func_001bf6a8() asm("_ZN2YS8PRIZEBOX8ClearAllEv");
void func_001bf6a8() {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_001b9bc8(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        if (((s32)((*(u32*)((s0 + 0x588)) & 0x40000)) == 0)) {
            continue;
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 0x28))))(v0);
    }
    return;
}
