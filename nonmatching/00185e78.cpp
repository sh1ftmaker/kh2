// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00185da8(u32) asm("func_00185da8");
extern "C" void func_001b7df0(u32, u32) asm("func_001b7df0");

// 0x00185e78 func_00185e78
void func_00185e78(u32 a0) asm("func_00185e78");
void func_00185e78(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_00185da8(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        if (((s32)(*(u32*)((s0 + 0x828))) == 0)) {
            continue;
        }
        func_001b7df0(*(u32*)((s0 + 0x828)), a0);
    }
    return;
}
