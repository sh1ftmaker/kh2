// coverage: addr=0x001db7d0 symbol=func_001db7d0 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.21;m2c:near:61.29;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_00352a38 asm("D_00352a38");

// 0x001db7d0 func_001db7d0
void func_001db7d0(u32 a0) asm("func_001db7d0");
void func_001db7d0(u32 a0) {
    *(u32*)(a0) = (u32)&D_00352a38;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 4))) + 4))))(*(u32*)((a0 + 4)), *(u32*)((a0 + 0xc)));
}
