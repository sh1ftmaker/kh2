// coverage: addr=0x001b5a10 symbol=func_001b5a10 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:88.43;m2c:near:37.85
#include "common/types.h"

extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_001b5cb8(u32) asm("func_001b5cb8");

// 0x001b5a10 func_001b5a10
u32 func_001b5a10() asm("func_001b5a10");
u32 func_001b5a10() {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_01d48cb0)) != 0)) {
        v0 = ((s32)(func_001b5cb8(*(u32*)(&D_01d48cb0))) != 0) ? (*(u32*)((*(u32*)(&D_01d48cb0) + 0xc)) + 0x80) : (*(u32*)(&D_01d48cb0) + 0x18);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
