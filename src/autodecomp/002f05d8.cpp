// coverage: addr=0x002f05d8 symbol=func_002f05d8 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_0017c430(u32) asm("func_0017c430");

// 0x002f05d8 func_002f05d8
u32 func_002f05d8(u32 a0) asm("func_002f05d8");
u32 func_002f05d8(u32 a0) {
    func_0017c430(a0);
    return func_0016bd60(a0, 0x3f);
}
