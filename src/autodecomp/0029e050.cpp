// coverage: addr=0x0029e050 symbol=func_0029e050 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.78;e3:near:19.14
#include "common/types.h"

extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x0029e050 func_0029e050
u32 func_0029e050() asm("func_0029e050");
u32 func_0029e050() {
    return func_0028dac8(func_002766d0() + 0x4860, 6);
}
