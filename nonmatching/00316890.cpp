// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003678f8 asm("D_003678f8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_003167f8(u32) asm("func_003167f8");

// 0x00316890 func_00316890
u32 func_00316890(u32 a0) asm("func_00316890");
u32 func_00316890(u32 a0) {
    *(u32*)(a0) = (u32)&D_003678f8;
    func_003167f8(a0);
    return func_00106420(a0);
}
