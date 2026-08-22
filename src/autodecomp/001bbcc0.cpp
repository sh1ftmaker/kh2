// coverage: addr=0x001bbcc0 symbol=func_001bbcc0 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.14;ghidra:near:86.0;corpus:near:78.14
#include "common/types.h"

extern "C" u32 func_001bb4a0() asm("func_001bb4a0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");

// 0x001bbcc0 func_001bbcc0
u32 func_001bbcc0() asm("func_001bbcc0");
u32 func_001bbcc0() {
    u32 v0;
    v0 = ((s32)(func_001bb4a0()) != 0) ? *(u8*)((*(u32*)((func_001bbcb0() + 8)) + 0xe)) : 1;
    return v0;
}
