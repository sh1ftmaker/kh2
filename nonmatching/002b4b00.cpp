// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 func_00240ba0() asm("func_00240ba0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");

// 0x002b4b00 func_002b4b00
u32 func_002b4b00() asm("_ZN7OvlShop8ItemShop12SetupConfirmEv");
u32 func_002b4b00() {
    u32 s0;
    u32 s1;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 t7;
    u32 s2;
    s0 = 0;
    s1 = 0x360000;
    s3 = 0x360000;
    s4 = 0x360000;
    s5 = 0x360000;
    s6 = 0x360000;
    t7 = *(u32*)(&D_0035f6cc);
    s2 = 0;
    do {
        func_00288d80(*(u32*)((s1 + -0x9b4)), s0, *(u32*)((s6 + -0x9bc)), *(u32*)((s5 + -0x9c0)), *(u32*)((s4 + -0x99c)), *(u16*)((((s2 + (s0 * 0x24)) + *(u32*)(t7)) + 0x12)), (s2 + (s0 * 0x24)) + *(u32*)(t7), ((s2 + (s0 * 0x24)) + *(u32*)(t7)) + 8);
        func_00288e08(*(u32*)((s1 + -0x9b4)), s0, 0, 0xffffffff);
        func_00139620(func_002891b8(*(u32*)((s1 + -0x9b4)), s0));
        func_001395f8(func_002891b8(*(u32*)((s1 + -0x9b4)), s0));
        s0 = (s0 + 1);
        t7 = *(u32*)((s3 + -0x934));
    } while (((s32)(t7) != 0));
    func_002891f0(*(u32*)(&D_0035f64c), func_00240ba0(), 1, 0, 2);
    return func_00287cc0(0);
}
