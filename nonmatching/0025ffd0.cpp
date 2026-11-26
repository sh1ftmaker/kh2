// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00263210 asm("D_00263210");
extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef6c asm("D_0035ef6c");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373280 asm("D_00373280");
extern "C" f32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257088(u32) asm("func_00257088");
extern "C" u32 func_002570f0() asm("func_002570f0");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00262650() asm("func_00262650");
extern "C" u32 func_00281f18(u32) asm("func_00281f18");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00257708(u32) asm("func_00257708");
extern "C" void func_0025f7d8() asm("func_0025f7d8");
extern "C" void func_002623c8() asm("func_002623c8");
extern "C" void func_00262820() asm("func_00262820");
extern "C" void func_00262a30() asm("func_00262a30");
extern "C" void func_002634d8(u32) asm("func_002634d8");
extern "C" void func_00263858(u32) asm("func_00263858");
extern "C" void func_002817d8(u32, u32, u32, u32, u32, u32, u32) asm("func_002817d8");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028afd0(u32, u32) asm("func_0028afd0");
extern "C" void func_0028b078(u32, u32, u32) asm("func_0028b078");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");

// 0x0025ffd0 func_0025ffd0
u32 func_0025ffd0() asm("_ZN2Tz6CmItem10SetupStockEv");
u32 func_0025ffd0() {
    u32 s3;
    u32 loc_0;
    u32 s4;
    u32 t7;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 v0;
    u32 loc_24;
    u32 loc_20;
    u32 s4_1;
    u32 s5;
    u32 t6_2;
    u32 v0_3;
    u32 s2;
    u32 s1;
    u32 s6;
    u32 s0;
    u32 s0_4;
    f32 fp;
    u32 s2_5;
    u32 s1_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    s3 = func_00257770();
    func_0028f4d8(1, 0xffffffff, 0);
    s4 = 0;
    t7 = ((u32)(0) < (u32)(0));
    do {
        t3 = ((u32)&loc_0 + 0x10);
        t4 = 0x130;
        t5 = (0x130 - t7);
        t6 = ((s4 << 3) + ((u32)&loc_0 + 0x10));
        t7_0 = 3;
        do {
            *(u16*)(t6) = t5;
            t6 = (t6 + 2);
            t7_0 = (t7_0 + -1);
        } while (((s32)(t7_0) >= 0));
        s4 = (s4 + 1);
        t7 = ((u32)(0) < (u32)(s4));
    } while (((s32)(t7) != 0));
    v0 = func_00256b68(1);
    func_0028d8c0(v0, 0x753d, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x125, 0x126, 0);
    *(u32*)(((v0 + 0x18) + 0xb8)) = (*(u32*)(((v0 + 0x18) + 0xb8)) | 8);
    func_002817d8(0x753f, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0, (u32)&D_00373280, 0);
    loc_24 = *(u32*)(&D_0035f3d4);
    *(u32*)(&D_0035f3d4) = 0x753e;
    func_002634d8(0xffffffff);
    loc_20 = func_00281f18(func_00257130());
    s4_1 = 0;
    s5 = (s3 + 0x87d0);
    t6_2 = 0x360000;
    do {
        func_00288d80(*(u32*)(&D_0035f01c), s4_1, *(u32*)(&D_0035ef68), *(u32*)((t6_2 + -0x109c)), *(u32*)(&D_0035f03c), 0xffffffff, (u32)&loc_0 + 0x10, (u32)&loc_0 + 0x18);
        v0_3 = func_002891b8(*(u32*)(&D_0035f01c), s4_1);
        func_00138c10(v0_3, 0x130);
        *(u32*)((v0_3 + 0x188)) = 0xffffffff;
        s2 = func_0023aa98(v0_3 + 0x18);
        s1 = func_0023aa78(v0_3 + 0x18);
        s6 = func_0023aa18(v0_3 + 0x18);
        s0 = func_0023aa38(v0_3 + 0x18);
        func_00138c68(v0_3, (s4_1 - (((s32)((s4_1 + (s4_1 >> 0x1f))) >> 1) << 1)) * s2, ((s32)((s4_1 + (s4_1 >> 0x1f))) >> 1) * s1);
        func_00139620(v0_3);
        if (((s32)(((s32)(s4_1) < (s32)(loc_20))) != 0)) {
            *(u32*)((v0_3 + 0x1b4)) = (u32)&D_00263210;
        }
        func_0028dcc0(v0_3, v0);
        func_0028d8c0(s5, 0x7540, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(u32*)(&D_0035ef6c), 0xffffffff, 0);
        func_0028dcc0(s5, v0_3);
        func_00138c68(s5, s6, s0);
        s4_1 = (s4_1 + 1);
        s5 = (s5 + 0x198);
        t6_2 = 0x360000;
    } while (((s32)(((s32)(s4_1) < (s32)(0x12))) != 0));
    *(u32*)(&D_0035f3d4) = loc_24;
    s0_4 = (loc_20 ? loc_20 : 1);
    fp = func_00256b68(1);
    s2_5 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f03c)), *(u32*)(&D_0035ef68));
    s1_6 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f03c)) + 0x28)), *(u32*)(&D_0035ef64));
    v0_7 = func_002570f0();
    loc_0 = 0;
    func_0028bae0(*(u32*)(&D_0035f04c), 0x753e, s2_5, s1_6, v0_7, ((s32)((s0_4 + (s0_4 >> 0x1f))) >> 1) + (s0_4 & 1), 9, fp);
    func_00263858(s0_4);
    v0_8 = func_00287bc0();
    func_002891f0(*(u32*)(&D_0035f01c), func_00257070(v0_8), 1, 0, 2);
    func_0028af90(*(u32*)(&D_0035f01c), s0_4);
    func_0028afd0(*(u32*)(&D_0035f01c), func_00257088(v0_8));
    func_0028b078(*(u32*)(&D_0035f01c), 2, 9);
    func_0028b218(*(u32*)(&D_0035f01c), 1);
    func_0028b248(*(u32*)(&D_0035f01c), 0x12);
    v0_9 = ((s32)(loc_20) == 0) ? ((func_0028af88(*(u32*)(&D_0035f01c)) | 0xc000) & 0xffffffef) : (func_0028af88(*(u32*)(&D_0035f01c)) | 0xc000);
    func_0028af18(*(u32*)(&D_0035f01c), v0_9);
    func_0025f7d8();
    func_00262820();
    func_00262a30();
    if (((s32)(loc_20) == 0)) {
        func_00257708(1);
    }
    if (((s32)(func_00262650()) == 0)) {
        func_002623c8();
    }
    return func_00287cc0(0);
}
