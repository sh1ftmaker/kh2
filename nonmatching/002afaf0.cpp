// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 D_00374cc0 asm("D_00374cc0");
extern "C" u32 D_00374cd0 asm("D_00374cd0");
extern "C" f32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002b1aa0() asm("func_002b1aa0");
extern "C" u32 func_002b23e0(u32) asm("func_002b23e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_002766b0(u32) asm("func_002766b0");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002b1a00() asm("func_002b1a00");
extern "C" void func_002b1af0() asm("func_002b1af0");
extern "C" void func_002b24c8() asm("func_002b24c8");
extern "C" void func_002b3420(u32) asm("func_002b3420");

// 0x002afaf0 func_002afaf0
u32 func_002afaf0() asm("_ZN2Tz8JmPuzzle9SetupGameEv");
u32 func_002afaf0() {
    u32 s5;
    f32 fp;
    u32 s6;
    u32 t2;
    u32 t3;
    u32 loc_10;
    u32 s0;
    u32 s0_0;
    u32 loc_0;
    u32 s0_1;
    u32 s0_2;
    s5 = func_00276348();
    fp = func_002766d0();
    s6 = func_002b23e0(0xffffffff);
    func_002b3420(0xffffffff);
    t2 = 0x360000;
    t3 = 0;
    do {
        t3 = (t3 + 1);
        *(u16*)((((t3 << 1) + *(u32*)((t2 + -0x9c8))) + 0x1c)) = 0;
        *(u16*)((((t3 << 1) + *(u32*)((t2 + -0x9c8))) + 0x20)) = 0;
    } while (((s32)(((s32)(t3) < (s32)(2))) != 0));
    *(u16*)((*(u32*)(&D_0035f638) + 0x24)) = *(s8*)((((*(u32*)(s6) >> 0x19) & 4) + (u32)&D_00374cd0));
    loc_10 = 0x60000008;
    *(u16*)((*(u32*)(&D_0035f638) + 0x26)) = *(s8*)(((((*(u32*)(s6) >> 0x19) & 4) + (u32)&D_00374cd0) + 1));
    *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0xfffffbff);
    *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0xfffff7ff);
    *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0xffffcfff);
    *(u32*)((*(u32*)(&D_0035f638) + 0x2c)) = 0;
    *(u32*)((*(u32*)(&D_0035f638) + 0x30)) = 0;
    s0 = *(u32*)(&D_0035f3d4);
    func_00276e78();
    func_0028d8c0(fp, s0 + -1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x70, 0xffffffff, 0);
    func_00139620(fp);
    func_0028dcc0(fp, s5);
    s0_0 = (*(u32*)(&D_0035f634) + 0x52e0);
    func_0028d8c0(*(u32*)(&D_0035f634) + 0x52e0, s0 + 1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), *(s16*)((((*(u32*)(s6) >> 0x1a) & 2) + (u32)&D_00374cc0)), 0xffffffff, 0);
    func_00139620(s0_0);
    func_0028dcc0(s0_0, s5);
    loc_0 = 0;
    s0_1 = (*(u32*)(&D_0035f634) + 0x5610);
    func_0028d980(*(u32*)(&D_0035f634) + 0x5610, s0 + 1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0xffffffff);
    func_00139620(s0_1);
    func_0028dcc0(s0_1, fp);
    *(u32*)((s0_1 + 0x1ac)) = 3;
    *(u32*)((s0_1 + 0x1a4)) = loc_10;
    func_001395f8(s0_1);
    *(u32*)((s0_1 + 0x198)) = (s6 + 4);
    loc_0 = 0;
    s0_2 = (*(u32*)(&D_0035f634) + 0x57c4);
    func_0028d980(*(u32*)(&D_0035f634) + 0x57c4, s0 + 1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0xffffffff);
    func_00139620(s0_2);
    func_0028dcc0(s0_2, fp);
    func_00138c68(s0_2, 0, func_0023aa98(fp + 0x18));
    *(u32*)((s0_2 + 0x1ac)) = 3;
    *(u32*)((s0_2 + 0x1a4)) = loc_10;
    func_001395f8(s0_2);
    *(u32*)((s0_2 + 0x198)) = func_00192048(func_002b1aa0());
    if (((s32)((*(u32*)(s6) & 0x4000000)) != 0)) {
        func_002b1af0();
    }
    func_002b24c8();
    func_002b1a00();
    func_002766b0(1);
    return func_00287cc0(0);
}
