// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00359150 asm("D_00359150");

// 0x0020ea48 func_0020ea48
void func_0020ea48(u8 a0, u8 a1, u8 a2) asm("func_0020ea48");
void func_0020ea48(u8 a0, u8 a1, u8 a2) {
    *(u8*)(&D_00359150) = a0;
    *(u8*)(((u32)&D_00359150 + 2)) = a2;
    *(u8*)(((u32)&D_00359150 + 1)) = a1;
}
