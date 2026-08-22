// coverage: addr=0x002c1950 symbol=func_002c1950 size=64 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:54.06;m2c:near:45.25
#include "common/types.h"

extern "C" u32 func_002c5fa0(u32) asm("func_002c5fa0");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x002c1950 func_002c1950
// minilink-rodata 0x003754e8   (float literals live here in the original)
u32 func_002c1950(u32 a0, u32 a1) asm("func_002c1950");
u32 func_002c1950(u32 a0, u32 a1) {
    func_0017f488(a1 + 0x140, 0, 8.0f, 0.0f);
    return func_002c5fa0(a1);
}
