// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f018 asm("D_0035f018");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373298 asm("D_00373298");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_002632d0(u32) asm("func_002632d0");
extern "C" u32 func_002635d8(u32) asm("func_002635d8");
extern "C" u32 func_00263660(u32) asm("func_00263660");
extern "C" u32 func_002637e8(u32) asm("func_002637e8");
extern "C" u32 func_00281c30() asm("func_00281c30");
extern "C" u32 func_00281f30(u32) asm("func_00281f30");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0025f7d8() asm("func_0025f7d8");
extern "C" void func_00262af8() asm("func_00262af8");
extern "C" void func_002817d8(u32, u32, u32, u32, u32, u32, u32) asm("func_002817d8");
extern "C" void func_00281cf0(u32) asm("func_00281cf0");
extern "C" void func_00281e70(u32) asm("func_00281e70");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_00291068(u32, u32, u32, u32, u32, u32) asm("func_00291068");

// 0x00260808 func_00260808
u32 func_00260808() asm("_ZN2Tz6CmItem12SetupItemUseEv");
u32 func_00260808() {
    u32 loc_0;
    u32 t7;
    u32 s1;
    u32 t6;
    u32 t5;
    u32 t4;
    u32 s6;
    u32 s4;
    u32 fp;
    u32 loc_20;
    u32 loc_24;
    u32 loc_28;
    u32 s5;
    u32 s4_0;
    u32 s0;
    u32 v0;
    u32 s4_1;
    u32 s3;
    u32 s1_2;
    u32 v0_3;
    t7 = (0 << 3);
    s1 = 0;
    do {
        t7 = (t7 + ((u32)&loc_0 + 0x10));
        t6 = 3;
        t5 = 0x123;
        t4 = ((u32)&loc_0 + 0x10);
        s6 = func_00257770();
        s4 = 0;
        do {
            *(u16*)(t7) = t5;
            t6 = (t6 + -1);
            t7 = (t7 + 2);
        } while (((s32)(t6) >= 0));
        s1 = (s1 + 1);
        t7 = ((s32)(s1) < (s32)(2));
        t7 = (s1 << 3);
    } while (((s32)(t7) != 0));
    fp = *(u32*)(&D_0035f3d4);
    if (((s32)(func_00139d78(s6)) == 0)) {
        loc_20 = 0x360000;
        loc_24 = 0x360000;
        loc_28 = 0x360000;
        func_0028d8c0(s6, fp + -1, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), 0x128, 0x129, 0);
    } else {
        loc_20 = 0x360000;
        loc_24 = 0x360000;
        loc_28 = 0x360000;
    }
    if (((s32)(func_00139d78(s6 + 0xb350)) == 0)) {
        loc_0 = 0;
        func_0028d980(s6 + 0xb350, fp + -1, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), 0x131, 0x132, 0xffffffff);
    }
    func_002817d8(fp, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), 0, 0, 0);
    func_00281e70(s6 + 0xb350);
    func_0025f7d8();
    s5 = func_00257070(0xa);
    if (((s32)(func_00139d78(s6 + 0x660)) == 0)) {
        loc_0 = 0;
        func_0028d980(s6 + 0x660, fp, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), 0x124, 0xffffffff, 0xffffffff);
        s4_0 = func_00281f30(func_00257130());
        func_00139620(s6 + 0x660);
        func_0028dcc0(s6 + 0x660, s6);
        *(u32*)(((s6 + 0x660) + 0x198)) = ((s4_0 + (s5 * 0x50)) + 0x10);
        s4 = s4_0;
    }
    if ((func_00139d78(s6 + 0xd30) == 0)) {
        loc_0 = 0;
        func_0028d980(s6 + 0xd30, fp + 1, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), func_00257140(2), 0xffffffff, 0xffffffff);
        func_00139620(s6 + 0xd30);
        func_001395f8(s6 + 0xd30);
        func_0028dcc0(s6 + 0xd30, s6 + 0x660);
        s0 = func_0023aa18(s6 + 0x678);
        func_00138c68(s6 + 0xd30, s0, func_0023aa38(s6 + 0x678));
        *(u32*)(((s6 + 0xd30) + 0x198)) = (s4 + (s5 * 0x50));
        *(u32*)(((s6 + 0xd30) + 0x1b0)) = 1;
    }
    v0 = func_002570a0(0xa);
    s4_1 = (func_002635d8(v0) ? 2 : 1);
    if (((s32)(func_0028acc8(*(u32*)(&D_0035f01c))) == 0)) {
        if (((s32)(s4_1) != 0)) {
            s3 = (s6 + 0x5ef0);
            s1_2 = 0;
            do {
                func_00288d80(*(u32*)(&D_0035f01c), s1_2, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), 0xffffffff, (u32)&loc_0 + 0x10, (u32)&loc_0 + 0x18);
                v0_3 = func_002891b8(*(u32*)(&D_0035f01c), s1_2);
                *(u32*)((v0_3 + 0x188)) = 0xffffffff;
                func_00138c68(v0_3, 0, func_0023aa78(v0_3 + 0x18) * s1_2);
                func_00139620(v0_3);
                func_0028dcc0(v0_3, s6);
                loc_0 = 0;
                func_0028d980(s3, fp + 1, *(u32*)((loc_20 + -0x1098)), *(u32*)((loc_24 + -0x109c)), *(u32*)((loc_28 + -0xfc4)), func_00257140(0), 0xffffffff, 0xffffffff);
                func_00139620(s3);
                func_001395f8(s3);
                func_0028dcc0(s3, v0_3);
                s1_2 = (s1_2 + 1);
                *(u32*)((s3 + 0x198)) = func_00192048(*(u16*)((((func_002635d8(v0) ? s1_2 : (s1_2 + 1)) << 1) + (u32)&D_00373298)));
                s3 = (s3 + 0x1b4);
            } while (((s32)(((s32)((s1_2 + 1)) < (s32)(s4_1))) != 0));
        }
        func_002891f0(*(u32*)(&D_0035f01c), 0, 1, 0, 2);
    }
    func_00291068(*(u32*)(&D_0035f018), 0, *(u16*)(func_002632d0(v0)), s6 + 0xb350, 0xffffffff, 0);
    func_00262af8();
    if (((s32)(func_00281c30()) == 0)) {
        func_00281cf0(*(u16*)((func_002632d0(v0) + 0x14)));
    }
    return func_00287cc0(0);
}
