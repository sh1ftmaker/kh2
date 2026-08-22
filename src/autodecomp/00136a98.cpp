// coverage: addr=0x00136a98 symbol=func_00136a98 size=28 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.86;m2c:near:48.2
#include "common/types.h"

extern "C" u32 D_00347d50 asm("D_00347d50");
extern "C" u32 D_00347d54 asm("D_00347d54");
extern "C" u32 D_00347d55 asm("D_00347d55");

// 0x00136a98 func_00136a98
void func_00136a98() asm("func_00136a98");
void func_00136a98() {
    *(u32*)(&D_00347d50) = 0;
    *(u8*)(&D_00347d54) = 0;
    *(u8*)(&D_00347d55) = 0;
}
