// coverage: addr=0x002d5d50 symbol=func_002d5d50 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:88.0;ghidra:near:76.47;m2c:near:69.27
#include "common/types.h"

extern "C" u32 D_00362428 asm("D_00362428");
extern "C" u32 func_002e7308(u32) asm("func_002e7308");
extern "C" void func_002cfeb0(u32, u32, u32, u32) asm("func_002cfeb0");

// 0x002d5d50 func_002d5d50
u32 func_002d5d50(u32 a0, u32 a1, u32 a2) asm("func_002d5d50");
u32 func_002d5d50(u32 a0, u32 a1, u32 a2) {
    func_002cfeb0(a0, a1, 1, a2);
    *(u32*)(a0) = (u32)&D_00362428;
    return func_002e7308(a0 + 0xb38);
}
