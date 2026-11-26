// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d44100 asm("D_01d44100");
extern "C" u32 D_01d44108 asm("D_01d44108");

// 0x001b1ab8 func_001b1ab8
void func_001b1ab8(u32 a0) asm("func_001b1ab8");
void func_001b1ab8(u32 a0) {
    u32 t7;
    u32 t6;
    u32 t4;
    u32 t4_0;
    u32 t4_1;
    u32 t6_2;
    t7 = (*(u32*)(((u32)&D_01d44108 + 0x2c0)) << 2);
    *(u32*)(((t7 + (u32)&D_01d44108) + 0x280)) = (((s32)((a0 - (u32)&D_01d44108)) >> 3) * 0xcccccccd);
    *(u32*)(((u32)&D_01d44108 + 0x2c0)) = (*(u32*)(((u32)&D_01d44108 + 0x2c0)) + 1);
    if ((a0 == *(u32*)(&D_01d44100))) {
        *(u32*)(&D_01d44100) = *(u32*)((a0 + 4));
        t4_1 = 0;
    } else {
        t6 = *(u32*)((*(u32*)(&D_01d44100) + 4));
        if ((t6 != a0)) {
            do {
                t4 = t6;
                t6 = *(u32*)((t6 + 4));
            } while ((t6 != a0));
            t4_0 = t4;
        } else {
            t4_0 = *(u32*)(&D_01d44100);
        }
        *(u32*)((t4_0 + 4)) = *(u32*)((a0 + 4));
        t4_1 = t4_0;
    }
    if ((a0 == *(u32*)(((u32)&D_01d44100 + 4)))) {
        t6_2 = *(u32*)(((u32)&D_01d44100 + 4));
        *(u32*)(((u32)&D_01d44100 + 4)) = t4_1;
    }
    *(u32*)((a0 + 4)) = 0;
    return;
}
