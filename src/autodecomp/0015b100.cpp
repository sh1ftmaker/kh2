// coverage: addr=0x0015b100 symbol=_Z13func_0015b100Pv size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.07;m2c:near:90.38;e3:near:79.4
#include "common/types.h"

extern "C" u32 D_0034aa9c asm("D_0034aa9c");
extern "C" u32 D_0034aaa0 asm("D_0034aaa0");
extern "C" u32 D_0034aaa4 asm("D_0034aaa4");
extern "C" u32 D_0034aaa8 asm("D_0034aaa8");

// 0x0015b100 func_0015b100(void*)
void lift_0015b100() asm("_Z13func_0015b100Pv");
void lift_0015b100() {
    if (((s32)(*(u32*)(&D_0034aaa8)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034aaa8)) + 0x10))))(*(u32*)(&D_0034aaa8));
        *(u32*)(&D_0034aaa8) = 0;
    }
    if (((s32)(*(u32*)(&D_0034aaa4)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034aaa4)) + 0x10))))(*(u32*)(&D_0034aaa4));
        *(u32*)(&D_0034aaa4) = 0;
    }
    if (((s32)(*(u32*)(&D_0034aa9c)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034aa9c)) + 0x10))))(*(u32*)(&D_0034aa9c));
        *(u32*)(&D_0034aa9c) = 0;
    }
    if (((s32)(*(u32*)(&D_0034aaa0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034aaa0)) + 0x10))))(*(u32*)(&D_0034aaa0));
        *(u32*)(&D_0034aaa0) = 0;
    }
    return;
}
