// coverage: addr=0x0031e068 symbol=func_0031e068 size=48 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:98.92;ghidra:near:97.25;m2c:near:97.25;e3:near:32.83
#include "common/types.h"

extern "C" u32 D_00348698 asm("D_00348698");
extern "C" u32 D_00348d58 asm("D_00348d58");
extern "C" u32 func_00106420(u32) asm("func_00106420");

// 0x0031e068 func_0031e068
u32 func_0031e068(u32 a0) asm("func_0031e068");
u32 func_0031e068(u32 a0) {
    *(u32*)((a0 + 0x1a0)) = (u32)&D_00348698;
    *(u32*)((a0 + 0x90)) = (u32)&D_00348698;
    *(u32*)(a0) = (u32)&D_00348d58;
    return func_00106420(a0);
}
