// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f600 asm("D_0035f600");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00276678() asm("func_00276678");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00276690(u32) asm("func_00276690");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028afd0(u32, u32) asm("func_0028afd0");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002a7d10() asm("func_002a7d10");
extern "C" void func_002a7dc8() asm("func_002a7dc8");
extern "C" void func_002a7f58() asm("func_002a7f58");
extern "C" void func_002a8330() asm("func_002a8330");
extern "C" void func_002a8748() asm("func_002a8748");
extern "C" void func_002a8768() asm("func_002a8768");

// 0x002a77a0 Tz::JmMiniGame::Setup()
u32 lift_002a77a0() asm("_ZN2Tz10JmMiniGame5SetupEv");
u32 lift_002a77a0() {
    u8 frame[32];
    u32 s7;
    u32 s5;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 s0;
    u32 s0_0;
    u32 s4;
    u32 v0;
    u32 s5_1;
    u32 s6;
    u32 s2;
    u32 s0_2;
    u32 v0_3;
    s7 = func_00276348();
    s5 = func_002766d0();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    t5 = 2;
    t6 = ((u32)frame + 0x10);
    t7 = 3;
    do {
        *(u16*)(t6) = t5;
        t6 = (t6 + 2);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    func_002a7dc8();
    s0 = *(u32*)(&D_0035f3d4);
    s0_0 = (s0 + -1);
    func_00276e78();
    func_0028d8c0(s5, s0_0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x65, 0xffffffff, 0);
    func_00139620(s5);
    s4 = (s5 + 0x4c8);
    func_0028dcc0(s5, s7);
    func_0028d8c0(s4, s0_0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x6d, 0xffffffff, 0);
    func_00139620(s4);
    func_0028dcc0(s4, s7);
    func_00288d80(*(u32*)(&D_0035f200), 0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)frame + 0x10, (u32)frame + 0x10);
    v0 = func_002891b8(*(u32*)(&D_0035f200), 0);
    func_00139620(v0);
    func_0028dcc0(v0, s5);
    func_002a7f58();
    s5_1 = *(u32*)(&D_0035f3d4);
    s6 = (((s32)(0) < (s32)((*(u32*)(*(u32*)(&D_0035f600)) + -0xa))) ? (*(u32*)(*(u32*)(&D_0035f600)) + -9) : 1);
    s2 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), *(u32*)(&D_0035f14c));
    s0_2 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f210)) + 0x28)), *(u32*)(&D_0035f148));
    v0_3 = func_00276678();
    *(u32*)((u32)frame) = 0;
    func_0028bae0(*(u32*)(&D_0035f214), s5_1, s2, s0_2, v0_3, *(u32*)(*(u32*)(&D_0035f600)), 0xa, s4);
    func_0028af90(*(u32*)(&D_0035f200), s6);
    func_002891f0(*(u32*)(&D_0035f200), 0, 0, 0xffffffff, 0xffffffff);
    func_0028afd0(*(u32*)(&D_0035f200), 0);
    func_00276690(1);
    func_0028af28(*(u32*)(&D_0035f200), 0x10);
    if (((s32)(((s32)(s6) < (s32)(2))) == 0)) {
        func_0028b218(*(u32*)(&D_0035f200), 1);
        func_0028b248(*(u32*)(&D_0035f200), 0xa);
    }
    func_002a7d10();
    func_002a8768();
    func_002a8330();
    func_002a8748();
    return func_00287cc0(0);
}
