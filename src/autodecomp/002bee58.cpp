// coverage: addr=0x002bee58 symbol=func_002bee58 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.68;m2c:near:84.74
#include "common/types.h"

extern "C" u32 D_00361980 asm("D_00361980");
extern "C" u32 D_003637e0 asm("D_003637e0");

// 0x002bee58 func_002bee58
void func_002bee58(u32 a0) asm("func_002bee58");
void func_002bee58(u32 a0) {
    *(u32*)(a0) = (u32)&D_00361980;
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x24))) + 0xc))))(*(u32*)((a0 + 0x24)));
    *(u32*)(a0) = (u32)&D_003637e0;
}
