// coverage: addr=0x001ce488 symbol=func_001ce488 size=128 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.34;ghidra:near:72.0
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001db9a8(u32, u32, u32, f32) asm("func_001db9a8");
extern "C" void func_001ce3e8(u32, u32, u32, u32, f32) asm("func_001ce3e8");

// 0x001ce488 func_001ce488
u32 func_001ce488(u32 a0, u32 a1, f32 fa0) asm("func_001ce488");
u32 func_001ce488(u32 a0, u32 a1, f32 fa0) {
    u32 s1;
    u32 v0;
    s1 = func_001db9a8(a0, 0, 0x3e8, fa0);
    v0 = func_001050d8(0xa00);
    func_001ce3e8(v0, s1, a0, a1, fa0);
    return v0;
}
