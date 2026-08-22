// coverage: addr=0x0029e148 symbol=func_0029e148 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.78
#include "common/types.h"

extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x0029e148 func_0029e148
u32 func_0029e148() asm("func_0029e148");
u32 func_0029e148() {
    return func_0028da70(func_002766d0() + 0x4860, 5);
}
