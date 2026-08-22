// coverage: addr=0x00135dc8 symbol=func_00135dc8 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;m2c:near:86.94;ghidra:near:74.95
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_00135e50(u32) asm("func_00135e50");

// 0x00135dc8 func_00135dc8
u32 func_00135dc8(u32 a0) asm("func_00135dc8");
u32 func_00135dc8(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_001050d8(0x110);
    v0_0 = func_00135e50(v0);
    *(u32*)((v0 + 4)) = a0;
    *(u32*)(a0) = v0;
    return v0_0;
}
