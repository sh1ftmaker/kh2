// coverage: addr=0x00275ec8 symbol=func_00275ec8 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:82.18
#include "common/types.h"

extern "C" u32 D_0035f20c asm("D_0035f20c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00275ec8 func_00275ec8
u32 func_00275ec8(u32 a0) asm("func_00275ec8");
u32 func_00275ec8(u32 a0) {
    u32 v0;
    v0 = func_00139d78(*(u32*)(&D_0035f20c) + 0x368);
    *(u32*)((*(u32*)(&D_0035f20c) + 0x500)) = a0;
    return v0;
}
