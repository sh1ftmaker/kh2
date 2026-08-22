// coverage: addr=0x00151b40 symbol=func_00151b40 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");

// 0x00151b40 func_00151b40
u32 func_00151b40(u32 a0) asm("func_00151b40");
u32 func_00151b40(u32 a0) {
    func_00138c10(a0 + 0x348, 0);
    return func_00138c10(a0 + 0x9a8, 6);
}
