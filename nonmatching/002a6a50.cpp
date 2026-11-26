// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00276348() asm("func_00276348");
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
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002a6e50() asm("func_002a6e50");
extern "C" void func_002a7470() asm("func_002a7470");

// 0x002a6a50 Tz::JmSynthe::Setup()
u32 lift_002a6a50() asm("_ZN2Tz8JmSynthe5SetupEv");
u32 lift_002a6a50() {
    u32 s6;
    u32 s5;
    u32 loc_0;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 s0;
    u32 v0;
    s6 = func_00276348();
    s5 = func_002766d0();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    t5 = 2;
    t6 = (u32)&loc_0;
    t7 = 3;
    do {
        *(u16*)(t6) = t5;
        t6 = (t6 + 2);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    s0 = *(u32*)(&D_0035f3d4);
    func_00276e78();
    func_0028d8c0(s5, s0 + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x65, 0xffffffff, 0);
    func_00139620(s5);
    func_0028dcc0(s5, s6);
    func_00288d80(*(u32*)(&D_0035f200), 0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)&loc_0, (u32)&loc_0);
    v0 = func_002891b8(*(u32*)(&D_0035f200), 0);
    func_00139620(v0);
    func_0028dcc0(v0, s5);
    func_002891f0(*(u32*)(&D_0035f200), 0, 0, 0xffffffff, 0xffffffff);
    func_00276690(1);
    func_0028af28(*(u32*)(&D_0035f200), 0x10);
    func_002a6e50();
    func_002a7470();
    return func_00287cc0(0);
}
