// coverage: addr=0x002e0bb0 symbol=func_002e0bb0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_002e0d28(u32, u32) asm("func_002e0d28");

// 0x002e0bb0 func_002e0bb0
u32 func_002e0bb0(u32 a0) asm("func_002e0bb0");
u32 func_002e0bb0(u32 a0) {
    return func_002e0d28(func_001050d8(0xf0), a0);
}
