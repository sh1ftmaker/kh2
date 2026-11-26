// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60d50 asm("D_01c60d50");

// 0x001907e0 YS::TARGET::dup()
u32 lift_001907e0(u32 a0) asm("_ZN2YS6TARGET3dupEv");
u32 lift_001907e0(u32 a0) {
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    t7 = *(u32*)(((u32)&D_01c60d50 + 0xc00));
    t7_0 = (t7 + -1);
    *(u32*)(((u32)&D_01c60d50 + 0xc00)) = t7_0;
    t6 = (t7_0 << 2);
    t7_1 = *(u32*)(((t6 + (u32)&D_01c60d50) + 0xa00));
    t7_2 = (t7_1 * 0x14);
    t7_3 = (t7_2 + (u32)&D_01c60d50);
    *(u32*)(t7_3) = *(u32*)(a0);
    *(u32*)((t7_3 + 4)) = *(u32*)((a0 + 4));
    *(u32*)((t7_3 + 8)) = *(u32*)((a0 + 8));
    *(u32*)((t7_3 + 0xc)) = *(u32*)((a0 + 0xc));
    *(u32*)((t7_3 + 0x10)) = *(u32*)((a0 + 0x10));
    return t7_3;
}
