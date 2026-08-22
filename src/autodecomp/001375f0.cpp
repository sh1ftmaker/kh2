// coverage: addr=0x001375f0 symbol=func_001375f0 size=64 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:61.5;ghidra:near:50.17
#include "common/types.h"

extern "C" u32 func_001374c8(u32, u32, u32, u32, f32) asm("func_001374c8");

// 0x001375f0 func_001375f0
// minilink-rodata 0x0036ac9c   (float literals live here in the original)
u32 func_001375f0(u32 a0, u32 a1, u32 a2) asm("func_001375f0");
u32 func_001375f0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_001374c8(a0, 0x4f, a1, a2, 60.0f);
    *(u32*)((a0 + 0x518)) = 0;
    return v0;
}
