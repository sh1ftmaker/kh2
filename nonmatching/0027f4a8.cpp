// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_003740f8 asm("D_003740f8");
extern "C" u32 D_00374130 asm("D_00374130");
extern "C" u32 D_00374158 asm("D_00374158");
extern "C" u32 D_00374168 asm("D_00374168");
extern "C" u32 func_001041c0() asm("func_001041c0");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0027fd38() asm("func_0027fd38");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028b1b0(u32, u32) asm("func_0028b1b0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x0027f4a8 func_0027f4a8
u32 func_0027f4a8() asm("func_0027f4a8");
u32 func_0027f4a8() {
    u8 frame[48];
    u32 loc_0;
    u32 s2;
    u32 s4;
    u32 s1;
    u32 t4;
    u32 fp;
    u32 s0;
    u32 s3;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 loc_20;
    u32 s2_0;
    u32 s6_1;
    u32 t7_2;
    u32 s5_3;
    u32 loc_24;
    u32 fp_4;
    u32 s1_5;
    u32 s3_6;
    u32 s4_7;
    u32 s7_8;
    u32 s0_9;
    u32 s7_10;
    u32 sp;
    u32 s7_11;
    u32 sp_12;
    func_0028d8c0(*(u32*)(&D_0035f258), 0x7533, 1, 0, *(u32*)(&D_0035f250), 1, 0xffffffff, 0);
    *(u32*)(((*(u32*)(&D_0035f258) + 0x18) + 0xb8)) = (*(u32*)(((*(u32*)(&D_0035f258) + 0x18) + 0xb8)) | 8);
    s2 = 0;
    s4 = (u32)&D_00374130;
    do {
        s1 = 0;
        t4 = ((s2 << 1) + (u32)&D_003740f8);
        do {
            fp = 0x360000;
            u32 cse0 = (u32)&loc_0 + 0x10;
            s0 = cse0;
            s3 = 0x360000;
            s5 = 2;
            s6 = ((u32)&loc_0 + 0x18);
            s7 = (u32)&D_003740f8;
            t5 = *(u16*)(t4);
            t6 = 3;
            t7 = ((s1 << 3) + cse0);
            do {
                *(u16*)(t7) = t5;
                t6 = (t6 + -1);
                t7 = (t7 + 2);
            } while (((s32)(t6) >= 0));
            s1 = (s1 + 1);
            t4 = (t4 + 0x12);
        } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
        func_00288d80(*(u32*)((s3 + -0xdac)), s2, 1, 0, *(u32*)((fp + -0xdb0)), *(u16*)(s4), (u32)&loc_0 + 0x10, s6);
        func_00139620(func_002891b8(*(u32*)((s3 + -0xdac)), s2));
        *(u32*)((func_002891b8(*(u32*)((s3 + -0xdac)), s2) + 0x1b0)) = s5;
        s2 = (s2 + 1);
        s4 = (s4 + 2);
    } while (((s32)(((s32)(s2) < (s32)(9))) != 0));
    loc_20 = (*(u32*)(&D_0035f3d4) + 1);
    s2_0 = 0;
    s6_1 = 0;
    t7_2 = (u32)&D_00374168;
    do {
        if (((s32)(*(s8*)(t7_2)) < 0)) {
            if ((s2_0 != 2)) {
                s5_3 = func_0023aa18(func_002891b8(*(u32*)(&D_0035f254), s2_0) + 0x18);
                loc_24 = func_0023aa38(func_002891b8(*(u32*)(&D_0035f254), s2_0) + 0x18);
                fp_4 = func_0023aa98(func_002891b8(*(u32*)(&D_0035f254), s2_0) + 0x18);
                s1_5 = 0;
                s3_6 = (s6_1 * 0x1b4);
                s4_7 = 0x360000;
                s7_8 = (u32)&D_00374168;
                do {
                    loc_0 = 0;
                    func_0028d980(*(u32*)((s4_7 + -0xda4)) + s3_6, loc_20, 1, 0, *(u32*)(&D_0035f250), 0x1b, 0xffffffff, 0xffffffff);
                    func_0028dcc0(*(u32*)((s4_7 + -0xda4)) + s3_6, func_002891b8(*(u32*)(&D_0035f254), s2_0));
                    func_00139620(*(u32*)((s4_7 + -0xda4)) + s3_6);
                    func_00138c68(*(u32*)((s4_7 + -0xda4)) + s3_6, s5_3, loc_24);
                    func_001395f8(*(u32*)((s4_7 + -0xda4)) + s3_6);
                    s0_9 = (*(u32*)((s4_7 + -0xda4)) + s3_6);
                    *(u32*)((s0_9 + 0x198)) = func_00192048(*(u16*)(((((((s32)((s6_1 + (s6_1 >> 0x1f))) >> 1) << 1) + s1_5) << 1) + (u32)&D_00374158)));
                    *(u32*)(((*(u32*)((s4_7 + -0xda4)) + s3_6) + 0x1b0)) = 2;
                    s1_5 = (s1_5 + 1);
                    s3_6 = (s3_6 + 0x1b4);
                    s5_3 = (s5_3 + fp_4);
                    s6_1 = (s6_1 + 1);
                } while (((s32)(((s32)(s1_5) < (s32)(2))) != 0));
                s3 = s3_6;
                s7_10 = s7_8;
            } else {
                s7_10 = (u32)&D_00374168;
                sp = (u32)frame;
            }
            s7_11 = s7_10;
            sp_12 = sp;
        } else {
            s7_11 = (u32)&D_00374168;
            sp_12 = (u32)frame;
        }
        s2_0 = (s2_0 + 1);
        t7_2 = (s2_0 + s7_11);
    } while (((s32)(t7_2) != 0));
    func_0028af28(*(u32*)(&D_0035f254), 0x20);
    if ((func_001041c0() != 3)) {
        func_0028b1b0(*(u32*)(&D_0035f254), 0x40);
    }
    func_0027fd38();
    func_002891f0(*(u32*)(&D_0035f254), 0, 1, 0, 0xffffffff);
    return func_00287bd0(0, 0);
}
