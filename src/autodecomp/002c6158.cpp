// coverage: addr=0x002c6158 symbol=func_002c6158 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:0.0;m2c:near:0.0
#include "common/types.h"

extern "C" u32 D_002c6380 asm("D_002c6380");
extern "C" u32 func_002c6190(u32) asm("func_002c6190");

// 0x002c6158 func_002c6158
u32 func_002c6158(u32 a0) asm("func_002c6158");
u32 func_002c6158(u32 a0) {
    *(u32*)(a0) = 1;
    *(u32*)((a0 + 4)) = 0x6590;
    *(u32*)((a0 + 8)) = (u32)&D_002c6380;
    *(u32*)((a0 + 0xc)) = 0;
    return func_002c6190(a0);
}
