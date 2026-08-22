// coverage: addr=0x00161770 symbol=func_00161770 size=88 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.09;m2c:near:91.35
#include "common/types.h"

extern "C" u32 func_001447e0(u32, u32, u32) asm("func_001447e0");

// 0x00161770 func_00161770
u32 func_00161770(u32 a0) asm("func_00161770");
u32 func_00161770(u32 a0) {
    u8 frame[32];
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x48))) + 0x14))))(*(u32*)((a0 + 0x48)), (u32)frame, (u32)frame + 0x10);
    return func_001447e0(a0 + 0x54, (u32)frame, (u32)frame + 0x10);
}
