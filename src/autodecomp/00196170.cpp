// coverage: addr=0x00196170 symbol=func_00196170 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:83.17;e3:near:62.27
#include "common/types.h"

extern "C" u32 D_00350330 asm("D_00350330");
extern "C" u32 D_01c61b00 asm("D_01c61b00");
extern "C" u32 func_001b1448(u32) asm("func_001b1448");

// 0x00196170 func_00196170
u32 func_00196170() asm("func_00196170");
u32 func_00196170() {
    u32 v0;
    v0 = func_001b1448(*(u32*)(&D_00350330));
    *(u32*)(&D_01c61b00) = v0;
    return v0;
}
