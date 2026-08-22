// coverage: addr=0x002424c0 symbol=func_002424c0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001058e8(u32) asm("func_001058e8");

// 0x002424c0 func_002424c0
u32 func_002424c0(u32 a0) asm("func_002424c0");
u32 func_002424c0(u32 a0) {
    return (((u32)(0xf423f) < (u32)((*(u32*)((func_001058e8(a0) + 0x2440)) + a0))) ^ 1);
}
