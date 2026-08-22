// coverage: addr=0x00241320 symbol=func_00241320 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:79.87
#include "common/types.h"

extern "C" u32 D_0035ec98 asm("D_0035ec98");
extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00241320 func_00241320
u32 func_00241320() asm("func_00241320");
u32 func_00241320() {
    return func_002fde18((*(u32*)(&D_0035ec98) + (*(u32*)((*(u32*)(&D_0035ec98) + 4)) * 0x28)) + 8, 0, 0x28);
}
