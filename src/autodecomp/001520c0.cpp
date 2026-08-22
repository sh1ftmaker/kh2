// coverage: addr=0x001520c0 symbol=func_001520c0 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:69.72
#include "common/types.h"

extern "C" u32 func_00151d48(u32) asm("func_00151d48");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x001520c0 func_001520c0
u32 func_001520c0(u32 a0, u32 a1) asm("func_001520c0");
u32 func_001520c0(u32 a0, u32 a1) {
    *(u32*)((a0 + 0xb4c)) = (*(u32*)((a0 + 0xb4c)) + a1);
    func_00138c10(a0 + 0x30, 0x11);
    return func_00151d48(a0);
}
