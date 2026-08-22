// coverage: addr=0x001ce1a0 symbol=_ZN2YS4PREF4InitEPv size=164 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.49;m2c:near:70.49;e3:near:45.76
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 D_00352134 asm("D_00352134");
extern "C" u32 D_0036e2c0 asm("D_0036e2c0");
extern "C" u32 D_0036e2c8 asm("D_0036e2c8");
extern "C" u32 D_0036e2d0 asm("D_0036e2d0");
extern "C" u32 D_0036e2d8 asm("D_0036e2d8");
extern "C" u32 D_0036e2e0 asm("D_0036e2e0");
extern "C" u32 D_01d5b9d0 asm("D_01d5b9d0");
extern "C" u32 D_01d5b9d4 asm("D_01d5b9d4");
extern "C" u32 D_01d5b9d8 asm("D_01d5b9d8");
extern "C" u32 D_01d5b9dc asm("D_01d5b9dc");
extern "C" u32 func_001ce248(u32, u32) asm("func_001ce248");
extern "C" u32 func_001ce2a0(u32, u32, u32) asm("func_001ce2a0");

// 0x001ce1a0 YS::PREF::Init(void*)
u32 lift_001ce1a0(u32 a0) asm("_ZN2YS4PREF4InitEPv");
u32 lift_001ce1a0(u32 a0) {
    u32 v0;
    *(u32*)(&D_00352134) = a0;
    *(u32*)(&D_01d5b9d0) = func_001ce248(2, (u32)&D_0036e2c0);
    *(u32*)(&D_01d5b9d4) = func_001ce248(2, (u32)&D_0036e2c8);
    *(u32*)(&D_01d5b9d8) = func_001ce248(2, (u32)&D_0036e2d0);
    *(u32*)(&D_01d5b9dc) = func_001ce248(2, (u32)&D_0036e2d8);
    v0 = func_001ce2a0(func_001ce248(2, (u32)&D_0036e2e0), 0, 0);
    *(u32*)(&D_00352130) = v0;
    return v0;
}
