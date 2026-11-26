// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00195858(u32, u32) asm("func_00195858");

// 0x002ecdf8 func_002ecdf8
u32 func_002ecdf8(u32 a0, u32 a1) asm("func_002ecdf8");
u32 func_002ecdf8(u32 a0, u32 a1) {
    func_00195858(a1 + 0x110, 0x3c);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x24))))(a0, a1);
}
