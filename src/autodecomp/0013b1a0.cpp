// coverage: addr=0x0013b1a0 symbol=func_0013b1a0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:65.75
#include "common/types.h"

extern "C" u32 func_0013b128(u32) asm("func_0013b128");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");

// 0x0013b1a0 func_0013b1a0
u32 func_0013b1a0(u32 a0) asm("func_0013b1a0");
u32 func_0013b1a0(u32 a0) {
    func_001391c8(a0, 0x14b6, 1);
    return func_0013b128(a0);
}
