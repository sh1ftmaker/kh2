// coverage: addr=0x001af778 symbol=func_001af778 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:83.28;ghidra:near:76.52
#include "common/types.h"

extern "C" u32 D_00350dec asm("D_00350dec");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_001af7c0(u32, u32) asm("func_001af7c0");

// 0x001af778 func_001af778
u32 func_001af778(u32 a0) asm("func_001af778");
u32 func_001af778(u32 a0) {
    u32 v0;
    *(u32*)((a0 + 4)) = func_001708f8(*(u32*)(&D_00350dec), 0xffffffff);
    v0 = func_001af7c0(a0, *(u32*)((a0 + 0x30)));
    *(u32*)((a0 + 0x34)) = v0;
    return v0;
}
