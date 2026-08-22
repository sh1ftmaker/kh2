// coverage: addr=0x002d4200 symbol=func_002d4200 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:88.0;ghidra:near:76.47;m2c:near:69.27
#include "common/types.h"

extern "C" u32 D_003621a0 asm("D_003621a0");
extern "C" u32 func_002e7308(u32) asm("func_002e7308");
extern "C" void func_002d2948(u32, u32, u32, u32) asm("func_002d2948");

// 0x002d4200 func_002d4200
u32 func_002d4200(u32 a0, u32 a1, u32 a2) asm("func_002d4200");
u32 func_002d4200(u32 a0, u32 a1, u32 a2) {
    func_002d2948(a0, a1, 1, a2);
    *(u32*)(a0) = (u32)&D_003621a0;
    return func_002e7308(a0 + 0xc88);
}
