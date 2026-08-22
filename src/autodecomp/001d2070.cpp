// coverage: addr=0x001d2070 symbol=func_001d2070 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003525e8 asm("D_003525e8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001d2210(u32) asm("func_001d2210");

// 0x001d2070 func_001d2070
u32 func_001d2070(u32 a0) asm("func_001d2070");
u32 func_001d2070(u32 a0) {
    *(u32*)(a0) = (u32)&D_003525e8;
    func_001d2210(a0);
    return func_00106420(a0);
}
