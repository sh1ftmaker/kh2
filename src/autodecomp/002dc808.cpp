// coverage: addr=0x002dc808 symbol=func_002dc808 size=68 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.24;ghidra:near:87.94
#include "common/types.h"

extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");

// 0x002dc808 func_002dc808
f32 func_002dc808(u32 a0) asm("func_002dc808");
f32 func_002dc808(u32 a0) {
    f32 f0;
    f0 = ((s32)(*(u32*)(((a0 + 0x8000) + 0x70))) != 0) ? *(f32*)((func_002dc7c8(a0) + 0xb4)) : *(f32*)(func_002dc7c8(a0));
    return f0;
}
