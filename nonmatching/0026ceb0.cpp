// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eeb8 asm("D_0035eeb8");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f034 asm("D_0035f034");
extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 D_0037383c asm("D_0037383c");
extern "C" u32 D_00373840 asm("D_00373840");
extern "C" u32 D_00373848 asm("D_00373848");
extern "C" u32 D_00373858 asm("D_00373858");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001a8c10(u32, u32) asm("func_001a8c10");
extern "C" u32 func_001a8c78(u32, u32) asm("func_001a8c78");
extern "C" u32 func_001d6e60() asm("func_001d6e60");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_00293bc0() asm("func_00293bc0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_002571e0(u32) asm("func_002571e0");
extern "C" void func_00257388(u32, u32) asm("func_00257388");
extern "C" void func_0026d208() asm("func_0026d208");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x0026ceb0 func_0026ceb0
u32 func_0026ceb0() asm("func_0026ceb0");
u32 func_0026ceb0() {
    u32 s5;
    u32 fp;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s6;
    u32 s7;
    u32 loc_0;
    u32 s1_0;
    u32 fp_1;
    u32 s0_2;
    u32 s1_3;
    u32 s2_4;
    u32 s3_5;
    u32 s4_6;
    u32 s5_7;
    u32 s6_8;
    u32 s7_9;
    u32 s0_10;
    u32 v0;
    u32 s0_11;
    u32 v0_12;
    u32 s1_13;
    u32 v0_14;
    u32 v0_15;
    u32 v0_16;
    u32 s2_17;
    u32 s2_18;
    u32 s0_19;
    u32 v0_20;
    u32 v0_21;
    func_00257388(0x846d, 1);
    func_002571e0(0);
    s5 = *(u32*)(&D_0035f034);
    fp = 0x360000;
    s0 = 0;
    s1 = func_0023aa78(*(u32*)(&D_0035f034) + 0x18);
    s2 = 0x360000;
    s3 = (u32)&D_00373848;
    s4 = 2;
    s6 = 2;
    s7 = 0x360000;
    do {
        loc_0 = 0;
        func_0028d980((*(u32*)((s2 + -0xf0c)) + s0) + 0xee8, 0x7547, *(u32*)(&D_0035ef68), *(u32*)((fp + -0x109c)), *(u32*)((s7 + -0xfc4)), *(s16*)(s3), 0xffffffff, 0xffffffff);
        func_00138c68((*(u32*)((s2 + -0xf0c)) + s0) + 0xee8, 0, s1);
        *(u32*)(((*(u32*)((s2 + -0xf0c)) + s0) + 0x1098)) = s6;
        func_0028dcc0((*(u32*)((s2 + -0xf0c)) + s0) + 0xee8, s5);
        s1_0 = (s1 + func_0023aa78((*(u32*)((s2 + -0xf0c)) + s0) + 0xf00));
        s0 = (s0 + 0x1b4);
        s1 = s1_0;
        s3 = (s3 + 2);
        s4 = (s4 + -1);
    } while (((s32)(s4) >= 0));
    fp_1 = 0x360000;
    s0_2 = 0x51c;
    s1_3 = 0;
    s2_4 = 0x360000;
    s3_5 = ((u32)&D_00373848 + 6);
    s4_6 = 3;
    s5_7 = 2;
    s6_8 = 0x360000;
    s7_9 = 0x360000;
    do {
        loc_0 = 0;
        func_0028d980((*(u32*)((s2_4 + -0xf0c)) + s0_2) + 0xee8, 0x7547, *(u32*)((fp_1 + -0x1098)), *(u32*)((s7_9 + -0x109c)), *(u32*)((s6_8 + -0xfc4)), *(s16*)(s3_5), 0xffffffff, (s4_6 ^ 3) ? *(u32*)(&D_00373840) : *(u32*)(&D_0037383c));
        func_0028dcc0((*(u32*)((s2_4 + -0xf0c)) + s0_2) + 0xee8, (*(u32*)((s2_4 + -0xf0c)) + s1_3) + 0xee8);
        *(u32*)(((*(u32*)((s2_4 + -0xf0c)) + s0_2) + 0x1098)) = s5_7;
        s0_2 = (s0_2 + 0x1b4);
        s1_3 = (s1_3 + 0x1b4);
        s3_5 = (s3_5 + 2);
        s4_6 = (s4_6 + 1);
    } while (((s32)(((s32)(s4_6) < (s32)(5))) != 0));
    func_0026d208();
    *(u32*)((*(u32*)(&D_0035f0f4) + 0x1080)) = (*(u32*)(&D_0035f0f4) + 0x176c);
    *(u32*)((*(u32*)(&D_0035f0f4) + 0x1234)) = (*(u32*)(&D_0035f0f4) + 0x17ec);
    if ((*(u32*)(&D_0035eeb8) == 2)) {
        s0_10 = (*(u32*)(&D_0035f0f4) + 0x1250);
        v0 = func_00192048(0xcc69);
        *(u32*)((s0_10 + 0x198)) = v0;
        v0_21 = v0;
    } else {
        s0_11 = *(u32*)(&D_0035f0f4);
        v0_12 = func_00293bc0();
        s1_13 = 0;
        v0_14 = v0_12;
        do {
            if (((s32)(s1_13) != 0)) {
                v0_15 = func_001a8c78(v0_12, s1_13);
                if (((s32)(v0_15) != 0)) {
                    v0_16 = func_001a8c10(v0_12, s1_13);
                    if ((v0_16 == 0xf)) {
                        s2_17 = *(u16*)(((v0_16 << 1) + (u32)&D_00373858));
                        s2_18 = (func_001d6e60() ? 0xcc9f : s2_17);
                    } else {
                        s2_18 = *(u16*)(((v0_16 << 1) + (u32)&D_00373858));
                    }
                    s0_19 = (*(u32*)(&D_0035f0f4) + 0x1250);
                    v0_20 = func_00192048(s2_18);
                    *(u32*)((s0_19 + 0x198)) = v0_20;
                    v0_15 = v0_20;
                }
                v0_14 = v0_15;
            }
            s1_13 = (s1_13 + 1);
        } while (((s32)(((s32)(s1_13) < (s32)(4))) != 0));
        v0_21 = v0_14;
    }
    return v0_21;
}
