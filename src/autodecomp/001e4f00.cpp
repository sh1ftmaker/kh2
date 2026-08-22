// coverage: addr=0x001e4f00 symbol=func_001e4f00 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001e3650() asm("func_001e3650");
extern "C" u32 func_001e3660(u32, u32) asm("func_001e3660");
extern "C" u32 func_001e4248(u32) asm("func_001e4248");
extern "C" u32 func_001e4320(u32) asm("func_001e4320");
extern "C" u32 func_001e4e18(u32) asm("func_001e4e18");

// 0x001e4f00 func_001e4f00
u32 func_001e4f00() asm("func_001e4f00");
u32 func_001e4f00() {
    return func_001e4320(func_001e4e18(func_001e4248(func_001e3660(func_001e3650(), 1))));
}
