// coverage: addr=0x0014eb48 symbol=func_0014eb48 size=144 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:80.39;ghidra:near:72.86
#include "common/types.h"

extern "C" u32 D_0034a3f0 asm("D_0034a3f0");
extern "C" u32 D_0034a3f4 asm("D_0034a3f4");
extern "C" u32 D_0034a3f8 asm("D_0034a3f8");
extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_0014e8b8(u32) asm("func_0014e8b8");
extern "C" void func_00141010(u32, u32, f32) asm("func_00141010");
extern "C" void func_0014e658(u32) asm("func_0014e658");
extern "C" void func_0014e6f8(u32) asm("func_0014e6f8");

// 0x0014eb48 func_0014eb48
// minilink-rodata 0x0036b1fc   (float literals live here in the original)
u32 func_0014eb48(u32 a0, u32 a1, f32 fa0) asm("func_0014eb48");
u32 func_0014eb48(u32 a0, u32 a1, f32 fa0) {
    u32 v0;
    func_00141010(a0, a1, 30.0f);
    v0 = func_00140df0();
    *(u32*)((v0 + 0x40)) = 9;
    *(u32*)(&D_0034a3f0) = a0;
    *(u32*)(&D_0034a3f4) = a1;
    *(f32*)(&D_0034a3f8) = fa0;
    func_0014e658(v0);
    func_0014e6f8(v0);
    return func_0014e8b8(v0);
}
