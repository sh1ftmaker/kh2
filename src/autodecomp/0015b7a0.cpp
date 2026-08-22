// coverage: addr=0x0015b7a0 symbol=func_0015b7a0 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:99.38
#include "common/types.h"

extern "C" u32 func_00139a38(u32) asm("func_00139a38");
extern "C" void func_001398d0(u32) asm("func_001398d0");

// 0x0015b7a0 func_0015b7a0
u32 func_0015b7a0() asm("func_0015b7a0");
u32 func_0015b7a0() {
    func_001398d0(0xf);
    return func_00139a38(0xf);
}
