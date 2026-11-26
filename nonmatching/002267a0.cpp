// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035db14 asm("D_0035db14");
extern "C" u32 D_0035dce0 asm("D_0035dce0");
extern "C" u32 D_0035dce4 asm("D_0035dce4");
extern "C" u32 D_0035dce8 asm("D_0035dce8");
extern "C" u32 D_0035dcec asm("D_0035dcec");
extern "C" u32 D_0035dcf0 asm("D_0035dcf0");
extern "C" u32 D_0035dcf4 asm("D_0035dcf4");
extern "C" u32 D_0035dcf8 asm("D_0035dcf8");
extern "C" u32 D_0035dcfc asm("D_0035dcfc");
extern "C" u32 D_0035dd00 asm("D_0035dd00");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" u32 func_00106450(u32) asm("func_00106450");
extern "C" u32 func_00170c00(u32) asm("func_00170c00");
extern "C" u32 func_002255f0() asm("func_002255f0");
extern "C" void func_001ddd88(u32) asm("func_001ddd88");

// 0x002267a0 sa::EVENT::fixFree()
u32 lift_002267a0() asm("_ZN2sa5EVENT7fixFreeEv");
u32 lift_002267a0() {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 a0_4;
    u32 s0;
    u32 v0_5;
    u32 v0_6;
    u32 a0_7;
    u32 s0_8;
    u32 t7;
    u32 v0_9;
    u32 sp;
    u32 v0_10;
    u32 a0_11;
    u32 s0_12;
    u32 t7_13;
    u32 v0_14;
    u32 v0_15;
    v0 = func_002255f0();
    if ((*(u32*)(&D_0035dce0) != 0)) {
        v0_0 = func_00106450(*(u32*)(&D_0035dce0));
        *(u32*)(&D_0035dce0) = 0;
        v0 = v0_0;
    }
    if ((*(u32*)(&D_0035dce4) != 0)) {
        v0_1 = func_00106450(*(u32*)(&D_0035dce4));
        *(u32*)(&D_0035dce4) = 0;
        v0 = v0_1;
    }
    if ((*(u32*)(&D_0035dce8) != 0)) {
        v0_2 = func_00106450(*(u32*)(&D_0035dce8));
        *(u32*)(&D_0035dce8) = 0;
        v0 = v0_2;
    }
    if (((s32)(*(u32*)(&D_0035dcec)) != 0)) {
        v0_3 = func_00106450(*(u32*)(&D_0035dcec));
        *(u32*)(&D_0035dcec) = 0;
        v0 = v0_3;
    }
    if (((s32)(*(u32*)(&D_0035dcf4)) != 0)) {
        a0_4 = *(u32*)(&D_0035dcf4);
        s0 = (*(u32*)(&D_0035dcf4) + (*(u32*)((*(u32*)(&D_0035dcf4) + -4)) * 0x34));
        while ((s0 = (s0 + -0x34)), (a0_4 != s0)) {
            a0_4 = (s0 + 0x10);
            func_001ddd88(a0_4);
            a0_4 = *(u32*)(&D_0035dcf4);
        }
        v0_5 = func_00105110(a0_4 + -4);
        *(u32*)(&D_0035dcf4) = 0;
        v0 = v0_5;
    }
    if (((s32)(*(u32*)(&D_0035dcf0)) != 0)) {
        v0_6 = func_00105110(*(u32*)(&D_0035dcf0));
        *(u32*)(&D_0035dcf0) = 0;
        v0 = v0_6;
    }
    if (((s32)(*(u32*)(&D_0035dcf8)) != 0)) {
        a0_7 = *(u32*)(&D_0035dcf8);
        s0_8 = 0x360000;
        t7 = (*(u32*)(&D_0035dcf8) + (*(u32*)((*(u32*)(&D_0035dcf8) + -4)) << 6));
        do {
            t7 = (t7 + -0x40);
        } while ((a0_7 != t7));
        v0_9 = func_00105110(a0_7 + -0x10);
        *(u32*)((s0_8 + -0x2308)) = 0;
        v0 = v0_9;
    } else {
        sp = (u32)frame;
    }
    if (((s32)(*(u32*)(&D_0035dcfc)) != 0)) {
        v0_10 = func_00105110(*(u32*)(&D_0035dcfc));
        *(u32*)(&D_0035dcfc) = 0;
        v0 = v0_10;
    }
    if (((s32)(*(u32*)(&D_0035dd00)) != 0)) {
        a0_11 = *(u32*)(&D_0035dd00);
        s0_12 = 0x360000;
        t7_13 = (*(u32*)(&D_0035dd00) + (*(u32*)((*(u32*)(&D_0035dd00) + -4)) * 0x70));
        do {
            t7_13 = (t7_13 + -0x70);
        } while ((a0_11 != t7_13));
        v0_14 = func_00106450(a0_11 + -0x10);
        *(u32*)((s0_12 + -0x2300)) = 0;
        v0 = v0_14;
    }
    if ((*(u32*)(&D_0035db14) != 0)) {
        v0_15 = func_00170c00(*(u32*)(&D_0035db14));
        *(u32*)(&D_0035db14) = 0;
        v0 = v0_15;
    }
    return v0;
}
