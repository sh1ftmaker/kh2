// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0023f848(u32) asm("func_0023f848");
extern "C" void func_002878c8(u32) asm("func_002878c8");

// 0x00287720 func_00287720
u32 func_00287720(u32 a0) asm("func_00287720");
u32 func_00287720(u32 a0) {
    func_002878c8(a0);
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(a0)) + 0x14))))(*(u32*)(a0));
    return func_0023f848(a0 + 0xc);
}
