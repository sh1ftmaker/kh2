// coverage: addr=0x002ed2b0 symbol=func_002ed2b0 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:87.62;m2c:near:49.68
#include "common/types.h"

extern "C" u32 D_00363748 asm("D_00363748");
extern "C" u32 D_00363758 asm("D_00363758");
extern "C" u32 func_001c23a8(u32, u32, u32, u32, u32, u32, u32) asm("func_001c23a8");

// 0x002ed2b0 func_002ed2b0
u32 func_002ed2b0(u32 a0, u32 a1, u32 a2) asm("func_002ed2b0");
u32 func_002ed2b0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_001c23a8(a0, a1, 0, 1, 0, 0x80, a2);
    *(u32*)(a0) = (u32)&D_00363758;
    *(u32*)(&D_00363748) = a0;
    return v0;
}
