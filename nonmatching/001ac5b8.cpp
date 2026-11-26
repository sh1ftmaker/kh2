// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350c50 asm("D_00350c50");
extern "C" u32 D_01c6ced0 asm("D_01c6ced0");

// 0x001ac5b8 func_001ac5b8
void func_001ac5b8(u32 a0) asm("_ZN2YS6WINDOWD2Ev");
void func_001ac5b8(u32 a0) {
    u32 t7;
    u32 t6;
    u32 t7_0;
    u32 t5;
    u32 t6_1;
    *(u32*)(a0) = (u32)&D_00350c50;
    t7 = *(u32*)(&D_01c6ced0);
    if ((a0 == t7)) {
        *(u32*)(&D_01c6ced0) = *(u32*)((a0 + 0x7c));
        t5 = 0;
    } else {
        t6 = *(u32*)((t7 + 0x7c));
        while ((t6 != a0)) {
            t7_0 = *(u32*)((t6 + 0x7c));
            t7 = t6;
            t6 = t7_0;
        }
        *(u32*)((t7 + 0x7c)) = *(u32*)((a0 + 0x7c));
        t5 = t7;
    }
    t6_1 = *(u32*)(((u32)&D_01c6ced0 + 4));
    if ((a0 == t6_1)) {
        *(u32*)(((u32)&D_01c6ced0 + 4)) = t5;
    }
    *(u32*)((a0 + 0x7c)) = 0;
    return;
}
