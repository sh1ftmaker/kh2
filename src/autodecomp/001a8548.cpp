// coverage: addr=0x001a8548 symbol=func_001a8548 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.11;e3:near:11.67
#include "common/types.h"

extern "C" u32 func_00138190(u32, u32) asm("func_00138190");
extern "C" u32 func_001a84b0() asm("func_001a84b0");

// 0x001a8548 func_001a8548
u32 func_001a8548() asm("func_001a8548");
u32 func_001a8548() {
    u32 v0;
    v0 = func_001a84b0();
    return func_00138190(*(u32*)(v0), *(u32*)((v0 + 8)));
}
