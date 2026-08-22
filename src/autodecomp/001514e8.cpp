// coverage: addr=0x001514e8 symbol=func_001514e8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:78.53;ghidra:near:73.1
#include "common/types.h"

extern "C" u32 func_00150be8(u32) asm("func_00150be8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x001514e8 func_001514e8
u32 func_001514e8(u32 a0) asm("func_001514e8");
u32 func_001514e8(u32 a0) {
    func_00138c10(a0 + 0x1f0, 3);
    func_00138c10(a0 + 0x388, 9);
    return func_00150be8(a0);
}
