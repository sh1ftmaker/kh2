// coverage: addr=0x001d71f0 symbol=func_001d71f0 size=36 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002bea60(u32) asm("func_002bea60");

// 0x001d71f0 func_001d71f0
void func_001d71f0(u32 a0) asm("func_001d71f0");
void func_001d71f0(u32 a0) {
    if ((a0 == 0xc)) {
        func_002bea60(a0);
        return;
    } else {
        return;
    }
}
