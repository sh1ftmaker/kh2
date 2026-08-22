// coverage: addr=0x00276410 symbol=func_00276410 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:93.9;e3:near:23.76
#include "common/types.h"

extern "C" u32 D_0035f3a8 asm("D_0035f3a8");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" u32 func_002537c8(u32) asm("func_002537c8");

// 0x00276410 func_00276410
u32 func_00276410() asm("func_00276410");
u32 func_00276410() {
    return func_0023fa08((u32)&D_0035f3a8, func_002537c8(3));
}
