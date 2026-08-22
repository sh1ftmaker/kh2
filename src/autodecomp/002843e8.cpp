// coverage: addr=0x002843e8 symbol=func_002843e8 size=336 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:69.17;m2c:near:68.01
#include "common/types.h"

extern "C" u32 D_0035f2c8 asm("D_0035f2c8");
extern "C" u32 D_0035f2cc asm("D_0035f2cc");
extern "C" u32 D_0035f2d8 asm("D_0035f2d8");
extern "C" u32 D_0035f2dc asm("D_0035f2dc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x002843e8 func_002843e8
u32 func_002843e8() asm("func_002843e8");
u32 func_002843e8() {
    u32 s0;
    u32 s1;
    u32 v0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2c8))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f2c8)) + 0x14))))(*(u32*)(&D_0035f2c8));
    }
    if ((func_00139d78(*(u32*)(&D_0035f2cc)) != 0)) {
        func_00139510(*(u32*)(&D_0035f2cc));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2cc) + 0x1b4)) != 0)) {
        func_00139510(*(u32*)(&D_0035f2cc) + 0x1b4);
    }
    s0 = 0;
    s1 = 7;
    do {
        if (((s32)(func_00139d78((*(u32*)(&D_0035f2cc) + s0) + 0x368)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f2cc)) + 0x368)) + 0x14))))((s0 + *(u32*)(&D_0035f2cc)) + 0x368);
        }
        if ((func_00139d78((*(u32*)(&D_0035f2cc) + s0) + 0x1108) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f2cc)) + 0x1108)) + 0x14))))((s0 + *(u32*)(&D_0035f2cc)) + 0x1108);
        }
        s0 = (s0 + 0x1b4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2d8))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f2d8)) + 0x14))))(*(u32*)(&D_0035f2d8));
    }
    v0 = func_0028acc8(*(u32*)(&D_0035f2dc));
    if ((v0 != 0)) {
        return func_0028abe0(*(u32*)(&D_0035f2dc));
    } else {
        return v0;
    }
}
