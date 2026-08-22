// coverage: addr=0x00276df8 symbol=func_00276df8 size=48 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.31;corpus:near:83.08;m2c:near:56.77
#include "common/types.h"

extern "C" u32 D_0035f21c asm("D_0035f21c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00276df8 func_00276df8
u32 func_00276df8() asm("func_00276df8");
u32 func_00276df8() {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_0035f21c)) != 0)) {
        v0 = func_00139d78(*(u32*)(&D_0035f21c) + 0xee4);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
