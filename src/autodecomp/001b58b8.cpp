// coverage: addr=0x001b58b8 symbol=func_001b58b8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:52.15
#include "common/types.h"

extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_0016cfa0(u32, u32, u32, u32, u32) asm("func_0016cfa0");

// 0x001b58b8 func_001b58b8
u32 func_001b58b8(u32 a0, u32 a1, u32 a2) asm("func_001b58b8");
u32 func_001b58b8(u32 a0, u32 a1, u32 a2) {
    return func_0016cfa0(*(u32*)((*(u32*)(&D_01d48cb0) + 0x34)), 0, a0, a1, a2);
}
