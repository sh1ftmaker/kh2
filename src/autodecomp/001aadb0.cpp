// coverage: addr=0x001aadb0 symbol=func_001aadb0 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:84.62;ghidra:near:43.38
#include "common/types.h"

extern "C" u32 D_01c6cd20 asm("D_01c6cd20");
extern "C" u32 func_002367c8(u32) asm("_ZN2YI5IMAGE13InitLoadImageEv");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");

// 0x001aadb0 func_001aadb0
u32 func_001aadb0(u32 a0) asm("func_001aadb0");
u32 func_001aadb0(u32 a0) {
    func_002362b0((u32)&D_01c6cd20, a0);
    return func_002367c8((u32)&D_01c6cd20);
}
