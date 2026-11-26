// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003476f0 asm("D_003476f0");
extern "C" u32 func_00113668(u32) asm("func_00113668");
extern "C" void func_00117910(u32, u32) asm("func_00117910");
extern "C" void func_0018f028(u32) asm("func_0018f028");
extern "C" void func_001dc920(u32) asm("func_001dc920");

// 0x00117dd8 func_00117dd8
u32 func_00117dd8(u32 a0) asm("_ZN2kn6StitchD1Ev");
u32 func_00117dd8(u32 a0) {
    u8 frame[16];
    u32 s1;
    u32 t7;
    u32 t6;
    u32 t7_0;
    u32 sp;
    *(u32*)(a0) = (u32)&D_003476f0;
    s1 = 0;
    t7 = *(u32*)((a0 + 0x28));
    do {
        if (((s32)(*(u32*)(((a0 + (s1 * 0x40)) + 0x28))) != 0)) {
            func_001dc920(*(u32*)(((a0 + (s1 * 0x40)) + 0x28)));
        }
        func_00117910(a0, s1);
        s1 = (s1 + 1);
        t7 = ((s32)(s1) < (s32)(0x18));
    } while ((t7 != 0));
    if (((s32)(*(u32*)((a0 + 0x620))) != 0)) {
        func_0018f028(*(u32*)((a0 + 0x620)));
        *(u32*)((a0 + 0x620)) = 0;
    }
    if (((s32)((a0 + 0x20)) != 0)) {
        t6 = (a0 + 0x20);
        t7_0 = (a0 + 0x620);
        do {
            t7_0 = (t7_0 + -0x40);
        } while ((t6 != t7_0));
    } else {
        sp = (u32)frame;
    }
    return func_00113668(a0);
}
