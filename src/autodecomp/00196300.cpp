// coverage: addr=0x00196300 symbol=func_00196300 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:93.2;m2c:near:83.17
#include "common/types.h"

extern "C" u32 D_00350334 asm("D_00350334");
extern "C" u32 D_01c61b04 asm("D_01c61b04");
extern "C" u32 func_001b1448(u32) asm("func_001b1448");

// 0x00196300 func_00196300
u32 func_00196300() asm("func_00196300");
u32 func_00196300() {
    u32 v0;
    v0 = func_001b1448(*(u32*)(&D_00350334));
    *(u32*)(&D_01c61b04) = v0;
    return v0;
}
