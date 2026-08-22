// coverage: addr=0x002830b8 symbol=func_002830b8 size=200 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.6;ghidra:near:87.19
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0035f2b0 asm("D_0035f2b0");
extern "C" u32 D_0035f2b4 asm("D_0035f2b4");
extern "C" u32 D_0035f2b8 asm("D_0035f2b8");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_002361d0(u32) asm("func_002361d0");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_0031a840(u32) asm("func_0031a840");
extern "C" void func_0031abd8(u32) asm("func_0031abd8");
extern "C" void func_0031acc0(u32) asm("func_0031acc0");

// 0x002830b8 func_002830b8
void func_002830b8() asm("func_002830b8");
void func_002830b8() {
    u32 s0;
    u32 s1;
    if (((s32)(*(u32*)(&D_0035f2b0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f2b0)) + 4))))(*(u32*)(&D_0035f2b0));
        *(u32*)(&D_0035f2b0) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f2b4)) != 0)) {
        func_00106420(*(u32*)(&D_0035f2b4));
        *(u32*)(&D_0035f2b4) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f2b8)) != 0)) {
        s0 = *(u32*)(&D_0035f2b8);
        s1 = (*(u32*)(&D_0035f2b8) + 0x1a0);
        func_0031abd8(*(u32*)(&D_0035f2b8) + 0x6a0);
        func_0031abd8(s0 + 0x508);
        func_0031acc0(s0 + 0x354);
        *(u32*)((s0 + 0x1a0)) = (u32)&D_00347e60;
        func_00239870(s0 + 0x1b8);
        func_0031a840(s1);
        func_002361d0(s0);
        func_00106420(s0);
        *(u32*)(&D_0035f2b8) = 0;
    }
    return;
}
