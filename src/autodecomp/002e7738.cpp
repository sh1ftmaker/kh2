// coverage: addr=0x002e7738 symbol=func_002e7738 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:91.85;ghidra:near:85.36
#include "common/types.h"

extern "C" u32 func_002e77a8(u32) asm("func_002e77a8");
extern "C" void func_002e7670(u32) asm("func_002e7670");
extern "C" void func_002e76b0(u32) asm("func_002e76b0");

// 0x002e7738 func_002e7738
u32 func_002e7738(u32 a0) asm("func_002e7738");
u32 func_002e7738(u32 a0) {
    func_002e7670(a0);
    func_002e76b0(a0 + 4);
    return func_002e77a8(a0);
}
