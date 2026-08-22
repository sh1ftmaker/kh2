// coverage: addr=0x00105370 symbol=_ZN4AREA15CreateAllocatorEjj size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:85.62;e3:near:41.6
#include "common/types.h"

extern "C" u32 D_0032bb1c asm("D_0032bb1c");
extern "C" u32 func_00106178(u32, u32) asm("func_00106178");
extern "C" u32 func_001091c8(u32, u32, u32) asm("func_001091c8");
extern "C" u32 func_00170b30(u32, u32) asm("func_00170b30");

// 0x00105370 AREA::CreateAllocator(unsigned int, unsigned int)
u32 lift_00105370(u32 a0, u32 a1) asm("_ZN4AREA15CreateAllocatorEjj");
u32 lift_00105370(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_00106178(func_00170b30(a0, a1), a0);
    *(u32*)(&D_0032bb1c) = v0;
    return func_001091c8(v0, 0x100, a1);
}
