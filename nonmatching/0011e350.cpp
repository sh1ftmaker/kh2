// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00132350(u32, u32) asm("func_00132350");

// 0x0011e350 ctarget_0011e350(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0011e350(u32 a0, u32 a1) asm("_Z16ctarget_0011e350jjjj");
void lift_0011e350(u32 a0, u32 a1) {
    u32 s0;
    while (((s32)(a1) != 0)) {
        s0 = func_00132350(a1, a1);
        ((void(*)(u32))(*(u32*)(*(u32*)(a1))))(a1);
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x10))) + 4))))(*(u32*)((a0 + 0x10)), a1);
        a1 = s0;
    }
    return;
}
