// coverage: addr=0x00171910 symbol=func_00171910 size=32 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:74.75;ghidra:near:74.38
#include "common/types.h"

extern "C" u32 func_0016aeb8(u32, f32) asm("func_0016aeb8");

// 0x00171910 func_00171910
u32 func_00171910(u32 a0) asm("func_00171910");
u32 func_00171910(u32 a0) {
    return func_0016aeb8(*(u32*)((*(u32*)(a0) + 4)), *(f32*)((a0 + 4)));
}
