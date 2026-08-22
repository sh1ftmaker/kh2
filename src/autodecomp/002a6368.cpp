// coverage: addr=0x002a6368 symbol=func_002a6368 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:68.77;m2c:near:68.77
#include "common/types.h"

extern "C" u32 func_00294000(u32) asm("func_00294000");

// 0x002a6368 func_002a6368
u32 func_002a6368(u32 a0) asm("func_002a6368");
u32 func_002a6368(u32 a0) {
    u32 v0;
    v0 = (func_00294000(6) + 0x10);
    return (v0 + (a0 << 3));
}
