// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003660d8 asm("D_003660d8");
extern "C" void func_003059f0() asm("func_003059f0");
extern "C" void func_00308248() asm("func_00308248");

// 0x00308398 func_00308398
void func_00308398() asm("func_00308398");
void func_00308398() {
    if (((s32)(*(u32*)(&D_003660d8)) != 0)) {
        func_00308248();
    } else {
        func_003059f0();
    }
    return;
}
