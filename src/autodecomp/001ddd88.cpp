// coverage: addr=0x001ddd88 symbol=func_001ddd88 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:81.0;e3:near:28.0
#include "common/types.h"

extern "C" u32 D_01d9e348 asm("D_01d9e348");
extern "C" u32 func_001dde40(u32) asm("func_001dde40");
extern "C" u32 func_00321cb0(u32, u32) asm("func_00321cb0");

// 0x001ddd88 func_001ddd88
u32 func_001ddd88(u32 a0) asm("func_001ddd88");
u32 func_001ddd88(u32 a0) {
    u32 v0;
    v0 = func_00321cb0((u32)&D_01d9e348, a0);
    if (((s32)(v0) != 0)) {
        return func_001dde40(a0);
    } else {
        return v0;
    }
}
