// coverage: addr=0x0018fee8 symbol=func_0018fee8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001b58f0(u32, u32, u32, u32) asm("func_001b58f0");

// 0x0018fee8 func_0018fee8
u32 func_0018fee8(u32 a0) asm("func_0018fee8");
u32 func_0018fee8(u32 a0) {
    u32 v0;
    v0 = func_001b58f0(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 0xc)), *(u32*)((*(u32*)((a0 + 8)) + 4)));
    *(u32*)(a0) = v0;
    return v0;
}
