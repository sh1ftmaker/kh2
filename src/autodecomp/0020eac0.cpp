// coverage: addr=0x0020eac0 symbol=func_0020eac0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:62.42;m2c:near:47.31
#include "common/types.h"

extern "C" u32 D_00359780 asm("D_00359780");
extern "C" u32 D_00359788 asm("D_00359788");
extern "C" u32 D_00359808 asm("D_00359808");
extern "C" u32 D_00359810 asm("D_00359810");

// 0x0020eac0 func_0020eac0
void func_0020eac0() asm("func_0020eac0");
void func_0020eac0() {
    *(u32*)(&D_00359780) = 0;
    *(u32*)(&D_00359788) = 0x70000000;
    *(u32*)(&D_00359808) = 0;
    *(u32*)(&D_00359810) = 0x70004000;
}
