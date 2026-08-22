// coverage: addr=0x002db730 symbol=func_002db730 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003626a8 asm("D_003626a8");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002db530(u32) asm("func_002db530");

// 0x002db730 func_002db730
u32 func_002db730(u32 a0) asm("func_002db730");
u32 func_002db730(u32 a0) {
    *(u32*)(a0) = (u32)&D_003626a8;
    func_002db530(a0);
    return func_00105110(a0);
}
