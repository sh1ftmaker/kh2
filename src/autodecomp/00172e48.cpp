// coverage: addr=0x00172e48 symbol=func_00172e48 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");

// 0x00172e48 func_00172e48
u32 func_00172e48(u32 a0) asm("func_00172e48");
u32 func_00172e48(u32 a0) {
    u32 v0;
    v0 = func_0019ba60(*(u32*)((*(u32*)(a0) + 4)));
    *(u32*)(a0) = *(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0xac8));
    return v0;
}
