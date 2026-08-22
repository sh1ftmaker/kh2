// coverage: addr=0x002f1898 symbol=func_002f1898 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:81.58;e3:near:46.05
#include "common/types.h"

extern "C" u32 D_01e2c0d0 asm("D_01e2c0d0");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");

// 0x002f1898 func_002f1898
u32 func_002f1898() asm("func_002f1898");
u32 func_002f1898() {
    return *(u32*)((func_00168b38(*(u32*)(&D_01e2c0d0), 0x19, 0) + 8));
}
