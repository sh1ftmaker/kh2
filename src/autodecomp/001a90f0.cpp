// coverage: addr=0x001a90f0 symbol=func_001a90f0 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001a8b38(u32) asm("func_001a8b38");
extern "C" u32 func_001a8f10() asm("func_001a8f10");

// 0x001a90f0 func_001a90f0
u32 func_001a90f0() asm("func_001a90f0");
u32 func_001a90f0() {
    return func_001a8b38(func_001a8f10());
}
