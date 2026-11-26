// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bfb0 asm("D_01e2bfb0");

// 0x002e98f0 wtarget_002e98f0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002e98f0(u32 a0, u32 a1) asm("_Z16wtarget_002e98f0jjjj");
void lift_002e98f0(u32 a0, u32 a1) {
    u32 t6;
    u32 t5;
    u32 t7;
    u32 t7_0;
    u32 t6_1;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            t6 = 3;
            t5 = 0xffffffff;
            t7 = (u32)&D_01e2bfb0;
            do {
                *(u32*)((((t7 + ((t6 - 3) * -0x20)) + 0x10) + 0xc)) = 0;
                t6 = (t6 + -1);
            } while ((t6 != t5));
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((u32)&D_01e2bfb0 != 0xfffffff0)) {
                t7_0 = ((u32)&D_01e2bfb0 + 0x90);
                t6_1 = ((u32)&D_01e2bfb0 + 0x10);
                do {
                    t7_0 = (t7_0 + -0x20);
                } while ((t7_0 != t6_1));
            }
        }
    }
    return;
}
