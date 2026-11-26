// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bf00 asm("D_01e2bf00");
extern "C" void func_002e73d8(u32) asm("func_002e73d8");

// 0x002e7518 wtarget_002e7518(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002e7518(u32 a0) asm("_Z16wtarget_002e7518jjjj");
void lift_002e7518(u32 a0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_01e2bf00) : *(u32*)(s0)), (s0 = a0), ((s32)(a0) != 0)) {
        func_002e73d8(a0);
    }
    return;
}
