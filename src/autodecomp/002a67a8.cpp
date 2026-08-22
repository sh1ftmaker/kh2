// coverage: addr=0x002a67a8 symbol=_ZN2Tz8JmBattle13LeaveAllInnerEv size=208 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:89.21;m2c:near:84.71
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f5f0 asm("D_0035f5f0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_002766e0() asm("func_002766e0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");
extern "C" void func_0028be18(u32) asm("func_0028be18");

// 0x002a67a8 Tz::JmBattle::LeaveAllInner()
u32 lift_002a67a8() asm("_ZN2Tz8JmBattle13LeaveAllInnerEv");
u32 lift_002a67a8() {
    u32 s0;
    u32 s1;
    u32 v0;
    s0 = 0;
    s1 = 9;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5f0) + s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035f5f0))) + 0x14))))(s0 + *(u32*)(&D_0035f5f0));
        }
        s0 = (s0 + 0x1b4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(func_0028acc8(*(u32*)(&D_0035f200))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f200));
    }
    if (((s32)(func_00139d78(func_00276348())) != 0)) {
        v0 = func_00276348();
        ((void(*)(u32))(*(u32*)((*(u32*)(v0) + 0x14))))(v0);
    }
    if ((func_0028be58(*(u32*)(&D_0035f214)) != 0)) {
        func_0028be18(*(u32*)(&D_0035f214));
    }
    return func_002766e0();
}
