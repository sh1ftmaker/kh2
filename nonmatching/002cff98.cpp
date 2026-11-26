// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ee08 asm("D_0034ee08");
extern "C" u32 func_00319fb0(u32) asm("func_00319fb0");
extern "C" void func_0019f9a8(u32) asm("func_0019f9a8");
extern "C" void func_001c0248(u32) asm("func_001c0248");

// 0x002cff98 func_002cff98
u32 func_002cff98(u32 a0) asm("func_002cff98");
u32 func_002cff98(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034ee08;
    func_0019f9a8(a0 + 0xa08);
    func_001c0248(a0 + 0xa50);
    return func_00319fb0(a0);
}
