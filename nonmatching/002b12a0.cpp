// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 D_00374ce8 asm("D_00374ce8");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001a37e8(u32, u32) asm("func_001a37e8");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002b23e0(u32) asm("func_002b23e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_00192c90(u32, u32) asm("func_00192c90");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_002817d8(u32, u32, u32, u32, u32, u32, u32) asm("func_002817d8");
extern "C" void func_00281cf0(u32) asm("func_00281cf0");
extern "C" void func_00281e20() asm("func_00281e20");
extern "C" void func_00281e70(u32) asm("func_00281e70");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002b12a0 func_002b12a0
u32 func_002b12a0() asm("_ZN2Tz8JmPuzzle12SetupItemGetEv");
u32 func_002b12a0() {
    u32 s6;
    u32 v0;
    u32 loc_0;
    u32 fp;
    u32 s0;
    u32 fp_0;
    u32 s6_1;
    u32 s0_2;
    u32 fp_3;
    s6 = *(u16*)(func_002b23e0(0xffffffff));
    v0 = func_001a80c8(*(u16*)(func_002b23e0(0xffffffff)));
    func_00281cf0(*(u16*)((v0 + 0x14)));
    func_0028d8c0(*(u32*)(&D_0035f634) + 0x5478, 0x756d, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x7d, 0x7e, 0);
    loc_0 = 0;
    fp = (*(u32*)(&D_0035f634) + 0x5ce0);
    func_0028d980(*(u32*)(&D_0035f634) + 0x5ce0, 0x756d, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x7a, 0x7b, 0xffffffff);
    func_00139620(fp);
    *(u32*)((fp + 0x1b0)) = 2;
    *(u32*)((fp + 0x198)) = func_00192048(0x50d1);
    loc_0 = 0;
    s0 = (*(u32*)(&D_0035f634) + 0x5990);
    fp_0 = (*(u32*)(&D_0035f634) + 0x5978);
    func_0028d980(*(u32*)(&D_0035f634) + 0x5978, 0x756d, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x80, 0x81, 0xffffffff);
    *(u32*)((fp_0 + 0x1b0)) = 2;
    func_00139620(fp_0);
    func_001395f8(fp_0);
    func_00192c90(func_001a37e8(s6, 0xffffffff), *(u32*)(&D_0035f638) + 0x38);
    *(u32*)((fp_0 + 0x198)) = (*(u32*)(&D_0035f638) + 0x38);
    s6_1 = func_0023aa18(s0);
    loc_0 = 0;
    s0_2 = func_0023aa38(s0);
    fp_3 = (*(u32*)(&D_0035f634) + 0x5b2c);
    func_0028d980(*(u32*)(&D_0035f634) + 0x5b2c, 0x756d, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 3, 0xffffffff, 0xffffffff);
    func_0028dcc0(fp_3, *(u32*)(&D_0035f634) + 0x5978);
    *(u32*)((fp_3 + 0x1b0)) = 2;
    func_00139620(fp_3);
    func_00138c68(fp_3, s6_1, s0_2);
    func_00139688(fp_3);
    *(u32*)((fp_3 + 0x198)) = func_00192048(*(u16*)((v0 + 0xa)));
    func_002817d8(0x756e, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0, 0, (u32)&D_00374ce8);
    func_00281e70(*(u32*)(&D_0035f634) + 0x5478);
    func_00281e20();
    func_00242618(0x13, 1);
    return func_00287cc0(0);
}
