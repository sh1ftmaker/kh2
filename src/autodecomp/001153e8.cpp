// coverage: addr=0x001153e8 symbol=func_001153e8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00347050 asm("D_00347050");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_00113668(u32) asm("func_00113668");

// 0x001153e8 func_001153e8
u32 func_001153e8(u32 a0) asm("func_001153e8");
u32 func_001153e8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347050;
    func_00113668(a0);
    return func_00105110(a0);
}
