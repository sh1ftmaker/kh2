// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c7a0 asm("D_0034c7a0");
extern "C" void func_001656d0(u32, u32, u32) asm("func_001656d0");

// 0x001659b8 func_001659b8
u32 func_001659b8(u32 a0, u32 a1) asm("func_001659b8");
u32 func_001659b8(u32 a0, u32 a1) {
    u32 s0;
    u32 t7;
    u32 t7_0;
    s0 = *(u32*)(&D_0034c7a0);
    t7 = *(u32*)((s0 + 0x500));
    *(u32*)((s0 + 0x500)) = (t7 + -1);
    t7_0 = *(u32*)(((((t7 + -1) << 2) + s0) + 0x400));
    func_001656d0(s0 + (t7_0 << 4), a0, a1);
    return (s0 + (t7_0 << 4));
}
