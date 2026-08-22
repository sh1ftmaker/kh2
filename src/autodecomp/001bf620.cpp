// coverage: addr=0x001bf620 symbol=_ZN2YS8PRIZEBOX6AppearEiRKN2kn7FVectorE size=132 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.64;ghidra:near:68.61
#include "common/types.h"

extern "C" u32 D_0036dcf8 asm("D_0036dcf8");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_001a80c8(u32, u32) asm("func_001a80c8");
extern "C" void func_001bf270(u32, u32, u32, u32, f32) asm("func_001bf270");

// 0x001bf620 YS::PRIZEBOX::Appear(int, kn::FVector const&)
u32 lift_001bf620(u32 a0, u32 a1) asm("_ZN2YS8PRIZEBOX6AppearEiRKN2kn7FVectorE");
u32 lift_001bf620(u32 a0, u32 a1) {
    u32 s0;
    u32 s1;
    s0 = ((*(u8*)((func_001a80c8(a0, a1) + 0x16)) << 3) + (u32)&D_0036dcf8);
    s1 = func_001050d8(0x9f0);
    func_001bf270(s1, func_0016e920(*(u32*)(s0)), a1, a0, *(f32*)((s0 + 4)));
    return s1;
}
