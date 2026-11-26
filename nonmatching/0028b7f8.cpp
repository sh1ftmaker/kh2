// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3a0 asm("D_0035f3a0");
extern "C" u32 func_0023f820(u32) asm("func_0023f820");
extern "C" void func_0028b8a0(u32) asm("func_0028b8a0");

// 0x0028b7f8 func_0028b7f8
u32 func_0028b7f8(u32 a0) asm("func_0028b7f8");
u32 func_0028b7f8(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035f3a0;
    func_0028b8a0(a0);
    return func_0023f820(a0);
}
