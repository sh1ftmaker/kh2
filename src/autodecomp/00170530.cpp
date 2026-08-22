// coverage: addr=0x00170530 symbol=func_00170530 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:78.0;ghidra:near:68.27;e3:near:45.87
#include "common/types.h"

extern "C" u32 func_00170400(u32, u32, u32) asm("func_00170400");

// 0x00170530 func_00170530
u32 func_00170530(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00170530");
u32 func_00170530(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    v0 = func_00170400(a0, a1, a3);
    *(u8*)(v0) = 1;
    *(u16*)((v0 + 0x38)) = a2;
    *(u16*)((v0 + 0x3a)) = 0xffffffff;
    return v0;
}
