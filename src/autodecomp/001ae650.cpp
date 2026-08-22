// coverage: addr=0x001ae650 symbol=func_001ae650 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002f79c8(u32) asm("func_002f79c8");
extern "C" void func_002f71b0(u32) asm("func_002f71b0");
extern "C" void func_002f7e60() asm("func_002f7e60");

// 0x001ae650 func_001ae650
u32 func_001ae650() asm("func_001ae650");
u32 func_001ae650() {
    func_002f7e60();
    func_002f71b0(0);
    return func_002f79c8(0);
}
