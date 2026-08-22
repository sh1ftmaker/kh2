// coverage: addr=0x0031d7c0 symbol=func_0031d7c0 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:75.17;e3:near:43.52;m2c:near:33.18
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");

// 0x0031d7c0 func_0031d7c0
void func_0031d7c0(u32 a0) asm("func_0031d7c0");
void func_0031d7c0(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
}
