// coverage: addr=0x003015a8 symbol=func_003015a8 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:1.84;m2c:near:0.0
#include "common/types.h"

extern "C" u32 func_002ffd78(u32, u32) asm("func_002ffd78");

// 0x003015a8 func_003015a8
u32 func_003015a8(u32 a0, u32 a1) asm("func_003015a8");
u32 func_003015a8(u32 a0, u32 a1) {
    u8 frame[96];
    u32 v0;
    *(u32*)((u32)frame) = a1;
    *(u32*)(((u32)frame + 8)) = 0x7fffffff;
    *(u16*)(((u32)frame + 0xc)) = 0x208;
    *(u32*)(((u32)frame + 0x10)) = a1;
    *(u32*)(((u32)frame + 0x14)) = 0x7fffffff;
    *(u32*)(((u32)frame + 0x54)) = a0;
    v0 = func_002ffd78(a0, (u32)frame);
    *(u8*)(*(u32*)((u32)frame)) = 0;
    return v0;
}
