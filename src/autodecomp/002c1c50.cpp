// coverage: addr=0x002c1c50 symbol=func_002c1c50 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:92.86;ghidra:near:92.5
#include "common/types.h"

extern "C" u32 func_001c2b58(u32) asm("func_001c2b58");
extern "C" u32 func_002c1b48(u32) asm("func_002c1b48");
extern "C" u32 func_002c1b60(u32, u32) asm("_ZN8worldmap4Gumi8setStateEPKN2YS6COURSEE");

// 0x002c1c50 func_002c1c50
u32 func_002c1c50(u32 a0) asm("func_002c1c50");
u32 func_002c1c50(u32 a0) {
    return func_002c1b60(a0, func_001c2b58(func_002c1b48(a0)));
}
