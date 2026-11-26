// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f5e4 asm("D_0035f5e4");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00276678() asm("func_00276678");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" u32 func_002a43f0() asm("func_002a43f0");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002a2a80() asm("func_002a2a80");
extern "C" void func_002a2c40() asm("func_002a2c40");
extern "C" void func_002a3910() asm("func_002a3910");
extern "C" void func_002a3aa8() asm("func_002a3aa8");
extern "C" void func_002a3ba8() asm("func_002a3ba8");
extern "C" void func_002a4b78() asm("func_002a4b78");

// 0x002a21b0 Tz::JmTreasure::Setup()
u32 lift_002a21b0() asm("_ZN2Tz10JmTreasure5SetupEv");
u32 lift_002a21b0() {
    u8 frame[32];
    u32 s6;
    u32 s5;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 s1;
    u32 s2;
    u32 s0;
    u32 v0;
    s6 = func_00276348();
    s5 = func_002766d0();
    if (((s32)(func_002a43f0()) != 0)) {
        func_002a2a80();
    } else {
        func_002a2c40();
    }
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
    s1 = *(u32*)(&D_0035f3d4);
    func_00276e78();
    func_0028d8c0(s5, s1 + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x3b, 0xffffffff, 0);
    func_00139620(s5);
    func_0028dcc0(s5, s6);
    func_0028d8c0(s5 + 0x4c8, s1 + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x45, 0xffffffff, 0);
    func_00139620(s5 + 0x4c8);
    func_0028dcc0(s5 + 0x4c8, s6);
    func_002a3ba8();
    s2 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), *(u32*)(&D_0035f14c));
    s0 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f210)) + 0x28)), *(u32*)(&D_0035f148));
    v0 = func_00276678();
    *(u32*)((u32)frame) = 0;
    func_0028bae0(*(u32*)(&D_0035f214), s1 + -1, s2, s0, v0, *(u32*)((*(u32*)(&D_0035f5e4) + 0x1080)), 9, s5 + 0x4c8);
    func_002a4b78();
    func_002a3aa8();
    func_002a3910();
    return func_00287cc0(0);
}
