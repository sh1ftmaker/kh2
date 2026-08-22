// coverage: addr=0x002eb7f0 symbol=func_002eb7f0 size=116 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:49.62;ghidra:near:31.06
#include "common/types.h"

extern "C" u32 func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" u32 func_002eaf40(u32) asm("func_002eaf40");
extern "C" void func_0017f5f8(u32, u32, u32, f32, f32) asm("func_0017f5f8");

// 0x002eb7f0 func_002eb7f0
u32 func_002eb7f0(u32 a0, u32 a1, f32 fa0) asm("func_002eb7f0");
u32 func_002eb7f0(u32 a0, u32 a1, f32 fa0) {
    func_0017f5f8(a0 + 0x140, a1, 0, fa0, 0.0f);
    return func_0017f5e0(func_002eaf40(a0) + 0x140, a1 + -0x65, 0, fa0, 0.0f);
}
