// coverage: addr=0x00322e18 symbol=func_00322e18 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:75.17;m2c:near:33.18;e3:near:19.31
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");

// 0x00322e18 func_00322e18
void func_00322e18(u32 a0) asm("func_00322e18");
void func_00322e18(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
}
