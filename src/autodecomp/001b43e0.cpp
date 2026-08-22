// coverage: addr=0x001b43e0 symbol=func_001b43e0 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.26;e3:near:78.04;m2c:near:74.88
#include "common/types.h"

extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" u32 func_001b5460(u32) asm("func_001b5460");
extern "C" void func_001b4f40(u32) asm("func_001b4f40");

// 0x001b43e0 func_001b43e0
u32 func_001b43e0() asm("func_001b43e0");
u32 func_001b43e0() {
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(&D_01d48cb0)) != 0)) {
        v0 = func_001b5460(*(u32*)(&D_01d48cb0));
        if (((s32)(*(u32*)(&D_01d48cb0)) != 0)) {
            s0 = *(u32*)(&D_01d48cb0);
            func_001b4f40(*(u32*)(&D_01d48cb0));
            v0_0 = func_00105110(s0);
            v0 = v0_0;
        }
        v0_1 = v0;
    }
    return v0_1;
}
