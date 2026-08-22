// coverage: addr=0x002ba948 symbol=func_002ba948 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002b70b8(u32, u32, u32) asm("func_002b70b8");

// 0x002ba948 func_002ba948
u32 func_002ba948() asm("func_002ba948");
u32 func_002ba948() {
    func_002b70b8(0, 0x3000, 0xf0);
    return func_002b70b8(1, 0x3000, 0xf0);
}
