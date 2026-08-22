// coverage: addr=0x002368b0 symbol=func_002368b0 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002f2be0(u32, u32) asm("func_002f2be0");

// 0x002368b0 func_002368b0
u32 func_002368b0(u32 a0) asm("func_002368b0");
u32 func_002368b0(u32 a0) {
    func_002f2be0(a0 + 0x40, *(u32*)((a0 + 0x38)));
    return func_002f2be0(a0 + 0xa0, *(u32*)((a0 + 0x3c)));
}
