// coverage: addr=0x002ffbe0 symbol=func_002ffbe0 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;ghidra:exact:100.0;m2c:near:79.3
#include "common/types.h"

extern "C" u32 D_00377b68 asm("D_00377b68");

// 0x002ffbe0 func_002ffbe0
u32 func_002ffbe0(u32 a0) asm("func_002ffbe0");
u32 func_002ffbe0(u32 a0) {
    return ((*(u8*)((a0 + (u32)&D_00377b68)) & 2) ? (a0 + -0x20) : a0);
}
