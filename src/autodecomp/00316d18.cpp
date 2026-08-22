// coverage: addr=0x00316d18 symbol=func_00316d18 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:60.63;ghidra:near:42.95
#include "common/types.h"

extern "C" u32 func_002ff3fc(u32, u32) asm("func_002ff3fc");
extern "C" u32 func_003032d0(u32, u32) asm("func_003032d0");

// 0x00316d18 func_00316d18
u32 func_00316d18(u32 a0, u32 a1) asm("func_00316d18");
u32 func_00316d18(u32 a0, u32 a1) {
    u8 frame[32];
    u32 v0;
    *(u32*)(((u32)frame + 0x10)) = a0;
    v0 = func_002ff3fc(a0, a1);
    *(u32*)((u32)frame) = ((u32)frame + 0x10);
    *(u32*)(((u32)frame + 4)) = 1;
    *(u32*)(((u32)frame + 8)) = v0;
    *(u32*)(((u32)frame + 0x14)) = v0;
    return func_003032d0(a1, (u32)frame);
}
