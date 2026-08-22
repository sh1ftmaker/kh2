// coverage: addr=0x00234720 symbol=func_00234720 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:96.5;m2c:near:57.0
#include "common/types.h"

extern "C" u32 func_002344c0(u32, u32, u32, u32, u32) asm("func_002344c0");

// 0x00234720 func_00234720
u32 func_00234720(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00234720");
u32 func_00234720(u32 a0, u32 a1, u32 a2, u32 a3) {
    return func_002344c0(a0, 0, a1, a2, a3);
}
