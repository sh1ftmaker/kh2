// coverage: addr=0x00172f00 symbol=func_00172f00 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:81.82
#include "common/types.h"

extern "C" u32 func_00187a18(u32, u32, u32, u32, u32) asm("func_00187a18");

// 0x00172f00 func_00172f00
u32 func_00172f00(u32 a0) asm("func_00172f00");
u32 func_00172f00(u32 a0) {
    return func_00187a18(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)), a0 + 0x10);
}
