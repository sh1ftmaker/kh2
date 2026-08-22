// coverage: addr=0x001bdf38 symbol=func_001bdf38 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:82.5;ghidra:near:55.64;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_001bd5b0(u32, u32, u32) asm("func_001bd5b0");
extern "C" void func_001bd2d0(u32) asm("func_001bd2d0");

// 0x001bdf38 func_001bdf38
u32 func_001bdf38(u32 a0) asm("func_001bdf38");
u32 func_001bdf38(u32 a0) {
    func_001bd2d0(a0);
    return func_001bd5b0(a0, *(u32*)((a0 + 0xaa4)), 0);
}
