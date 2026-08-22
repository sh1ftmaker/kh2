// coverage: addr=0x0015a810 symbol=func_0015a810 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:61.91;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_0034aa90 asm("D_0034aa90");
extern "C" u32 func_001050c8() asm("func_001050c8");

// 0x0015a810 func_0015a810
u32 func_0015a810() asm("func_0015a810");
u32 func_0015a810() {
    u32 v0;
    u32 v0_0;
    v0 = func_001050c8();
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(v0))))(v0, 0x800, 0);
    *(u32*)(&D_0034aa90) = v0_0;
    return v0_0;
}
