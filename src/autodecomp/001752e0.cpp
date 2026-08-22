// coverage: addr=0x001752e0 symbol=func_001752e0 size=32 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:74.75;ghidra:near:74.38;e3:near:15.35
#include "common/types.h"

extern "C" u32 func_001cc9c8(u32, f32) asm("func_001cc9c8");

// 0x001752e0 func_001752e0
u32 func_001752e0(u32 a0) asm("func_001752e0");
u32 func_001752e0(u32 a0) {
    return func_001cc9c8(*(u32*)((*(u32*)(a0) + 4)), *(f32*)((a0 + 4)));
}
