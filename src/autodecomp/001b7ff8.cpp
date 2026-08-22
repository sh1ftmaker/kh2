// coverage: addr=0x001b7ff8 symbol=func_001b7ff8 size=20 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.0;m2c:near:96.0;corpus:near:59.6
#include "common/types.h"


// 0x001b7ff8 func_001b7ff8
u32 func_001b7ff8(u32 a0, u32 a1) asm("func_001b7ff8");
u32 func_001b7ff8(u32 a0, u32 a1) {
    u32 v0;
    v0 = *(u32*)((a0 + 8));
    *(u32*)((a0 + 8)) = (*(u32*)((a0 + 8)) + (a1 << 4));
    return v0;
}
