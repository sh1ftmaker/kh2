// coverage: addr=0x002f0a38 symbol=func_002f0a38 size=48 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:61.17;ghidra:near:55.42
#include "common/types.h"

extern "C" u32 func_0017f5f8(u32, u32, u32, f32, f32) asm("func_0017f5f8");

// 0x002f0a38 func_002f0a38
u32 func_002f0a38(u32 a0) asm("func_002f0a38");
u32 func_002f0a38(u32 a0) {
    return func_0017f5f8(*(u32*)(a0) + 0x140, *(u32*)((a0 + 4)), 0, *(f32*)((a0 + 8)), 0.0f);
}
