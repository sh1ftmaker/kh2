// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00340ed0 asm("D_00340ed0");

// 0x0010a7d8 func_0010a7d8
void func_0010a7d8(u8 a0, u8 a1, u8 a2) asm("func_0010a7d8");
void func_0010a7d8(u8 a0, u8 a1, u8 a2) {
    *(u8*)(&D_00340ed0) = a0;
    *(u8*)(((u32)&D_00340ed0 + 2)) = a2;
    *(u8*)(((u32)&D_00340ed0 + 1)) = a1;
}
