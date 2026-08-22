// coverage: addr=0x0017dfc8 symbol=func_0017dfc8 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:97.2;e3:near:62.46
#include "common/types.h"

extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_0016f7d0(u32, u32) asm("func_0016f7d0");
extern "C" u32 func_0017df70() asm("func_0017df70");

// 0x0017dfc8 func_0017dfc8
u32 func_0017dfc8() asm("func_0017dfc8");
u32 func_0017dfc8() {
    u32 v0;
    u32 v0_0;
    v0 = func_0017df70();
    if (((s32)(v0) != 0)) {
        v0_0 = func_0016e920(v0);
        if ((*(u16*)((v0_0 + 0x4c)) == 8)) {
            v0 = (((u32)(func_0016f7d0(v0, v0_0)) < (u32)(2)) ? 0x81d : v0);
        }
    }
    return v0;
}
