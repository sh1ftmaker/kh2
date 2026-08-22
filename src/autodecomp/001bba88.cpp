// coverage: addr=0x001bba88 symbol=func_001bba88 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.0;corpus:near:75.38;ghidra:near:59.67
#include "common/types.h"

extern "C" u32 D_01d49320 asm("D_01d49320");
extern "C" u32 func_001bb4a0() asm("func_001bb4a0");
extern "C" u32 func_001bba30(u32) asm("func_001bba30");

// 0x001bba88 func_001bba88
u32 func_001bba88() asm("func_001bba88");
u32 func_001bba88() {
    u32 v0;
    u32 v0_0;
    if (((s32)(func_001bb4a0()) != 0)) {
        v0 = func_001bba30(*(u32*)(&D_01d49320));
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
