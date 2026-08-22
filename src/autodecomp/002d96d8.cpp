// coverage: addr=0x002d96d8 symbol=func_002d96d8 size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.62;m2c:near:86.81
#include "common/types.h"

extern "C" u32 D_003625e0 asm("D_003625e0");
extern "C" u32 func_002d0ea8(u32) asm("func_002d0ea8");

// 0x002d96d8 func_002d96d8
u32 func_002d96d8(u32 a0) asm("func_002d96d8");
u32 func_002d96d8(u32 a0) {
    u32 v0;
    v0 = func_002d0ea8(a0);
    *(u32*)(a0) = (u32)&D_003625e0;
    *(u32*)((a0 + 0xbf0)) = 0;
    *(u32*)((a0 + 0xbf4)) = 0;
    *(u8*)((a0 + 0xbfc)) = 1;
    *(u32*)((a0 + 0xc00)) = 0;
    *(u8*)((a0 + 0xc04)) = 1;
    *(u32*)((a0 + 0xc90)) = 0;
    *(u32*)((a0 + 0xc94)) = 0;
    *(u32*)((a0 + 0xc98)) = 0;
    return v0;
}
