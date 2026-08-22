// coverage: addr=0x002b2c80 symbol=func_002b2c80 size=196 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.04;m2c:near:90.1
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x002b2c80 func_002b2c80
u32 func_002b2c80() asm("func_002b2c80");
u32 func_002b2c80() {
    u32 s0;
    u32 s1;
    u32 v0;
    s0 = 0;
    s1 = 1;
    do {
        if ((func_00139d78((*(u32*)(&D_0035f634) + s0) + 0x4e18) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f634)) + 0x4e18)) + 0x14))))((s0 + *(u32*)(&D_0035f634)) + 0x4e18);
        }
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x4c80)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x4c80);
    }
    v0 = func_00139d78(*(u32*)(&D_0035f634) + 0x5148);
    if ((v0 != 0)) {
        return func_00139510(*(u32*)(&D_0035f634) + 0x5148);
    } else {
        return v0;
    }
}
