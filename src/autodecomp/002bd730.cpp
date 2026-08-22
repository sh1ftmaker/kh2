// coverage: addr=0x002bd730 symbol=func_002bd730 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:24.85
#include "common/types.h"

extern "C" u32 D_003617ec asm("D_003617ec");
extern "C" u32 D_003617f0 asm("D_003617f0");
extern "C" u32 func_002b8824(u32, u32, u32, u32, u32) asm("func_002b8824");

// 0x002bd730 func_002bd730
u32 func_002bd730(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002bd730");
u32 func_002bd730(u32 a0, u32 a1, u32 a2, u32 a3) {
    *(u32*)(&D_003617f0) = a0;
    return func_002b8824(*(u32*)(&D_003617ec), a1, 0x40, a2, a3);
}
