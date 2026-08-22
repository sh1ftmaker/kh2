// coverage: addr=0x001e0f90 symbol=func_001e0f90 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:94.06
#include "common/types.h"

extern "C" u32 D_00352bd0 asm("D_00352bd0");
extern "C" u32 func_001e0cc8(u32) asm("func_001e0cc8");
extern "C" u32 func_001e26b8(u32, u32) asm("func_001e26b8");

// 0x001e0f90 func_001e0f90
u32 func_001e0f90(u32 a0) asm("func_001e0f90");
u32 func_001e0f90(u32 a0) {
    u32 v0;
    v0 = func_001e26b8(*(u32*)(&D_00352bd0), func_001e0cc8(a0));
    *(u32*)((a0 + 0x24)) = 5;
    *(u32*)((a0 + 0x28)) = 0;
    return v0;
}
