// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00311740 asm("D_00311740");
extern "C" u32 D_00367470 asm("D_00367470");
extern "C" void func_003052d0(u32, u32) asm("func_003052d0");

// 0x00311218 func_00311218
u32 func_00311218(u32 a0) asm("func_00311218");
u32 func_00311218(u32 a0) {
    *(u32*)(&D_00367470) = a0;
    func_003052d0(1, (u32)&D_00311740);
    func_003052d0(2, (u32)&D_00311740);
    func_003052d0(3, (u32)&D_00311740);
    return a0;
}
