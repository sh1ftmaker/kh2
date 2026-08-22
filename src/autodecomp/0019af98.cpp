// coverage: addr=0x0019af98 symbol=func_0019af98 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");

// 0x0019af98 func_0019af98
u32 func_0019af98(u32 a0) asm("func_0019af98");
u32 func_0019af98(u32 a0) {
    u32 v0;
    v0 = func_001991a8(*(u32*)((*(u32*)((a0 + 8)) + 0x1c)), *(u16*)((*(u32*)((a0 + 8)) + 2)));
    *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) | 1);
    return v0;
}
