// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00190128(u32) asm("func_00190128");
extern "C" void func_001bc688(u32) asm("func_001bc688");

// 0x0019d4f8 func_0019d4f8
u32 func_0019d4f8(u32 a0) asm("_ZN2YS5RECOM4initEv");
u32 func_0019d4f8(u32 a0) {
    *(u32*)((a0 + 8)) = 0;
    *(u32*)((a0 + 4)) = 0;
    func_001bc688(a0 + 0x24);
    return func_00190128(a0 + 0xc);
}
