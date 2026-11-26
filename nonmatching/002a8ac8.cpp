// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f608 asm("D_0035f608");
extern "C" f32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00276678() asm("func_00276678");
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
extern "C" void func_002a9048() asm("func_002a9048");
extern "C" void func_002a9100() asm("func_002a9100");
extern "C" void func_002a92d8() asm("func_002a92d8");
extern "C" void func_002a95a8() asm("func_002a95a8");
extern "C" void func_002a9888() asm("func_002a9888");
extern "C" void func_002a98a8() asm("func_002a98a8");

// 0x002a8ac8 Tz::JmQuest::Setup()
u32 lift_002a8ac8() asm("_ZN2Tz7JmQuest5SetupEv");
u32 lift_002a8ac8() {
    u32 s0;
    f32 fp;
    u32 loc_0;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 s7;
    u32 loc_20;
    u32 s4;
    u32 v0;
    u32 s6;
    u32 s7_0;
    u32 s2;
    u32 s0_1;
    u32 v0_2;
    s0 = func_00276348();
    fp = func_002766d0();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    t5 = 2;
    t6 = ((u32)&loc_0 + 0x10);
    t7 = 3;
    do {
        *(u16*)(t6) = t5;
        t6 = (t6 + 2);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    func_002a9100();
    s7 = (*(u32*)(&D_0035f3d4) + -1);
    func_00276e78();
    func_0028d8c0(fp, s7, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x65, 0xffffffff, 0);
    loc_20 = 0xa;
    func_00139620(fp);
    s4 = (fp + 0x4c8);
    func_0028dcc0(fp, s0);
    func_0028d8c0(s4, s7, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x6d, 0xffffffff, 0);
    func_00139620(s4);
    func_0028dcc0(s4, s0);
    func_00288d80(*(u32*)(&D_0035f200), 0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)&loc_0 + 0x10, (u32)&loc_0 + 0x10);
    v0 = func_002891b8(*(u32*)(&D_0035f200), 0);
    func_00139620(v0);
    func_0028dcc0(v0, fp);
    func_002a92d8();
    loc_20 = (((s32)(*(u32*)(*(u32*)(&D_0035f608))) < (s32)(0xb)) ? loc_20 : *(u32*)(*(u32*)(&D_0035f608)));
    s6 = (((s32)(0) < (s32)((*(u32*)(*(u32*)(&D_0035f608)) + -0xa))) ? (*(u32*)(*(u32*)(&D_0035f608)) + -9) : 1);
    s7_0 = *(u32*)(&D_0035f3d4);
    s2 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), *(u32*)(&D_0035f14c));
    s0_1 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f210)) + 0x28)), *(u32*)(&D_0035f148));
    v0_2 = func_00276678();
    loc_0 = 0;
    func_0028bae0(*(u32*)(&D_0035f214), s7_0, s2, s0_1, v0_2, loc_20, 0xa, s4);
    func_0028af90(*(u32*)(&D_0035f200), s6);
    func_002891f0(*(u32*)(&D_0035f200), 0, 0, 0xffffffff, 0xffffffff);
    func_0028afd0(*(u32*)(&D_0035f200), 0);
    func_00276690(1);
    func_0028af28(*(u32*)(&D_0035f200), 0x10);
    if (((s32)(((s32)(s6) < (s32)(2))) == 0)) {
        func_0028b218(*(u32*)(&D_0035f200), 1);
        func_0028b248(*(u32*)(&D_0035f200), 0xa);
    }
    func_002a9048();
    func_002a98a8();
    func_002a95a8();
    func_002a9888();
    return func_00287cc0(0);
}
