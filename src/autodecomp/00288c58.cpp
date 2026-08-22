// coverage: addr=0x00288c58 symbol=func_00288c58 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00288be8(u32) asm("func_00288be8");

// 0x00288c58 func_00288c58
u32 func_00288c58(u32 a0, u32 a1) asm("func_00288c58");
u32 func_00288c58(u32 a0, u32 a1) {
    u32 v0;
    *(u32*)((a0 + 0x28)) = func_00288be8(a1 << 2);
    *(u32*)((a0 + 0x2c)) = func_00288be8(a1 << 3);
    v0 = func_00288be8(a1 << 3);
    *(u32*)((a0 + 0x30)) = v0;
    return v0;
}
