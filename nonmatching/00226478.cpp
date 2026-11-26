// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035db00 asm("D_0035db00");
extern "C" u32 D_0035db14 asm("D_0035db14");
extern "C" u32 D_0035db18 asm("D_0035db18");
extern "C" u32 D_0035dce0 asm("D_0035dce0");
extern "C" u32 D_0035dce4 asm("D_0035dce4");
extern "C" u32 D_0035dce8 asm("D_0035dce8");
extern "C" u32 D_0035dcec asm("D_0035dcec");
extern "C" u32 D_0035dcf0 asm("D_0035dcf0");
extern "C" u32 D_0035dcf4 asm("D_0035dcf4");
extern "C" u32 D_0035dcf8 asm("D_0035dcf8");
extern "C" u32 D_0035dcfc asm("D_0035dcfc");
extern "C" u32 D_0035dd00 asm("D_0035dd00");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" void func_00134668(u32) asm("func_00134668");
extern "C" void func_001ddd10(u32) asm("func_001ddd10");
extern "C" void func_00225e70(u32, u32, u32) asm("func_00225e70");

// 0x00226478 sa::EVENT::fixAlloc()
void lift_00226478() asm("_ZN2sa5EVENT8fixAllocEv");
void lift_00226478() {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 t6;
    u32 t5;
    u32 s0;
    u32 sp;
    u32 v0_2;
    u32 v0_3;
    u32 t6_4;
    u32 t5_5;
    u32 s0_6;
    u32 v0_7;
    u32 v0_8;
    u32 t6_9;
    u32 t5_10;
    u32 s0_11;
    u32 v0_12;
    u32 v0_13;
    u32 t6_14;
    u32 t5_15;
    u32 s0_16;
    u32 v0_17;
    u32 v0_18;
    u32 s3;
    u32 s3_19;
    u32 s2;
    u32 s1;
    u32 v0_20;
    u32 v0_21;
    u32 t6_22;
    u32 t5_23;
    u32 v0_24;
    u32 t4;
    u32 t7;
    u32 t6_25;
    u32 t5_26;
    u32 v0_27;
    u32 v0_28;
    u32 t6_29;
    u32 t5_30;
    u32 v0_31;
    u32 s3_32;
    u32 s3_33;
    u32 s2_34;
    u32 s1_35;
    v0 = func_001050c8();
    if (((s32)(*(u32*)(&D_0035dce0)) == 0)) {
        v0_0 = func_001063f0(0x200, v0);
        v0_1 = v0_0;
        t6 = 0x7f;
        t5 = 0xffffffff;
        s0 = (u32)&D_0035dce0;
        do {
            *(u32*)(v0_0) = 0;
            t6 = (t6 + -1);
            v0_0 = (v0_0 + 4);
        } while ((t6 != t5));
        *(u32*)(s0) = v0_1;
    } else {
        sp = (u32)frame;
    }
    if (((s32)(*(u32*)(&D_0035dce4)) == 0)) {
        v0_2 = func_001063f0(0x400, v0);
        v0_3 = v0_2;
        t6_4 = 0x7f;
        t5_5 = 0xffffffff;
        s0_6 = (u32)&D_0035dce4;
        do {
            *(u32*)(v0_2) = t5_5;
            t6_4 = (t6_4 + -1);
            v0_2 = (v0_2 + 8);
        } while ((t6_4 != t5_5));
        *(u32*)(s0_6) = v0_3;
    }
    if (((s32)(*(u32*)(&D_0035dce8)) == 0)) {
        v0_7 = func_001063f0(0x200, v0);
        v0_8 = v0_7;
        t6_9 = 0x3f;
        t5_10 = 0xffffffff;
        s0_11 = (u32)&D_0035dce8;
        do {
            *(u32*)(v0_7) = 0;
            t6_9 = (t6_9 + -1);
            *(u32*)((v0_7 + 4)) = 0;
            v0_7 = (v0_7 + 8);
        } while ((t6_9 != t5_10));
        *(u32*)(s0_11) = v0_8;
    }
    if (((s32)(*(u32*)(&D_0035dcec)) == 0)) {
        v0_12 = func_001063f0(0x300, v0);
        v0_13 = v0_12;
        t6_14 = 0x3f;
        t5_15 = 0xffffffff;
        s0_16 = (u32)&D_0035dcec;
        do {
            *(u32*)(v0_12) = 0;
            t6_14 = (t6_14 + -1);
            *(u32*)((v0_12 + 4)) = 0;
            *(u32*)((v0_12 + 8)) = 0;
            v0_12 = (v0_12 + 0xc);
        } while ((t6_14 != t5_15));
        *(u32*)(s0_16) = v0_13;
    }
    if (((s32)(*(u32*)(&D_0035db18)) == 0)) {
        *(u32*)(&D_0035db14) = 0;
        *(u32*)(&D_0035dcf4) = 0;
        *(u32*)(&D_0035dcf0) = 0;
        *(u32*)(&D_0035dcf8) = 0;
        *(u32*)(&D_0035dcfc) = 0;
        *(u32*)(&D_0035dd00) = 0;
    } else {
        v0_17 = func_00170b30(*(u32*)(&D_0035db18));
        func_00225e70((u32)&D_0035db00, v0_17, *(u32*)(&D_0035db18));
        *(u32*)(&D_0035db14) = v0_17;
        v0_18 = func_001050d8(0x1384);
        *(u32*)(v0_18) = 0x60;
        s3 = (v0_18 + 4);
        s3_19 = s3;
        s2 = 0x5f;
        s1 = 0xffffffff;
        do {
            s2 = (s2 + -1);
            func_001ddd10(s3 + 0x10);
            *(u32*)((s3 + 4)) = s1;
            *(u16*)((s3 + 0x30)) = s1;
            s3 = (s3 + 0x34);
        } while ((s2 != s1));
        *(u32*)(&D_0035dcf4) = s3_19;
        v0_20 = func_001050d8(0x2a00);
        v0_21 = v0_20;
        t6_22 = 0xffffffff;
        t5_23 = 0x7f;
        do {
            *(u32*)((v0_20 + 0x10)) = t6_22;
            t5_23 = (t5_23 + -1);
            *(u32*)(v0_20) = t6_22;
            *(u32*)((v0_20 + 4)) = 0;
            *(u32*)((v0_20 + 0x14)) = 0;
            *(u32*)((v0_20 + 0x1c)) = 0;
            *(u8*)((v0_20 + 8)) = 0;
            *(u8*)((v0_20 + 0x20)) = 0;
            *(u8*)((v0_20 + 0x30)) = 0;
            v0_20 = (v0_20 + 0x54);
        } while ((t5_23 != t6_22));
        *(u32*)(&D_0035dcf0) = v0_21;
        v0_24 = func_001050d8(0x1010);
        *(u32*)((v0_24 + 0xc)) = 0x40;
        t4 = (v0_24 + 0x10);
        t7 = t4;
        t6_25 = 0xffffffff;
        t5_26 = 0x3f;
        do {
            *(u32*)(t7) = t6_25;
            t5_26 = (t5_26 + -1);
            *(u32*)((t7 + 4)) = t6_25;
            *(u32*)((t7 + 8)) = 0;
            t7 = (t7 + 0x40);
        } while ((t5_26 != t6_25));
        *(u32*)(&D_0035dcf8) = t4;
        v0_27 = func_001050d8(0xf00);
        v0_28 = v0_27;
        t6_29 = 0xffffffff;
        t5_30 = 0x5f;
        do {
            *(u32*)(v0_27) = t6_29;
            t5_30 = (t5_30 + -1);
            *(u32*)((v0_27 + 4)) = t6_29;
            *(u32*)((v0_27 + 8)) = 0;
            *(u8*)((v0_27 + 0x16)) = 0;
            *(u8*)((v0_27 + 0x17)) = 0;
            v0_27 = (v0_27 + 0x28);
        } while ((t5_30 != t6_29));
        *(u32*)(&D_0035dcfc) = v0_28;
        v0_31 = func_001063f0(0x2a10, v0);
        *(u32*)((v0_31 + 0xc)) = 0x60;
        s3_32 = (v0_31 + 0x10);
        s3_33 = s3_32;
        s2_34 = 0xffffffff;
        s1_35 = 0x5f;
        do {
            s1_35 = (s1_35 + -1);
            func_00134668(s3_32);
            s3_32 = (s3_32 + 0x70);
        } while ((s1_35 != s2_34));
        *(u32*)(&D_0035dd00) = s3_33;
    }
    return;
}
