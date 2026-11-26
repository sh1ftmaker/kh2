// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0017dbb8(u32) asm("func_0017dbb8");

// 0x0010c7f0 func_0010c7f0
u32 func_0010c7f0(u32 a0) asm("func_0010c7f0");
u32 func_0010c7f0(u32 a0) {
    func_0017dbb8(a0);
    return ((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0xb60))) + 0x14))))(*(u32*)((a0 + 0xb60)));
}
