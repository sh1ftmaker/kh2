// coverage: addr=0x001d9ef0 symbol=func_001d9ef0 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:75.0;m2c:near:71.25;ghidra:near:65.67;e3:near:33.27
#include "common/types.h"

extern "C" u32 D_00352908 asm("D_00352908");
extern "C" u32 func_001980d0(u32, u32, u32, u32) asm("func_001980d0");

// 0x001d9ef0 func_001d9ef0
u32 func_001d9ef0(u32 a0, u32 a1, u32 a2) asm("func_001d9ef0");
u32 func_001d9ef0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_001980d0(a0, a1, 0xa, a2);
    *(u32*)(a0) = (u32)&D_00352908;
    *(u32*)((a0 + 0x9f4)) = 0;
    *(u32*)((a0 + 0x9f8)) = 0;
    return v0;
}
