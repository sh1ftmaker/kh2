// coverage: addr=0x001c5f38 symbol=func_001c5f38 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.72;m2c:near:74.62
#include "common/types.h"

struct S32_20_u32 { u8 _p[20]; u32 m; u8 _q[8]; };
extern "C" u32 D_00351680 asm("D_00351680");
extern "C" void func_001c5e88(u32) asm("func_001c5e88");

// 0x001c5f38 func_001c5f38
u32 func_001c5f38(u32 a0) asm("func_001c5f38");
u32 func_001c5f38(u32 a0) {
    u32 v0;
    if (((s32)(((S32_20_u32*)&D_00351680)[*(u8*)((a0 + 0x52))].m) > 0)) {
        func_001c5e88(a0);
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
