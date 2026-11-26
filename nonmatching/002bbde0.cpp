// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003616e8 asm("D_003616e8");
extern "C" u32 D_003616f4 asm("D_003616f4");
extern "C" u32 D_01e2aa80 asm("D_01e2aa80");
extern "C" u32 D_01e2aa88 asm("D_01e2aa88");
extern "C" u32 func_002bc798() asm("func_002bc798");
extern "C" void func_002bb0c8(u32) asm("func_002bb0c8");

// 0x002bbde0 func_002bbde0
u32 func_002bbde0() asm("func_002bbde0");
u32 func_002bbde0() {
    *(u32*)(&D_003616f4) = 0;
    *(u32*)(&D_003616e8) = 1;
    func_002bb0c8(0x64);
    *(u32*)(&D_01e2aa80) = 0;
    *(u32*)(((u32)&D_01e2aa80 + 4)) = 0;
    *(u32*)(((u32)&D_01e2aa88 + 4)) = 0;
    *(u32*)(&D_01e2aa88) = 0;
    return func_002bc798();
}
