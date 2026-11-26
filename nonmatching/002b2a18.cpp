// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 D_00374cc8 asm("D_00374cc8");
extern "C" u32 D_00374cd8 asm("D_00374cd8");
extern "C" u32 func_00139570(u32) asm("func_00139570");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_002b23e0(u32) asm("func_002b23e0");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002b2a18 func_002b2a18
u32 func_002b2a18() asm("_ZN2Tz8JmPuzzle12CreateCursorEv");
u32 func_002b2a18() {
    u8 frame[16];
    u32 s4;
    u32 s6;
    u32 s1;
    u32 s3;
    u32 s5;
    u32 t7;
    u32 s0;
    u32 s2;
    u32 s0_0;
    u32 s2_1;
    u32 s0_2;
    u32 s2_3;
    *(u32*)((u32)frame) = func_002766d0();
    s4 = *(u32*)(&D_0035f634);
    s6 = func_002b23e0(0xffffffff);
    func_00139d78(*(u32*)(&D_0035f634));
    s1 = (*(u32*)(&D_0035f3d4) + 3);
    s3 = 0;
    s5 = 0;
    do {
        if (((s32)(s3) != 0)) {
            s0 = *(u32*)(&D_0035f634);
            s2 = (*(u32*)(&D_0035f634) + 0x5148);
            func_001386e0(s2, s1 + 1, func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), 6), *(u32*)((u32)frame) + 0xdca0, *(s16*)((((*(u32*)(s6) >> 0x1a) & 2) + (u32)&D_00374cc8)), 0);
            *(u32*)(((s0 + 0x5160) + 0xb8)) = (*(u32*)(((s0 + 0x5160) + 0xb8)) | 8);
            func_00139620(s2);
            *(u8*)((s2 + 0x195)) = 1;
            func_0028dcc0(s2, s4);
            *(u32*)(((s0 + 0x5160) + 0xb8)) = ((*(u32*)(((s0 + 0x5160) + 0xb8)) & 0xffffdfff) | 0x2000);
            func_00139570(s2);
            s1 = (s1 + 1);
        }
        s0_0 = ((*(u32*)(&D_0035f634) + s5) + 0x4e30);
        s2_1 = ((*(u32*)(&D_0035f634) + s5) + 0x4e18);
        func_0028d8c0((*(u32*)(&D_0035f634) + s5) + 0x4e18, s1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), *(s16*)((((((((*(u32*)(s6) >> 0x1b) & 1) << 1) + ((*(u32*)(s6) >> 0x1b) & 1)) + s3) << 1) + (u32)&D_00374cd8)), 0xffffffff, 0);
        func_00139620(s2_1);
        *(u32*)((s0_0 + 0xb8)) = (*(u32*)((s0_0 + 0xb8)) | 8);
        *(u8*)((s2_1 + 0x195)) = 1;
        func_0028dcc0(s2_1, s4);
        func_00139570(s2_1);
        s3 = (s3 + 1);
        s5 = (s5 + 0x198);
        t7 = 0x360000;
    } while (((s32)(t7) != 0));
    s0_2 = *(u32*)(&D_0035f634);
    s2_3 = (*(u32*)(&D_0035f634) + 0x4c80);
    func_0028d8c0(*(u32*)(&D_0035f634) + 0x4c80, 0x756a, *(u32*)((t7 + -0xeb4)), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x73, 0xffffffff, 0);
    func_00139620(s2_3);
    *(u32*)(((s0_2 + 0x4c98) + 0xb8)) = (*(u32*)(((s0_2 + 0x4c98) + 0xb8)) | 8);
    *(u8*)((s2_3 + 0x195)) = 1;
    func_0028dcc0(s2_3, *(u32*)(&D_0035f634) + 0x4e18);
    return func_00139570(s2_3);
}
