// coverage: addr=0x002e8c58 symbol=func_002e8c58 size=36 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.56;m2c:near:32.67
#include "common/types.h"

extern "C" u32 func_002e95a0(u32, f32, f32) asm("func_002e95a0");

// 0x002e8c58 func_002e8c58
u32 func_002e8c58(u32 a0) asm("func_002e8c58");
u32 func_002e8c58(u32 a0) {
    return func_002e95a0(*(u32*)(a0), *(f32*)((a0 + 4)), *(f32*)((a0 + 8)));
}
