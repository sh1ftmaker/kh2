// coverage: addr=0x001b6c60 symbol=func_001b6c60 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.63;ghidra:near:89.75
#include "common/types.h"

extern "C" u32 D_0032f054 asm("D_0032f054");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001b6298(u32, u32, u32, u32) asm("func_001b6298");
extern "C" void func_001b0330(u32) asm("func_001b0330");

// 0x001b6c60 func_001b6c60
u32 func_001b6c60(u32 a0) asm("func_001b6c60");
u32 func_001b6c60(u32 a0) {
    func_001b0330(*(u32*)((a0 + 0x9b8)));
    *(u8*)(&D_0032f054) = 0;
    return func_001b6298(func_001050d8(0x20), a0, 0, 0);
}
