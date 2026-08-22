// coverage: addr=0x001abf00 symbol=func_001abf00 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:84.54;ghidra:near:78.57
#include "common/types.h"

extern "C" u32 func_00239d10(u32) asm("func_00239d10");

// 0x001abf00 func_001abf00
u32 func_001abf00(u32 a0) asm("func_001abf00");
u32 func_001abf00(u32 a0) {
    u32 v0;
    u32 v0_0;
    if ((*(u32*)(a0) == 1)) {
        v0 = func_00239d10(a0 + 4);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
