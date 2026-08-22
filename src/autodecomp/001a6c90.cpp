// coverage: addr=0x001a6c90 symbol=func_001a6c90 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.69;m2c:near:99.69
#include "common/types.h"

extern "C" u32 D_0032dec0 asm("D_0032dec0");
extern "C" u32 func_001d59b0(u32) asm("func_001d59b0");

// 0x001a6c90 func_001a6c90
u32 func_001a6c90(u32 a0) asm("func_001a6c90");
u32 func_001a6c90(u32 a0) {
    *(u32*)((((a0 >> 5) << 2) + (u32)&D_0032dec0)) = (*(u32*)((((a0 >> 5) << 2) + (u32)&D_0032dec0)) | (1 << (a0 & 0x1f)));
    return func_001d59b0(a0 & 0x1f);
}
