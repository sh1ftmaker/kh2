// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01dad910 asm("D_01dad910");

// 0x00225298 func_00225298
void func_00225298() asm("func_00225298");
void func_00225298() {
    *(u32*)(&D_01dad910) = 0xffffffff;
    *(u32*)(((u32)&D_01dad910 + 4)) = 0xffffffff;
}
