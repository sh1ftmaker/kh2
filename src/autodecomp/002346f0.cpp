// coverage: addr=0x002346f0 symbol=func_002346f0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:30.83
#include "common/types.h"

extern "C" u32 func_00234460(u32, u32, u32, u32, u32, u32) asm("func_00234460");

// 0x002346f0 func_002346f0
u32 func_002346f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002346f0");
u32 func_002346f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_00234460(a0, 0, a1, a2, a3, a4);
}
