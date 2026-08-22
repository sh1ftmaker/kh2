// coverage: addr=0x001d29a0 symbol=func_001d29a0 size=40 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:58.9;ghidra:near:53.0
#include "common/types.h"

extern "C" u32 func_001a5990(u32, u32, f32) asm("func_001a5990");

// 0x001d29a0 func_001d29a0
// minilink-rodata 0x0036e3c8   (float literals live here in the original)
u32 func_001d29a0(u32 a0, u32 a1) asm("func_001d29a0");
u32 func_001d29a0(u32 a0, u32 a1) {
    return func_001a5990(a1, 0, 1.0f);
}
