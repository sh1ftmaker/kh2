// coverage: addr=0x001668f8 symbol=func_001668f8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.85;m2c:near:75.38;corpus:near:64.54
#include "common/types.h"

extern "C" u32 func_001666a0(u32) asm("func_001666a0");

// 0x001668f8 func_001668f8
u32 func_001668f8(u32 a0) asm("func_001668f8");
u32 func_001668f8(u32 a0) {
    u32 v0;
    v0 = func_001666a0(a0);
    *(u16*)((a0 + 0xa)) = 0;
    *(u16*)((a0 + 0xc)) = 0;
    *(u8*)((a0 + 0xe)) = 1;
    return v0;
}
