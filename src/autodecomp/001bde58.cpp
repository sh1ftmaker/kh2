// coverage: addr=0x001bde58 symbol=func_001bde58 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00190128(u32) asm("func_00190128");
extern "C" void func_001bc688(u32) asm("func_001bc688");

// 0x001bde58 func_001bde58
u32 func_001bde58(u32 a0) asm("func_001bde58");
u32 func_001bde58(u32 a0) {
    func_001bc688(a0);
    return func_00190128(a0 + 0xc);
}
