// coverage: addr=0x001a3a88 symbol=_ZN2YS6EFFECT4InitEv size=124 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.39;m2c:near:89.26;e3:near:25.76
#include "common/types.h"

extern "C" u32 D_00350748 asm("D_00350748");
extern "C" u32 D_01c6cae0 asm("D_01c6cae0");
extern "C" u32 D_01c6cafc asm("D_01c6cafc");
extern "C" u32 D_01c6cb00 asm("D_01c6cb00");
extern "C" u32 D_01c6cb10 asm("D_01c6cb10");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_001dddd0(u32, u32) asm("func_001dddd0");

// 0x001a3a88 YS::EFFECT::Init()
u32 lift_001a3a88() asm("_ZN2YS6EFFECT4InitEv");
u32 lift_001a3a88() {
    u32 v0;
    u32 v0_0;
    u32 t6;
    u32 t7;
    v0 = func_001708f8(*(u32*)(&D_00350748), 0xffffffff);
    *(u32*)(&D_01c6cafc) = v0;
    v0_0 = func_001dddd0((u32)&D_01c6cae0, *(u32*)((func_00168b38(v0, 0x12, 0) + 8)));
    t6 = 3;
    t7 = (u32)&D_01c6cb00;
    do {
        *(u32*)((t7 + ((t6 - 3) * -4))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    *(u32*)(&D_01c6cb10) = 0;
    return v0_0;
}
