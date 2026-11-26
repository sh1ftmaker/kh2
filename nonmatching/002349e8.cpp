// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035e36c asm("D_0035e36c");
extern "C" u32 D_0035e370 asm("D_0035e370");
extern "C" u32 D_01dae41c asm("D_01dae41c");
extern "C" u32 D_01dae420 asm("D_01dae420");

// 0x002349e8 func_002349e8
void func_002349e8() asm("func_002349e8");
void func_002349e8() {
    *(u32*)(&D_0035e370) = 0;
    *(u32*)(((u32)&D_01dae420 + 8)) = *(u32*)(((u32)&D_01dae420 + 4));
    if (((s32)(*(u32*)(&D_01dae41c)) != 0)) {
        ((void(*)(u32))(*(u32*)(&D_01dae41c)))(*(u32*)(&D_0035e36c));
    }
    return;
}
