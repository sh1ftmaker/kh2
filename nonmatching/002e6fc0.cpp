// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_002e64b0(u32, u32) asm("func_002e64b0");

// 0x002e6fc0 func_002e6fc0
void func_002e6fc0(u32 a0, u32 a1) asm("_ZN2Ti3AfpC1EPv");
void func_002e6fc0(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 t7;
    u32 t6;
    u32 t7_1;
    u32 v0_2;
    u32 sp;
    u32 v0_3;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 4)) = 0;
    v0 = func_002e64b0(a1, a1);
    *(u32*)((a0 + 8)) = v0;
    s0 = (v0 << 6);
    v0_0 = func_001063f0(s0 + 0x10, func_001050c8());
    *(u32*)((v0_0 + 0xc)) = v0;
    if (((s32)(v0) != 0)) {
        t7 = (v0 + -1);
        t6 = 0xffffffff;
        t7_1 = (t7 + -1);
        v0_2 = (v0_0 + 0x10);
        do {
            t7_1 = (t7_1 + -1);
        } while ((t7_1 != t6));
        v0_3 = v0_2;
    } else {
        sp = (u32)frame;
        v0_3 = (v0_0 + 0x10);
    }
    *(u32*)((a0 + 4)) = v0_3;
    return;
}
