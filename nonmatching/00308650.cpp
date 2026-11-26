// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003660d8 asm("D_003660d8");
extern "C" u32 D_01e357d4 asm("D_01e357d4");
extern "C" u32 func_00305350(u32, u32) asm("func_00305350");
extern "C" void func_003061d0(u32) asm("func_003061d0");

// 0x00308650 func_00308650
u32 func_00308650() asm("func_00308650");
u32 func_00308650() {
    u32 v0;
    func_003061d0(5);
    v0 = func_00305350(5, *(u32*)(&D_01e357d4));
    *(u32*)(&D_003660d8) = 0;
    return v0;
}
