// coverage: addr=0x001344b8 symbol=func_001344b8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:96.0
#include "common/types.h"

extern "C" u32 D_00347c88 asm("D_00347c88");
extern "C" u32 func_00133bb8(u32, u32, u32, u32) asm("func_00133bb8");

// 0x001344b8 func_001344b8
u32 func_001344b8(u32 a0) asm("func_001344b8");
u32 func_001344b8(u32 a0) {
    return func_00133bb8((u32)&D_00347c88, 0, a0 | 0x3000000, ((0x400 - a0) >> 1) | 0x2000000);
}
