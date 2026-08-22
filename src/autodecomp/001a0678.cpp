// coverage: addr=0x001a0678 symbol=func_001a0678 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:84.62
#include "common/types.h"

extern "C" u32 func_001d5af8(u32, u32, u32) asm("func_001d5af8");

// 0x001a0678 func_001a0678
u32 func_001a0678(u32 a0) asm("func_001a0678");
u32 func_001a0678(u32 a0) {
    u32 v0;
    v0 = func_001d5af8(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)));
    *(u32*)(a0) = v0;
    return v0;
}
