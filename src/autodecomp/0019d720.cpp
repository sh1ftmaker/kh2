// coverage: addr=0x0019d720 symbol=func_0019d720 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;e3:near:44.17
#include "common/types.h"

extern "C" u32 func_0019d4f8(u32) asm("func_0019d4f8");
extern "C" void func_0019d548(u32) asm("func_0019d548");

// 0x0019d720 func_0019d720
u32 func_0019d720(u32 a0) asm("func_0019d720");
u32 func_0019d720(u32 a0) {
    func_0019d548(a0);
    return func_0019d4f8(a0);
}
