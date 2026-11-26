// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003486a0 asm("D_003486a0");
extern "C" u32 D_003486a4 asm("D_003486a4");
extern "C" void func_0013e2d8(u32, u32, u32) asm("func_0013e2d8");

// 0x0013e610 func_0013e610
u32 func_0013e610(u32 a0) asm("func_0013e610");
u32 func_0013e610(u32 a0) {
    u32 s0;
    u32 t6;
    u32 t5;
    s0 = *(u32*)(&D_003486a4);
    t6 = *(u32*)((s0 + 0x1fa4));
    *(u32*)((s0 + 0x1fa4)) = (t6 + -1);
    t5 = *(u32*)(((((t6 + -1) << 2) + s0) + 0x1f80));
    func_0013e2d8(s0 + (t5 * 0x380), a0, *(u32*)(&D_003486a0) + 0x20);
    return (s0 + (t5 * 0x380));
}
