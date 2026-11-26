// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001acd78(u32) asm("func_001acd78");

// 0x0031fd78 func_0031fd78
u32 func_0031fd78(u32 a0) asm("func_0031fd78");
u32 func_0031fd78(u32 a0) {
    func_001acd78(a0);
    return ((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
}
