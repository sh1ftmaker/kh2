// coverage: addr=0x0029df98 symbol=func_0029df98 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.78
#include "common/types.h"

extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x0029df98 func_0029df98
u32 func_0029df98() asm("func_0029df98");
u32 func_0029df98() {
    return func_0028dac8(func_002766d0() + 0x4398, 3);
}
