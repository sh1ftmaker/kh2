// coverage: addr=0x0031e008 symbol=func_0031e008 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:59.41;m2c:near:29.0
#include "common/types.h"

extern "C" u32 D_0034b268 asm("D_0034b268");
extern "C" u32 D_0034b278 asm("D_0034b278");

// 0x0031e008 func_0031e008
void func_0031e008(u32 a0) asm("func_0031e008");
void func_0031e008(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034b268;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034b278)) + 4))))(*(u32*)(&D_0034b278), a0);
}
