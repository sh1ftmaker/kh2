// coverage: addr=0x00295228 symbol=func_00295228 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.17;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_00295158(u32) asm("func_00295158");

// 0x00295228 func_00295228
u32 func_00295228(u32 a0) asm("func_00295228");
u32 func_00295228(u32 a0) {
    u32 s0;
    s0 = (func_00294000(0) + 0x10);
    return *(s8*)(((func_00295158(a0) << 4) + s0));
}
