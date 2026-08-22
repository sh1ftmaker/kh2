// coverage: addr=0x001727c8 symbol=func_001727c8 size=52 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:58.62
#include "common/types.h"

extern "C" u32 func_001b0798(u32, u32, u32, f32) asm("func_001b0798");

// 0x001727c8 func_001727c8
u32 func_001727c8(u32 a0) asm("func_001727c8");
u32 func_001727c8(u32 a0) {
    return func_001b0798(*(u32*)((*(u32*)(a0) + 4)) + 0x4a0, *(u32*)((*(u32*)((a0 + 4)) + 4)), 1, *(f32*)((a0 + 8)));
}
