// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00276608(u32) asm("func_00276608");
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
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002926c0(u32) asm("func_002926c0");
extern "C" void func_002927b8() asm("func_002927b8");
extern "C" void func_00292870() asm("func_00292870");
extern "C" void func_002aeb28() asm("func_002aeb28");
extern "C" void func_002b1708() asm("func_002b1708");
extern "C" void func_002b1a00() asm("func_002b1a00");

// 0x002aed60 func_002aed60
u32 func_002aed60() asm("_ZN2Tz8JmPuzzle8SetupTopEv");
u32 func_002aed60() {
    u8 frame[16];
    u32 s7;
    u32 s5;
    u32 s1;
    u32 t7;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 s2;
    u32 s2_1;
    u32 fp;
    u32 s1_2;
    u32 s2_3;
    u32 s3;
    u32 s6;
    u32 s7_4;
    u32 loc_0;
    u32 v0;
    func_002927b8();
    func_002926c0(0);
    func_00292870();
    s7 = func_00276348();
    s5 = func_002766d0();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
        func_002aeb28();
    }
    s1 = 0;
    t7 = (0 << 3);
    do {
        t5 = 2;
        t6 = 3;
        t7_0 = (t7 + (u32)frame);
        do {
            *(u16*)((t7_0 + ((t6 - 3) * -2))) = t5;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        s1 = (s1 + 1);
        t7 = (s1 << 3);
    } while (((s32)(t7) != 0));
    s2 = (*(u32*)(&D_0035f3d4) + -1);
    func_00276e78();
    func_0028d8c0(s5, s2, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x5a, 0xffffffff, 0);
    func_00139620(s5);
    func_0028dcc0(s5, s7);
    s2_1 = *(u32*)(&D_0035f3d4);
    fp = func_0023aa78(s5 + 0x18);
    s1_2 = 0;
    s2_3 = (s2_1 + 1);
    s3 = 0;
    s6 = 0x60000008;
    s7_4 = 0x360000;
    do {
        func_00288d80(*(u32*)((s7_4 + -0xe00)), s1_2, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)&loc_0, (u32)&loc_0 + 8);
        v0 = func_002891b8(*(u32*)((s7_4 + -0xe00)), s1_2);
        func_00139620(v0);
        func_0028dcc0(v0, s5);
        func_00138c68(v0, 0, s3);
        *(u32*)((v0 + 0x1a4)) = s6;
        *(u32*)((v0 + 0x1ac)) = 3;
        func_001395f8(v0);
        func_0028d8c0((s5 + (s1_2 * 0x198)) + 0xa998, s2_3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0);
        func_0028dcc0((s5 + (s1_2 * 0x198)) + 0xa998, v0);
        s1_2 = (s1_2 + 1);
        s3 = (s3 + fp);
    } while (((s32)(((s32)(s1_2) < (s32)(3))) != 0));
    func_002891f0(*(u32*)(&D_0035f200), func_00276608(func_00287bc0()), 0, 0xffffffff, 0xffffffff);
    func_0028af90(*(u32*)(&D_0035f200), 3);
    func_0028afd0(*(u32*)(&D_0035f200), 0);
    func_0028b218(*(u32*)(&D_0035f200), 1);
    func_0028b248(*(u32*)(&D_0035f200), 0xa);
    func_002b1708();
    func_002b1a00();
    func_002766b0(1);
    return func_00287cc0(0);
}
