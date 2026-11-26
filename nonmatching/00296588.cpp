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
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00276690(u32) asm("func_00276690");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e88(u32) asm("func_00288e88");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002960d0() asm("func_002960d0");
extern "C" void func_002969e0() asm("func_002969e0");
extern "C" void func_00296b80(u32) asm("func_00296b80");

// 0x00296588 func_00296588
u32 func_00296588() asm("_ZN2Tz8JmReport10SetupRoxasEv");
u32 func_00296588() {
    u8 frame[32];
    u32 s5;
    u32 s6;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 s4;
    u32 s7;
    s5 = func_00276348();
    s6 = func_002766d0();
    func_00288e88(*(u32*)(&D_0035f200));
    func_002969e0();
    t5 = 3;
    t6 = ((u32)frame + 0x10);
    t7 = 3;
    do {
        *(u16*)(t6) = t5;
        t6 = (t6 + 2);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    s4 = *(u32*)(&D_0035f3d4);
    s7 = (*(u32*)(&D_0035f3d4) + -1);
    func_0028d8c0(s6, *(u32*)(&D_0035f3d4) + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xa3, 0xffffffff, 0);
    func_00139620(s6);
    func_0028dcc0(s6, s5);
    func_0028d8c0(s6 + 0x330, s7, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xa6, 0xffffffff, 0);
    func_00139620(s6 + 0x330);
    func_0028dcc0(s6 + 0x330, s5);
    *(u32*)((u32)frame) = 0;
    func_0028d980(s6 + 0x660, s4 + 3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xaa, 0xffffffff, 0xffffffff);
    func_001395f8(s6 + 0x660);
    func_0028dcc0(s6 + 0x660, s5);
    *(u8*)(((s6 + 0x660) + 0x195)) = 1;
    *(u32*)(((s6 + 0x678) + 0xb8)) = (*(u32*)(((s6 + 0x678) + 0xb8)) | 8);
    *(u32*)((u32)frame) = 0;
    func_0028d980(s6 + 0x814, s4 + 3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 3, 0xffffffff, 0xffffffff);
    func_00139620(s6 + 0x814);
    func_0028dcc0(s6 + 0x814, s6 + 0x660);
    *(u32*)(((s6 + 0x814) + 0x1b0)) = 2;
    *(u8*)(((s6 + 0x814) + 0x195)) = 1;
    *(u32*)(((s6 + 0x82c) + 0xb8)) = (*(u32*)(((s6 + 0x82c) + 0xb8)) | 8);
    *(u32*)((u32)frame) = 0;
    func_0028d980(s6 + 0x9c8, s4 + 3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xab, 0xffffffff, 0xffffffff);
    func_001395f8(s6 + 0x9c8);
    func_0028dcc0(s6 + 0x9c8, s5);
    *(u8*)(((s6 + 0x9c8) + 0x195)) = 1;
    *(u32*)(((s6 + 0x9e0) + 0xb8)) = (*(u32*)(((s6 + 0x9e0) + 0xb8)) | 8);
    *(u32*)((u32)frame) = 0;
    func_0028d980(s6 + 0xb7c, s4 + 3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 3, 0xffffffff, 0xffffffff);
    func_00139620(s6 + 0xb7c);
    func_0028dcc0(s6 + 0xb7c, s6 + 0x9c8);
    *(u32*)(((s6 + 0xb7c) + 0x1b0)) = 2;
    *(u8*)(((s6 + 0xb7c) + 0x195)) = 1;
    *(u32*)(((s6 + 0xb94) + 0xb8)) = (*(u32*)(((s6 + 0xb94) + 0xb8)) | 8);
    func_00288d80(*(u32*)(&D_0035f200), 0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)frame + 0x10, (u32)frame + 0x10);
    func_00139620(func_002891b8(*(u32*)(&D_0035f200), 0));
    func_0028dcc0(func_002891b8(*(u32*)(&D_0035f200), 0), s6);
    func_00296b80(0);
    func_002960d0();
    func_00276690(1);
    func_0028af28(*(u32*)(&D_0035f200), 0x10);
    return func_00287cc0(0);
}
