// coverage: addr=0x002dad40 symbol=func_002dad40 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003627c8 asm("D_003627c8");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002cff98(u32) asm("func_002cff98");

// 0x002dad40 func_002dad40
u32 func_002dad40(u32 a0) asm("func_002dad40");
u32 func_002dad40(u32 a0) {
    *(u32*)(a0) = (u32)&D_003627c8;
    func_002cff98(a0);
    return func_00105110(a0);
}
