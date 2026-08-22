// coverage: addr=0x003207c8 symbol=func_003207c8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003512e8 asm("D_003512e8");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0016a358(u32) asm("func_0016a358");

// 0x003207c8 func_003207c8
u32 func_003207c8(u32 a0) asm("func_003207c8");
u32 func_003207c8(u32 a0) {
    *(u32*)(a0) = (u32)&D_003512e8;
    func_0016a358(a0);
    return func_00105110(a0);
}
