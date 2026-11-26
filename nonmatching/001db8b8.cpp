// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001db8b8 func_001db8b8
void func_001db8b8(u32 a0, u32 a1) asm("func_001db8b8");
void func_001db8b8(u32 a0, u32 a1) {
    u32 t7;
    u32 t6;
    t7 = *(u32*)((a0 + 0x14));
    t6 = *(u32*)((a0 + 8));
    *(u32*)(((t6 << 2) + *(u32*)((a0 + 0x10)))) = ((a1 - *(u32*)((a0 + 0xc))) / t7);
    *(u32*)((a0 + 8)) = (t6 + 1);
    return;
}
