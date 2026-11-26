// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 D_0035f5b4 asm("D_0035f5b4");
extern "C" f32 func_00276348() asm("func_00276348");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00276568() asm("func_00276568");
extern "C" u32 func_00276608(u32) asm("func_00276608");
extern "C" u32 func_00276620(u32) asm("func_00276620");
extern "C" u32 func_00276678() asm("func_00276678");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_002766b0(u32) asm("func_002766b0");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028afd0(u32, u32) asm("func_0028afd0");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_0029c958() asm("func_0029c958");
extern "C" void func_0029cdf8() asm("func_0029cdf8");
extern "C" void func_0029ea30() asm("func_0029ea30");

// 0x0029af20 func_0029af20
u32 func_0029af20() asm("_ZN2Tz5JmDic13SetupWorldSelEv");
u32 func_0029af20() {
    f32 fp;
    u32 s6;
    u32 loc_0;
    u32 s5;
    u32 t7;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 loc_20;
    u32 s7;
    u32 fp_1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s5_2;
    u32 s7_3;
    u32 v0;
    u32 s1;
    u32 s2_4;
    u32 s5_5;
    u32 t6_6;
    u8 t7_7;
    u32 s4_8;
    u32 v0_9;
    u32 s5_10;
    u32 s7_11;
    u32 s1_12;
    u32 s0;
    u32 v0_13;
    fp = func_00276348();
    s6 = func_002766d0();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    s5 = 0;
    t7 = (0 << 3);
    do {
        t4 = ((u32)&loc_0 + 0x10);
        t5 = 2;
        t6 = 3;
        t7_0 = (t7 + ((u32)&loc_0 + 0x10));
        do {
            *(u16*)((t7_0 + ((t6 - 3) * -2))) = t5;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        s5 = (s5 + 1);
        t7 = (s5 << 3);
    } while (((s32)(t7) != 0));
    loc_20 = (s6 + 0x4c8);
    s7 = (*(u32*)(&D_0035f3d4) + -1);
    func_00276e78();
    func_0028d8c0(s6, s7, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x5a, 0xffffffff, 0);
    func_00139620(s6);
    func_0028dcc0(s6, fp);
    func_0028d8c0(loc_20, s7, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x5f, 0xffffffff, 0);
    func_00139620(loc_20);
    func_0028dcc0(loc_20, fp);
    fp_1 = func_0023aa78(s6 + 0x18);
    s2 = 0;
    s3 = (*(u32*)(&D_0035f3d4) + 1);
    s4 = 0x60000008;
    s5_2 = 0;
    do {
        s7_3 = *(u32*)(&D_0035f3d4);
        func_00288d80(*(u32*)(&D_0035f200), s5_2, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)&loc_0 + 0x10, (u32)&loc_0 + 0x18);
        v0 = func_002891b8(*(u32*)(&D_0035f200), s5_2);
        func_00139620(v0);
        func_0028dcc0(v0, s6);
        func_00138c68(v0, 0, s2);
        *(u32*)((v0 + 0x1a4)) = s4;
        *(u32*)((v0 + 0x1ac)) = 3;
        func_001395f8(v0);
        func_0028d8c0((s6 + (s5_2 * 0x198)) + 0xa998, s3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0);
        func_0028dcc0((s6 + (s5_2 * 0x198)) + 0xa998, v0);
        s2 = (s2 + fp_1);
        s5_2 = (s5_2 + 1);
    } while (((s32)(((s32)(s5_2) < (s32)(0xa))) != 0));
    func_0029c958();
    s1 = 0;
    s2_4 = 0;
    s5_5 = 0;
    t6_6 = *(u32*)(&D_0035f5ac);
    do {
        t7_7 = (((s32)(*(u32*)(t6_6)) >> s5_5) & 1);
        if ((t7_7 != 0)) {
            if (((s32)(*(s8*)(func_00276568())) >= 0)) {
                if ((*(s8*)(func_00276568()) != 0xf)) {
                    if ((s5_5 != 0)) {
                        s2_4 = (((s5_5 + -1) ^ *(s8*)(func_00276568())) ? s2_4 : s1);
                    }
                }
            }
            s1 = (s1 + 1);
        }
        s5_5 = (s5_5 + 1);
        t6_6 = *(u32*)(&D_0035f5ac);
    } while (((s32)(((s32)(s5_5) < (s32)(0x13))) != 0));
    if (((s32)(*(u8*)(&D_0035f5b4)) != 0)) {
        if (((s32)(((s32)(s2_4) < (s32)((s1 + -0xa)))) != 0)) {
            s4_8 = s2_4;
            s5_5 = 0;
        } else {
            s4_8 = (((s32)((s1 + -0xa)) < (s32)(0)) ? 0 : (s1 + -0xa));
            s5_5 = (s2_4 - (((s32)((s1 + -0xa)) < (s32)(0)) ? 0 : (s1 + -0xa)));
        }
        *(u8*)(&D_0035f5b4) = 0;
        s4 = s4_8;
    } else {
        v0_9 = func_00287bc0();
        s5_10 = func_00276608(v0_9);
        s4 = func_00276620(v0_9);
        s5_5 = s5_10;
    }
    func_0028af90(*(u32*)(&D_0035f200), s1);
    func_002891f0(*(u32*)(&D_0035f200), s5_5, 0, 0xffffffff, 0xffffffff);
    func_0028afd0(*(u32*)(&D_0035f200), s4);
    func_0028b218(*(u32*)(&D_0035f200), 1);
    func_0028b248(*(u32*)(&D_0035f200), 0xa);
    s7_11 = *(u32*)(&D_0035f3d4);
    s1_12 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), *(u32*)(&D_0035f14c));
    s0 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f210)) + 0x28)), *(u32*)(&D_0035f148));
    v0_13 = func_00276678();
    loc_0 = 0;
    func_0028bae0(*(u32*)(&D_0035f214), s7_11, s1_12, s0, v0_13, ((s32)(s1) < (s32)(0xb)) ? 0xa : s1, 0xa, loc_20);
    func_0028be78(*(u32*)(&D_0035f214), s4);
    func_0029cdf8();
    func_0029ea30();
    func_002766b0(1);
    return func_00287cc0(0);
}
