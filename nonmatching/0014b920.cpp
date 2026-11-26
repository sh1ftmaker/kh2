// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036b0d0 asm("D_0036b0d0");

// 0x0014b920 func_0014b920
void func_0014b920(u32 a0) asm("func_0014b920");
void func_0014b920(u32 a0) {
    *(u64*)((a0 + 0x18)) = 0x40;
    *(u64*)(a0) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)((a0 + 8)) = 0xe;
    *(u64*)((a0 + 0x10)) = *(u64*)(&D_0036b0d0);
}
