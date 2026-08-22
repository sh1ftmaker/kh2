// coverage: addr=0x001e2788 symbol=func_001e2788 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.77;m2c:near:98.77;corpus:near:87.71
#include "common/types.h"

extern "C" u32 func_001e17b8(u32) asm("func_001e17b8");

// 0x001e2788 func_001e2788
u32 func_001e2788(u32 a0) asm("func_001e2788");
u32 func_001e2788(u32 a0) {
    *(u32*)((a0 + 0xdc0)) = 0;
    *(u32*)((a0 + 0xdc4)) = 0;
    *(u32*)((a0 + 0xdcc)) = 0;
    *(u32*)((a0 + 0xdd0)) = 0;
    *(u32*)((a0 + 0xde4)) = 0;
    *(u32*)((a0 + 0xdec)) = 0;
    *(u32*)((a0 + 0xe00)) = 0xffffffff;
    return func_001e17b8(a0);
}
