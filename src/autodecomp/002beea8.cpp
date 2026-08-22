// coverage: addr=0x002beea8 symbol=func_002beea8 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:85.5;ghidra:near:76.54
#include "common/types.h"

extern "C" u32 D_00361980 asm("D_00361980");
extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 func_00105110(u32) asm("func_00105110");

// 0x002beea8 func_002beea8
u32 func_002beea8(u32 a0) asm("func_002beea8");
u32 func_002beea8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00361980;
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x24))) + 0xc))))(*(u32*)((a0 + 0x24)));
    *(u32*)(a0) = (u32)&D_003637e0;
    return func_00105110(a0);
}
