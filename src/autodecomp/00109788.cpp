// coverage: addr=0x00109788 symbol=func_00109788 size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:90.12;ghidra:near:69.59
#include "common/types.h"

extern "C" u32 func_001094e0(u32, u32) asm("func_001094e0");
extern "C" void func_00133c60(u32, u32, u32, u32, u32) asm("func_00133c60");

// 0x00109788 func_00109788
u32 func_00109788(u32 a0, u32 a1) asm("func_00109788");
u32 func_00109788(u32 a0, u32 a1) {
    u32 v0;
    if (((s32)(func_001094e0(a1, a1)) == 0)) {
        func_00133c60(a0, a1, 0, 0, 0);
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
