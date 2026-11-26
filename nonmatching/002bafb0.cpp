// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2a5e8 asm("D_01e2a5e8");
extern "C" u32 D_01e2a5f0 asm("D_01e2a5f0");
extern "C" u32 D_01e2a5f8 asm("D_01e2a5f8");

// 0x002bafb0 wtarget_002bafb0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002bafb0(u32 a0, u32 a1) asm("_Z16wtarget_002bafb0jjjj");
void lift_002bafb0(u32 a0, u32 a1) {
    u32 t4;
    u32 t6;
    u32 t5;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01e2a5e8) = 0;
            *(u32*)(((u32)&D_01e2a5e8 + 4)) = 0;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(&D_01e2a5f0) = 0;
                *(u32*)(((u32)&D_01e2a5f0 + 4)) = 0;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            t4 = (u32)&D_01e2a5f8;
            t6 = 0;
            t5 = (u32)&D_01e2a5f8;
            do {
                *(u32*)(((t5 + (t6 * 4)) + 0x400)) = t6;
                t6 = (t6 + 1);
            } while (((s32)(((s32)(t6) < (s32)(0x20))) != 0));
            *(u32*)((t4 + 0x480)) = 0x20;
        }
    }
    return;
}
