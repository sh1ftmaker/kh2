// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f63a0 asm("D_004f63a0");
extern "C" u32 D_004f63a8 asm("D_004f63a8");

// 0x0016f7b0 func_0016f7b0
void func_0016f7b0() asm("func_0016f7b0");
void func_0016f7b0() {
    *(u32*)(&D_004f63a8) = 0;
    *(u32*)(&D_004f63a0) = 0;
    *(u32*)(((u32)&D_004f63a8 + 4)) = 0;
}
