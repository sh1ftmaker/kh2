// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bfa0 asm("D_01e2bfa0");
extern "C" u32 D_01e2bfa4 asm("D_01e2bfa4");
extern "C" void func_002e93a0(u32) asm("func_002e93a0");

// 0x002e9850 func_002e9850
u32 func_002e9850() asm("func_002e9850");
u32 func_002e9850() {
    u32 t6;
    u32 s0;
    u32 t7;
    u32 t7_0;
    t6 = *(u32*)(&D_01e2bfa4);
    *(u32*)(&D_01e2bfa4) = (t6 + 1);
    s0 = *(u32*)(&D_01e2bfa0);
    t7 = *(u32*)((s0 + 0x7f8));
    *(u32*)((s0 + 0x7f8)) = (t7 + -1);
    t7_0 = *(u32*)(((((t7 + -1) << 2) + s0) + 0x780));
    func_002e93a0(s0 + (t7_0 << 6));
    return (s0 + (t7_0 << 6));
}
