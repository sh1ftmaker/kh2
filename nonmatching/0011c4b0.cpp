// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0011d440(u32) asm("func_0011d440");

// 0x0011c4b0 func_0011c4b0
u32 func_0011c4b0(u32 a0) asm("func_0011c4b0");
u32 func_0011c4b0(u32 a0) {
    func_0011d440(a0);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x14))) + 0x2c))))(*(u32*)((a0 + 0x14)), a0);
}
