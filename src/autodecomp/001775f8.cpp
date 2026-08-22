// coverage: addr=0x001775f8 symbol=func_001775f8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:99.8;m2c:near:76.88
#include "common/types.h"

extern "C" u32 func_001940f0(u32, u32) asm("func_001940f0");

// 0x001775f8 func_001775f8
u32 func_001775f8(u32 a0) asm("func_001775f8");
u32 func_001775f8(u32 a0) {
    func_001940f0(a0, 2);
    func_001940f0(a0, 0xc);
    return func_001940f0(a0, 0x16);
}
