// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347fb0 asm("D_00347fb0");
extern "C" u32 D_00347fd8 asm("D_00347fd8");

// 0x0013a820 wtarget_0013a820(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0013a820(u32 a0, u32 a1) asm("_Z16wtarget_0013a820jjjj");
void lift_0013a820(u32 a0, u32 a1) {
    u32 t5;
    u32 t6;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_00347fb0) = 0;
            *(u32*)(((u32)&D_00347fb0 + 4)) = 0;
            t5 = 3;
            t6 = (u32)&D_00347fb0;
            do {
                *(u32*)(((t6 + ((t5 - 3) * -8)) + 8)) = 0;
                *(u32*)(((t6 + ((t5 - 3) * -8)) + 0xc)) = 0;
                t5 = (t5 + -1);
            } while (((s32)(t5) >= 0));
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(&D_00347fd8) = 0;
                *(u32*)(((u32)&D_00347fd8 + 4)) = 0;
                *(u32*)(((u32)&D_00347fd8 + 8)) = 0;
                *(u32*)(((u32)&D_00347fd8 + 0xc)) = 0;
            }
        }
    }
    return;
}
