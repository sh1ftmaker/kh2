// coverage: addr=0x002ef6b0 symbol=_ZN5MOVIE4initEv size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:89.77;m2c:near:70.71;e3:near:58.1
#include "common/types.h"

extern "C" u32 D_003638c0 asm("D_003638c0");
extern "C" u32 D_003638c4 asm("D_003638c4");
extern "C" u32 D_003638c8 asm("D_003638c8");
extern "C" u32 func_00103590(u32, u32) asm("func_00103590");
extern "C" u32 func_00106178(u32, u32) asm("func_00106178");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" void func_00103bb0(u32) asm("func_00103bb0");

// 0x002ef6b0 MOVIE::init()
u32 lift_002ef6b0() asm("_ZN5MOVIE4initEv");
u32 lift_002ef6b0() {
    u32 v0;
    u32 v0_0;
    func_00103bb0(5);
    v0 = func_00106178(func_00170b30(0xa0000), 0xa0000);
    *(u32*)(&D_003638c4) = v0;
    v0_0 = func_00103590(1, v0);
    *(u8*)(&D_003638c0) = 0;
    *(u8*)(&D_003638c8) = 0;
    return v0_0;
}
