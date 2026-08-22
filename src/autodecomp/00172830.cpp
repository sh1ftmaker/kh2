// coverage: addr=0x00172830 symbol=func_00172830 size=36 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:76.11
#include "common/types.h"

extern "C" u32 func_001b0700(u32, f32) asm("func_001b0700");

// 0x00172830 func_00172830
u32 func_00172830(u32 a0) asm("func_00172830");
u32 func_00172830(u32 a0) {
    return func_001b0700(*(u32*)((*(u32*)(a0) + 4)) + 0x4a0, *(f32*)((a0 + 4)));
}
