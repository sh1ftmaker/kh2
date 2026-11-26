// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0035f2c4 asm("D_0035f2c4");
extern "C" u32 D_0035f2c8 asm("D_0035f2c8");
extern "C" u32 D_0035f2cc asm("D_0035f2cc");
extern "C" u32 D_0035f2d4 asm("D_0035f2d4");
extern "C" u32 D_0035f2d8 asm("D_0035f2d8");
extern "C" u32 D_0035f2dc asm("D_0035f2dc");
extern "C" u32 D_0035f2e0 asm("D_0035f2e0");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_00284ea8() asm("func_00284ea8");
extern "C" void func_00285460() asm("func_00285460");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");
extern "C" void func_0031a840(u32) asm("func_0031a840");
extern "C" void func_0031acc0(u32) asm("func_0031acc0");

// 0x00284220 func_00284220
void func_00284220() asm("func_00284220");
void func_00284220() {
    u32 t5;
    u32 a0_0;
    u32 a0_1;
    u32 s1;
    u32 s0;
    u32 s2;
    u32 s0_2;
    u32 s0_3;
    u32 s2_4;
    u32 s0_5;
    u32 a0_6;
    u32 s0_7;
    u32 a0_8;
    t5 = *(u32*)(&D_0035f2d4);
    func_00285460();
    if ((t5 != 1)) {
        func_00284ea8();
    }
    a0_0 = *(u32*)(&D_0035f2c4);
    if ((a0_0 != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_0) + 4))))(a0_0);
        *(u32*)(&D_0035f2c4) = 0;
    }
    a0_1 = *(u32*)(&D_0035f2c8);
    if (((s32)(a0_1) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_1) + 0x10))))(a0_1);
        *(u32*)(&D_0035f2c8) = 0;
    }
    s1 = *(u32*)(&D_0035f2cc);
    if (((s32)(s1) != 0)) {
        if ((s1 != 0xffffeef8)) {
            s0 = (s1 + 0x1ea8);
            while ((s2 = (s1 + 0x1108)), (s0_2 = (s0 + -0x1b4)), (s2 != s0_2)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(s0_2) + 0xc))))(s0_2);
                s0 = s0_2;
            }
        }
        if ((s1 != 0xfffffc98)) {
            s0_3 = (s1 + 0x1108);
            while ((s2_4 = (s1 + 0x368)), (s0_5 = (s0_3 + -0x1b4)), (s2_4 != s0_5)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(s0_5) + 0xc))))(s0_5);
                s0_3 = s0_5;
            }
        }
        func_0031acc0(s1 + 0x1b4);
        *(u32*)(s1) = (u32)&D_00347e60;
        func_00239870(s1 + 0x18);
        func_0031a840(s1);
        func_00106420(s1);
        *(u32*)(&D_0035f2cc) = 0;
    }
    a0_6 = *(u32*)(&D_0035f2d8);
    if (((s32)(a0_6) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_6) + 0x10))))(a0_6);
        *(u32*)(&D_0035f2d8) = 0;
    }
    s0_7 = *(u32*)(&D_0035f2dc);
    if ((s0_7 != 0)) {
        func_00288b00(s0_7);
        func_00288c20(s0_7);
        *(u32*)(&D_0035f2dc) = 0;
    }
    a0_8 = *(u32*)(&D_0035f2e0);
    if ((a0_8 != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_8) + 0x10))))(a0_8);
        *(u32*)(&D_0035f2e0) = 0;
    }
    return;
}
