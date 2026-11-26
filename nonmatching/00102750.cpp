// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00102730(u32) asm("func_00102730");

// 0x00102750 func_00102750
u32 func_00102750(u32 a0) asm("_ZN12TASK_MANAGER7destroyEv");
u32 func_00102750(u32 a0) {
    func_00102730(a0);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 4))))(a0, a0);
}
