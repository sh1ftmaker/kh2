// coverage: addr=0x001535b0 symbol=func_001535b0 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:69.25
#include "common/types.h"

extern "C" u32 D_0034a778 asm("D_0034a778");
extern "C" u32 func_00153540(u32, u32, u32, u32, u32) asm("func_00153540");

// 0x001535b0 func_001535b0
u32 func_001535b0(u32 a0, u32 a1) asm("func_001535b0");
u32 func_001535b0(u32 a0, u32 a1) {
    return func_00153540(a0 + 0x20, *(u8*)((((a1 * 0x18) + *(u32*)(&D_0034a778)) + 0x14)), *(u8*)((((a1 * 0x18) + *(u32*)(&D_0034a778)) + 0x15)), *(u8*)((((a1 * 0x18) + *(u32*)(&D_0034a778)) + 0x16)), *(u8*)((((a1 * 0x18) + *(u32*)(&D_0034a778)) + 0x17)));
}
