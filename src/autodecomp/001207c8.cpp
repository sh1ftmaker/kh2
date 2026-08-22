// coverage: addr=0x001207c8 symbol=func_001207c8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00347a28 asm("D_00347a28");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_0011ee58(u32) asm("func_0011ee58");

// 0x001207c8 func_001207c8
u32 func_001207c8(u32 a0) asm("func_001207c8");
u32 func_001207c8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347a28;
    func_0011ee58(a0);
    return func_00106420(a0);
}
