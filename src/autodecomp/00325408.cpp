// coverage: addr=0x00325408 symbol=func_00325408 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003622c0 asm("D_003622c0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002d0f38(u32) asm("func_002d0f38");

// 0x00325408 func_00325408
u32 func_00325408(u32 a0) asm("func_00325408");
u32 func_00325408(u32 a0) {
    *(u32*)(a0) = (u32)&D_003622c0;
    func_002d0f38(a0);
    return func_00105110(a0);
}
