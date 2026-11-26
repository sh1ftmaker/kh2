// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e348 asm("D_01d9e348");
extern "C" void func_001e01e8(u32, u32, u32) asm("func_001e01e8");

// 0x001e0230 func_001e0230
void func_001e0230(u32 a0, u32 a1) asm("_ZN3ryj3PAX6RebindEPvS1_");
void func_001e0230(u32 a0, u32 a1) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_01d9e348) : *(u32*)((s0 + 0x14))), (s0 = a0), ((s32)(a0) != 0)) {
        func_001e01e8(a0, a0, a1);
    }
    return;
}
