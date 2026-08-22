// coverage: addr=0x001be900 symbol=func_001be900 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001bc990(u32, u32) asm("func_001bc990");
extern "C" void func_001bc778(u32) asm("func_001bc778");

// 0x001be900 func_001be900
u32 func_001be900(u32 a0) asm("func_001be900");
u32 func_001be900(u32 a0) {
    func_001bc778(a0 + 0x98);
    return func_001bc990(a0 + 0x98, a0 + 0xa44);
}
