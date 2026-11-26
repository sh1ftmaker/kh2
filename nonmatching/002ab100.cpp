// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");

// 0x002ab100 func_002ab100
u32 func_002ab100(u32 a0) asm("func_002ab100");
u32 func_002ab100(u32 a0) {
    u32 t4;
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 t3;
    u32 t4_1;
    u32 v0_2;
    if (((s32)(a0) < 0)) {
        t4 = 0;
        t7 = (0 >> 5);
        do {
            t7_0 = ((t4 >> 5) << 2);
            t3 = (*(u32*)(&D_0035f610) + 0x88);
            t4_1 = (t4 + 1);
            if (((s32)(((u32)(0) < (u32)((*(u32*)((t7_0 + t3)) & (1 << (t4 & 0x1f)))))) != 0)) {
                v0 = ((u32)(0) < (u32)((*(u32*)((t7_0 + t3)) & (1 << (t4 & 0x1f)))));
                break;
            }
            v0_2 = ((u32)(0) < (u32)((*(u32*)((t7_0 + t3)) & (1 << (t4 & 0x1f)))));
            t4 = t4_1;
            t7 = ((s32)(t4_1) < (s32)(0x60));
            v0 = v0_2;
        } while ((t7 != 0));
        return v0;
    } else {
        return ((u32)(0) < (u32)((*(u32*)(((*(u32*)(&D_0035f610) + ((a0 >> 5) << 2)) + 0x88)) & (1 << (a0 & 0x1f)))));
    }
}
