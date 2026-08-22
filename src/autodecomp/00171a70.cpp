// coverage: addr=0x00171a70 symbol=func_00171a70 size=88 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 func_00177860(u32) asm("func_00177860");

// 0x00171a70 func_00171a70
u32 func_00171a70(u32 a0) asm("func_00171a70");
u32 func_00171a70(u32 a0) {
    u32 v0;
    v0 = func_00177860(*(u32*)((*(u32*)(a0) + 4)));
    *(u32*)(a0) = ((u32)(0) < (u32)((*(u32*)((((*(u32*)((a0 + 4)) >> 5) << 2) + v0)) & (1 << (*(u32*)((a0 + 4)) & 0x1f)))));
    return v0;
}
