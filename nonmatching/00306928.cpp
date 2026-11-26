// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00306928 func_00306928
void func_00306928(u32 a0) asm("func_00306928");
void func_00306928(u32 a0) {
    u32 v1;
    u32 a0_0;
    u32 v1_1;
    *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) + 1);
    v1 = (*(u32*)(a0) + 0x10);
    a0_0 = (*(u32*)((a0 + 0xc)) + 1);
    *(u32*)((a0 + 0xc)) = a0_0;
    v1_1 = (a0 + v1);
    if ((a0_0 == v1_1)) {
        *(u32*)((a0 + 0xc)) = (a0 + 0x10);
    }
    return;
}
