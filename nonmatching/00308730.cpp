// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e357e4 asm("D_01e357e4");
extern "C" u32 D_01e357ec asm("D_01e357ec");

// 0x00308730 func_00308730
void func_00308730(u32 a0) asm("func_00308730");
void func_00308730(u32 a0) {
    if (((s32)(a0) < 0)) {
        *(u32*)((((a0 & 0x7fffffff) * 0xc) + *(u32*)(&D_01e357e4))) = 0;
        return;
    } else {
        *(u32*)(((a0 * 0xc) + *(u32*)(&D_01e357ec))) = 0;
        return;
    }
}
