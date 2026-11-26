// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036616c asm("D_0036616c");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_0030a278() asm("func_0030a278");

// 0x0030a2d0 func_0030a2d0
u32 func_0030a2d0() asm("func_0030a2d0");
u32 func_0030a2d0() {
    func_0030a278();
    func_00305660(*(u32*)(&D_0036616c));
    return 0;
}
