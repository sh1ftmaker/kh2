// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 _ZN2Tz8JmPuzzle8DrawMessEiijjPN2dk13SpriteMessageE asm("_ZN2Tz8JmPuzzle8DrawMessEiijjPN2dk13SpriteMessageE");
extern "C" f32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192b80(u32) asm("func_00192b80");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00276678() asm("func_00276678");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" u32 func_002a9d68() asm("func_002a9d68");
extern "C" u32 func_002b3b60(u32) asm("func_002b3b60");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00276690(u32) asm("func_00276690");
extern "C" void func_002766b0(u32) asm("func_002766b0");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028afd0(u32, u32) asm("func_0028afd0");
extern "C" void func_0028b1e8(u32, u32) asm("func_0028b1e8");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002b1a00() asm("func_002b1a00");

// 0x002b01d8 func_002b01d8
u32 func_002b01d8() asm("_ZN2Tz8JmPuzzle13SetupTutorialEv");
u32 func_002b01d8() {
    u32 s6;
    f32 fp;
    u32 v0;
    u32 loc_24;
    u32 loc_0;
    u32 t7;
    u32 t5;
    u32 t6;
    u32 t4;
    u32 t3;
    u32 t7_0;
    u32 s7;
    u32 loc_20;
    u32 v0_1;
    u32 s0;
    u32 s0_2;
    u32 s0_3;
    u32 s3;
    u32 s1;
    u32 s0_4;
    u32 v0_5;
    s6 = func_00276348();
    fp = func_002766d0();
    v0 = func_00287bc0();
    loc_24 = v0;
    if ((v0 != 0x1f)) {
        if (((s32)(func_0028f930(1)) == 0)) {
            func_0028f4d8(1, func_002b3b60(0), 0);
        }
    }
    t7 = (0 << 3);
    t5 = 0;
    do {
        t6 = 3;
        t4 = 2;
        t3 = ((u32)&loc_0 + 0x10);
        t7_0 = (t7 + ((u32)&loc_0 + 0x10));
        do {
            *(u16*)((t7_0 + ((t6 - 3) * -2))) = t4;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        t5 = (t5 + 1);
        t7 = (t5 << 3);
    } while (((s32)(t7) != 0));
    s7 = *(u32*)(&D_0035f3d4);
    func_00276e78();
    func_0028d8c0(fp, s7 + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x61, 0xffffffff, 0);
    func_00139620(fp);
    func_0028dcc0(fp, s6);
    func_0028d8c0(fp + 0x4c8, s7 + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x64, 0xffffffff, 0);
    func_00139620(fp + 0x4c8);
    func_0028dcc0(fp + 0x4c8, s6);
    loc_20 = 1;
    func_00288d80(*(u32*)(&D_0035f200), 0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)&loc_0 + 0x10, (u32)&loc_0 + 0x18);
    v0_1 = func_002891b8(*(u32*)(&D_0035f200), 0);
    func_00139620(v0_1);
    func_0028dcc0(v0_1, fp);
    *(u32*)((v0_1 + 0x1a4)) = 0x60000008;
    *(u32*)((v0_1 + 0x1ac)) = 3;
    func_001395f8(v0_1);
    *(u32*)((v0_1 + 0x1b4)) = (u32)&_ZN2Tz8JmPuzzle8DrawMessEiijjPN2dk13SpriteMessageE;
    loc_0 = 0;
    s0 = (*(u32*)(&D_0035f634) + 0x5610);
    func_0028d980(*(u32*)(&D_0035f634) + 0x5610, s7, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x62, 0xffffffff, 0xffffffff);
    *(u32*)((s0 + 0x198)) = func_00192048(0x4fc5);
    func_00139620(s0);
    func_0028dcc0(s0, s6);
    *(u32*)((s0 + 0x1a4)) = 0x60000008;
    *(u32*)((s0 + 0x1ac)) = 3;
    func_001395f8(s0);
    *(u32*)((s0 + 0x1b0)) = 2;
    s0_2 = *(u32*)(&D_0035f638);
    *(u16*)((s0_2 + 0x28)) = func_0023aa78(fp + 0x18);
    s0_3 = *(u32*)(&D_0035f638);
    *(u16*)((s0_3 + 0x2a)) = func_00192b80(func_00192048(0x4f4a));
    loc_20 = (((s32)(*(s16*)((*(u32*)(&D_0035f638) + 0x2a))) < (s32)(0xa)) ? loc_20 : (*(s16*)((*(u32*)(&D_0035f638) + 0x2a)) + -8));
    func_0028af90(*(u32*)(&D_0035f200), loc_20);
    func_002891f0(*(u32*)(&D_0035f200), 0, 0, 0xffffffff, 0xffffffff);
    func_0028afd0(*(u32*)(&D_0035f200), 0);
    s3 = *(u32*)(&D_0035f3d4);
    s1 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), *(u32*)(&D_0035f14c));
    s0_4 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f210)) + 0x28)), *(u32*)(&D_0035f148));
    loc_0 = 0;
    func_0028bae0(*(u32*)(&D_0035f214), s3, s1, s0_4, func_00276678(), *(s16*)((*(u32*)(&D_0035f638) + 0x2a)), 9, fp + 0x4c8);
    func_0028be78(*(u32*)(&D_0035f214), 0);
    v0_5 = func_002a9d68();
    if ((loc_24 == 0x1f) || ((s32)((*(u16*)((v0_5 + 0x1e6)) & 1)) != 0)) {
        func_0028af18(*(u32*)(&D_0035f200), func_0028af88(*(u32*)(&D_0035f200)) & 0xffffffef);
    }
    if (((s32)(((s32)(loc_20) < (s32)(2))) == 0)) {
        func_0028b218(*(u32*)(&D_0035f200), 1);
        func_0028b248(*(u32*)(&D_0035f200), 9);
    }
    func_0028b1e8(*(u32*)(&D_0035f200), 0);
    func_002b1a00();
    func_00276690(1);
    func_002766b0(1);
    return func_00287cc0(0);
}
