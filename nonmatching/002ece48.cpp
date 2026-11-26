// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00195858(u32, u32) asm("func_00195858");

// 0x002ece48 func_002ece48
u32 func_002ece48(u32 a0, u32 a1) asm("func_002ece48");
u32 func_002ece48(u32 a0, u32 a1) {
    func_00195858(a1 + 0x110, 0x3f);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x24))))(a0, a1);
}
