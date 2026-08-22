// coverage: addr=0x002d1270 symbol=func_002d1270 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001050d8(u32, u32) asm("func_001050d8");
extern "C" u32 func_002d1550(u32, u32, u32) asm("func_002d1550");

// 0x002d1270 func_002d1270
u32 func_002d1270(u32 a0, u32 a1) asm("func_002d1270");
u32 func_002d1270(u32 a0, u32 a1) {
    return func_002d1550(func_001050d8(0x150, a1), a0, a1);
}
