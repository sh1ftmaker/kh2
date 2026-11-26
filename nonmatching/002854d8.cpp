// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2c8 asm("D_0035f2c8");
extern "C" u32 D_0035f2d8 asm("D_0035f2d8");
extern "C" u32 D_0035f2dc asm("D_0035f2dc");
extern "C" u32 D_00374378 asm("D_00374378");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139d78(u32, u8) asm("func_00139d78");
extern "C" void func_00259108(u32, u32, u32, u32, u32, u32, u32) asm("func_00259108");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002854d8 func_002854d8
u32 func_002854d8(u32 a0, u8 a1) asm("_ZN2Tz6Ending9CreateWinEib");
u32 func_002854d8(u32 a0, u8 a1) {
    u8 frame[16];
    u32 loc_0;
    u32 s1;
    u32 s4;
    u32 s0;
    u32 s3;
    u32 s1_0;
    u32 s2;
    u32 s5;
    u32 s0_1;
    u32 sp;
    func_00139d78(*(u32*)(&D_0035f2d8), a1);
    loc_0 = 0;
    func_0028d980(*(u32*)(&D_0035f2d8), 0x753d, 0, 0, *(u32*)(&D_0035f2c8), 4, 5, 0xffffffff);
    func_00139620(*(u32*)(&D_0035f2d8));
    *(u32*)((*(u32*)(&D_0035f2d8) + 0x1b0)) = 2;
    *(u8*)((*(u32*)(&D_0035f2d8) + 0x195)) = 1;
    *(u32*)(((*(u32*)(&D_0035f2d8) + 0x18) + 0xb8)) = (*(u32*)(((*(u32*)(&D_0035f2d8) + 0x18) + 0xb8)) | 8);
    s1 = *(u32*)(&D_0035f2d8);
    *(u32*)((s1 + 0x198)) = func_00192048(a0);
    s4 = func_0023aa18(*(u32*)(&D_0035f2d8) + 0x18);
    if (((s32)(a1) != 0)) {
        s0 = 2;
    } else {
        s0 = 1;
    }
    s3 = func_0023aa38(*(u32*)(&D_0035f2d8) + 0x18);
    func_00259108(*(u32*)(&D_0035f2dc), 0x753d, 0, 0, *(u32*)(&D_0035f2c8), 1, (u32)&D_00374378);
    if (((s32)(s0) != 0)) {
        s1_0 = 0;
        s2 = 0x360000;
        s5 = 0x360000;
        do {
            func_0028dcc0(func_002891b8(*(u32*)((s2 + -0xd24)), s1_0), *(u32*)((s5 + -0xd28)));
            s0_1 = (func_0023aa78(func_002891b8(*(u32*)((s2 + -0xd24)), s1_0) + 0x18) * s1_0);
            func_00138c68(func_002891b8(*(u32*)((s2 + -0xd24)), s1_0), s4 + s0_1, s3);
            *(u32*)(((func_002891b8(*(u32*)((s2 + -0xd24)), s1_0) + 0x18) + 0xb8)) = (*(u32*)(((func_002891b8(*(u32*)((s2 + -0xd24)), s1_0) + 0x18) + 0xb8)) | 8);
            s1_0 = (s1_0 + 1);
        } while (((s32)(((s32)(s1_0) < (s32)(s0))) != 0));
    } else {
        sp = (u32)frame;
    }
    func_00288f48(*(u32*)(&D_0035f2dc), 0x80, 0x40, 0, 0);
    return func_0028af28(*(u32*)(&D_0035f2dc), a1 ? 0x40 : 0x60);
}
