// coverage: addr=0x001bbb08 symbol=func_001bbb08 size=28 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:99.57;m2c:near:87.25;ghidra:near:77.22
#include "common/types.h"

extern "C" u32 D_01d49320 asm("D_01d49320");

// 0x001bbb08 func_001bbb08
u32 func_001bbb08() asm("func_001bbb08");
u32 func_001bbb08() {
    u32 v0;
    v0 = ((s32)(*(u32*)(&D_01d49320)) != 0) ? *(u32*)(*(u32*)(&D_01d49320)) : 0;
    return v0;
}
