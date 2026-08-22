// coverage: addr=0x002367a0 symbol=func_002367a0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:93.9;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035e3f0 asm("D_0035e3f0");
extern "C" u32 func_002f35e8(u32) asm("func_002f35e8");
extern "C" u32 func_002f3918(u32, u32) asm("func_002f3918");

// 0x002367a0 func_002367a0
u32 func_002367a0() asm("func_002367a0");
u32 func_002367a0() {
    return func_002f3918(func_002f35e8(2), (u32)&D_0035e3f0);
}
