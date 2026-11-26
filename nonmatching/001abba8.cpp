// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0023ade0(u32) asm("func_0023ade0");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");

// 0x001abba8 func_001abba8
u32 func_001abba8(u32 a0) asm("func_001abba8");
u32 func_001abba8(u32 a0) {
    u32 s0;
    s0 = (a0 + 0x14);
    func_0023acd8(s0);
    *(u32*)((s0 + 0x14c)) = *(u32*)((a0 + 0x10));
    *(u32*)((s0 + 0x148)) = *(u32*)((a0 + 0xc));
    return func_0023ade0(s0);
}
