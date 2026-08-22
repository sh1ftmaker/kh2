// coverage: addr=0x001db808 symbol=func_001db808 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:53.61;ghidra:near:47.84;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_00352a38 asm("D_00352a38");
extern "C" u32 func_00106420(u32) asm("func_00106420");

// 0x001db808 func_001db808
u32 func_001db808(u32 a0) asm("func_001db808");
u32 func_001db808(u32 a0) {
    *(u32*)(a0) = (u32)&D_00352a38;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 4))) + 4))))(*(u32*)((a0 + 4)), *(u32*)((a0 + 0xc)));
    return func_00106420(a0);
}
