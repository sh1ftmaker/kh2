// coverage: addr=0x002519d0 symbol=func_002519d0 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:74.29;m2c:near:63.81;e3:near:29.52
#include "common/types.h"

extern "C" u32 D_0035ee5c asm("D_0035ee5c");
extern "C" u32 D_0035ee80 asm("D_0035ee80");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x002519d0 func_002519d0
u32 func_002519d0() asm("func_002519d0");
u32 func_002519d0() {
    u32 v0;
    u32 v0_0;
    v0 = func_00139d78(*(u32*)(&D_0035ee80));
    if (((s32)(v0) == 0)) {
        v0_0 = func_0028acc8(*(u32*)(&D_0035ee5c));
        v0 = v0_0;
    }
    return v0;
}
