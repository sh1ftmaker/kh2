// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bfa0 asm("D_01e2bfa0");
extern "C" u32 D_01e2bfa4 asm("D_01e2bfa4");

// 0x002e98b0 func_002e98b0
void func_002e98b0(u32 a0) asm("func_002e98b0");
void func_002e98b0(u32 a0) {
    u32 t6;
    u32 t5;
    u32 t7;
    t6 = *(u32*)(&D_01e2bfa4);
    *(u32*)(&D_01e2bfa4) = (t6 + -1);
    t5 = *(u32*)(&D_01e2bfa0);
    t7 = *(u32*)((t5 + 0x7f8));
    *(u32*)((((t7 << 2) + t5) + 0x780)) = ((s32)((a0 - t5)) >> 6);
    *(u32*)((t5 + 0x7f8)) = (t7 + 1);
}
