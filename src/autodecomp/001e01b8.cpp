// coverage: addr=0x001e01b8 symbol=func_001e01b8 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.33;m2c:near:71.46
#include "common/types.h"

extern "C" u32 D_01d9e340 asm("D_01d9e340");

// 0x001e01b8 func_001e01b8
void func_001e01b8(u32 a0) asm("func_001e01b8");
void func_001e01b8(u32 a0) {
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_01d9e340)) + 4))))(*(u32*)(&D_01d9e340), a0);
}
