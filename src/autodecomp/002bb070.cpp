// coverage: addr=0x002bb070 symbol=func_002bb070 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:26.67
#include "common/types.h"

extern "C" u32 func_002baf48(u32, u32, u32, u32, u32, u32) asm("func_002baf48");

// 0x002bb070 func_002bb070
u32 func_002bb070(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002bb070");
u32 func_002bb070(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_002baf48(a0, 3, a1, a2, a3, a4);
}
