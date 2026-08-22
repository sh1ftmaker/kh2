// coverage: addr=0x002a0360 symbol=func_002a0360 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.62;ghidra:near:60.52;e3:near:49.17
#include "common/types.h"

extern "C" u32 D_0035f5d0 asm("D_0035f5d0");
extern "C" u32 func_00276c18() asm("func_00276c18");

// 0x002a0360 func_002a0360
u32 func_002a0360() asm("func_002a0360");
u32 func_002a0360() {
    u32 s0;
    s0 = *(s8*)(*(u32*)(&D_0035f5d0));
    return (func_00276c18() ? 1 : ((u32)(0) < (u32)(s0)));
}
