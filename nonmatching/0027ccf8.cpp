// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef6c asm("D_0035ef6c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373f08 asm("D_00373f08");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027d488(u32, u32) asm("func_0027d488");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x0027ccf8 func_0027ccf8
u32 func_0027ccf8() asm("_ZN2Tz8CmConfig10CreateListEv");
u32 func_0027ccf8() {
    u32 v0;
    u32 s6;
    u32 s7;
    u32 s5;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 fp;
    u32 loc_0;
    u32 loc_20;
    u32 loc_24;
    u32 s3_0;
    u32 fp_1;
    u32 s4;
    u32 s2_2;
    u32 s5_3;
    u32 s0;
    u32 s1_4;
    u32 t7;
    u32 t6;
    u32 s3_5;
    u32 t2;
    u32 s5_6;
    u32 s4_7;
    u32 s3_8;
    u32 s2_9;
    u32 s1_10;
    u32 s0_12;
    u32 v0_13;
    v0 = func_00257770();
    s6 = (*(u32*)(&D_0035f3d4) + -1);
    func_0028d8c0(v0, *(u32*)(&D_0035f3d4) + -2, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xe9, 0xea, 0);
    s7 = v0;
    s5 = 2;
    s3 = 0;
    s2 = 0x360000;
    s1 = 0x360000;
    fp = 0x360000;
    do {
        loc_0 = 0;
        func_0028d980(v0 + 0xd30, s6, *(u32*)((s1 + -0x1098)), *(u32*)((s2 + -0x109c)), *(u32*)((fp + -0xfc4)), 0x117, 0xffffffff, 0xffffffff);
        loc_20 = func_0023aa78(v0 + 0xd48);
        func_0028dcc0(v0 + 0xd30, s7);
        func_00138c68(v0 + 0xd30, 0, s3 * loc_20);
        func_00139620(v0 + 0xd30);
        func_00139688(v0 + 0xd30);
        *(u32*)((v0 + 0xee0)) = s5;
        s3 = (s3 + 1);
        v0 = (v0 + 0x1b4);
    } while (((s32)(((s32)(s3) < (s32)(9))) != 0));
    loc_24 = 0;
    s3_0 = 0;
    fp_1 = s7;
    do {
        s4 = 0;
        s2_2 = (fp_1 + 0x3610);
        do {
            loc_0 = 0;
            s5_3 = loc_24;
            func_0028d980(s2_2, s6, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(s16*)((u32)&D_00373f08), 0xffffffff, 0xffffffff);
            func_0028dcc0(s2_2, s7);
            s0 = func_0023aa78(s2_2 + 0x18);
            s1_4 = func_0023aa98(s2_2 + 0x18);
            func_00138c10(s2_2, *(u32*)(&D_0035ef6c));
            func_00138c68(s2_2, s0 * s4, s5_3);
            func_00139620(s2_2);
            func_00139688(s2_2);
            *(u32*)((s2_2 + 0x19c)) = s1_4;
            *(u32*)((s2_2 + 0x1a0)) = 0;
            *(u32*)((s2_2 + 0x1b0)) = 2;
            s2_2 = (s2_2 + 0x1b4);
            s4 = (s4 + 1);
        } while (((s32)(((s32)(s4) < (s32)(4))) != 0));
        loc_24 = (loc_24 + loc_20);
        fp_1 = (fp_1 + 0x6d0);
        s3_0 = (s3_0 + 1);
    } while (((s32)(((s32)(s3_0) < (s32)(9))) != 0));
    t7 = *(u16*)(&D_0035ef6c);
    t6 = ((u32)&loc_0 + 0x10);
    s3_5 = 3;
    do {
        *(u16*)(t6) = t7;
        s3_5 = (s3_5 + -1);
        t6 = (t6 + 2);
    } while (((s32)(s3_5) >= 0));
    t2 = ((u32)&loc_0 + 0x10);
    s5_6 = 0x360000;
    s4_7 = 0x360000;
    s3_8 = 0;
    s2_9 = 0x360000;
    s1_10 = 0x360000;
    do {
        func_00288d80(*(u32*)((s1_10 + -0xfe4)), s3_8, *(u32*)((s5_6 + -0x1098)), *(u32*)((s4_7 + -0x109c)), *(u32*)((s2_9 + -0xfc4)), 0xffffffff, t2, t2);
        func_00139620(func_002891b8(*(u32*)((s1_10 + -0xfe4)), s3_8));
        s0_12 = func_0027d488(s3_8, 0);
        v0_13 = func_0028dcc0(func_002891b8(*(u32*)((s1_10 + -0xfe4)), s3_8), s0_12);
        s3_8 = (s3_8 + 1);
        t2 = ((u32)&loc_0 + 0x10);
    } while (((s32)(((s32)(s3_8) < (s32)(9))) != 0));
    return v0_13;
}
