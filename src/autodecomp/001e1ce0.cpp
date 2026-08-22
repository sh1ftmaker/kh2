// coverage: addr=0x001e1ce0 symbol=func_001e1ce0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.87;m2c:near:99.87
#include "common/types.h"

extern "C" u32 func_001e1988(u32) asm("func_001e1988");

// 0x001e1ce0 func_001e1ce0
u32 func_001e1ce0(u32 a0) asm("func_001e1ce0");
u32 func_001e1ce0(u32 a0) {
    u32 v0;
    v0 = func_001e1988(a0);
    *(u32*)((a0 + 0xdc0)) = 1;
    *(u32*)((a0 + 0xde4)) = 0;
    *(u32*)((a0 + 0xde8)) = 0;
    *(u32*)((a0 + 0xdec)) = *(u32*)((a0 + 0xdcc));
    return v0;
}
