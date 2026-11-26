// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034af20 asm("D_0034af20");
extern "C" u32 D_0034af24 asm("D_0034af24");
extern "C" u32 D_0034af30 asm("D_0034af30");

// 0x0015c228 func_0015c228
void func_0015c228(u32 a0) asm("func_0015c228");
void func_0015c228(u32 a0) {
    if ((a0 == 0)) {
        *(u32*)(&D_0034af20) = 0;
        *(u32*)(&D_0034af24) = 0;
        return;
    } else {
        *(u32*)(&D_0034af20) = (a0 + *(u32*)(a0));
        *(u32*)(&D_0034af24) = (*(u32*)((a0 + 4)) / 0x68);
        *(u64*)(&D_0034af30) = 0;
        return;
    }
}
