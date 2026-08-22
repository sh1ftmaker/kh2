// coverage: addr=0x001514b0 symbol=func_001514b0 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");

// 0x001514b0 func_001514b0
u32 func_001514b0(u32 a0) asm("func_001514b0");
u32 func_001514b0(u32 a0) {
    func_00138c10(a0 + 0x1f0, 0);
    return func_00138c10(a0 + 0x388, 6);
}
