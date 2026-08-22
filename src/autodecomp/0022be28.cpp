// coverage: addr=0x0022be28 symbol=func_0022be28 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:80.91
#include "common/types.h"

extern "C" u32 func_001024a8(u32) asm("func_001024a8");
extern "C" void func_00226e60(u32) asm("func_00226e60");

// 0x0022be28 func_0022be28
u32 func_0022be28(u32 a0) asm("func_0022be28");
u32 func_0022be28(u32 a0) {
    func_00226e60(0);
    return func_001024a8(a0);
}
