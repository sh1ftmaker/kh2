// coverage: addr=0x001af360 symbol=func_001af360 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:84.62
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001aedf8(u32, u32, u32) asm("func_001aedf8");

// 0x001af360 func_001af360
u32 func_001af360(u32 a0) asm("func_001af360");
u32 func_001af360(u32 a0) {
    return func_001aedf8(func_001050d8(0x50), a0, 3);
}
