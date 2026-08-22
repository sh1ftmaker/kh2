// coverage: addr=0x002637e8 symbol=func_002637e8 size=112 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.82;m2c:near:98.93;e3:near:45.53
#include "common/types.h"

extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_002635d8(u32) asm("func_002635d8");
extern "C" u32 func_00263660(u32) asm("func_00263660");

// 0x002637e8 func_002637e8
u32 func_002637e8(u32 a0) asm("func_002637e8");
u32 func_002637e8(u32 a0) {
    u32 v0;
    v0 = func_002570a0(0xa);
    if (((s32)(a0) == 0)) {
        a0 = ((u32)(func_002635d8(v0)) < (u32)(1));
    } else {
        a0 = 1;
    }
    if ((a0 == 1)) {
        a0 = (func_00263660(v0) ? a0 : 0xffffffff);
    }
    return a0;
}
