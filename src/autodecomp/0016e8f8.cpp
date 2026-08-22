// coverage: addr=0x0016e8f8 symbol=func_0016e8f8 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:92.67;m2c:near:89.8
#include "common/types.h"

extern "C" u32 D_0034dc28 asm("D_0034dc28");
extern "C" u32 func_001b1448(u32) asm("func_001b1448");
extern "C" u32 func_001d3390(u32) asm("func_001d3390");

// 0x0016e8f8 func_0016e8f8
u32 func_0016e8f8() asm("func_0016e8f8");
u32 func_0016e8f8() {
    return func_001d3390(func_001b1448(*(u32*)(&D_0034dc28)));
}
