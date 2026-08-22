// coverage: addr=0x002dc278 symbol=func_002dc278 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:83.44
#include "common/types.h"

extern "C" u32 func_001050d8(u32, u32) asm("func_001050d8");
extern "C" u32 func_002dc4e0(u32, u32, u32) asm("func_002dc4e0");

// 0x002dc278 func_002dc278
u32 func_002dc278(u32 a0, u32 a1) asm("func_002dc278");
u32 func_002dc278(u32 a0, u32 a1) {
    return func_002dc4e0(func_001050d8(0x80a0, a1), a0, a1);
}
