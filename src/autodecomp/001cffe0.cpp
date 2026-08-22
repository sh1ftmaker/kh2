// coverage: addr=0x001cffe0 symbol=func_001cffe0 size=132 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:61.67;m2c:near:49.09
#include "common/types.h"

extern "C" u32 D_0036e368 asm("D_0036e368");
extern "C" u32 func_001987a8(u32, u32, u32) asm("func_001987a8");
extern "C" void func_001780d8(u32) asm("func_001780d8");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_00198860(u32, u32) asm("func_00198860");

// 0x001cffe0 func_001cffe0
u32 func_001cffe0(u32 a0) asm("func_001cffe0");
u32 func_001cffe0(u32 a0) {
    func_001780d8(a0);
    func_00198860(a0, 1);
    func_0017f488(a0 + 0x140, 0xbf, 0.0f, 0.0f);
    func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
    return func_001987a8(a0, (u32)&D_0036e368, a0);
}
