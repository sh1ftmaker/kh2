// coverage: addr=0x0031e0b8 symbol=func_0031e0b8 size=44 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.64;ghidra:near:96.36;m2c:near:96.36;e3:near:43.55
#include "common/types.h"

extern "C" u32 D_00348698 asm("D_00348698");
extern "C" u32 D_00348d58 asm("D_00348d58");
extern "C" u32 func_00106420(u32) asm("func_00106420");

// 0x0031e0b8 func_0031e0b8
u32 func_0031e0b8(u32 a0) asm("func_0031e0b8");
u32 func_0031e0b8(u32 a0) {
    *(u32*)((a0 + 0x50)) = (u32)&D_00348698;
    *(u32*)(a0) = (u32)&D_00348d58;
    return func_00106420(a0);
}
