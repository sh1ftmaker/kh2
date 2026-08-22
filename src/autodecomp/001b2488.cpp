// coverage: addr=0x001b2488 symbol=func_001b2488 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:82.27
#include "common/types.h"

extern "C" u32 D_01d48c80 asm("D_01d48c80");
extern "C" u32 func_003201e8(u32, u32) asm("func_003201e8");
extern "C" void func_00105110(u32) asm("func_00105110");

// 0x001b2488 func_001b2488
u32 func_001b2488(u32 a0) asm("func_001b2488");
u32 func_001b2488(u32 a0) {
    func_00105110(*(u32*)((a0 + 0x14)));
    return func_003201e8((u32)&D_01d48c80, a0);
}
