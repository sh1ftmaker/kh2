// coverage: addr=0x001954a0 symbol=_Z16wtarget_001954a0jjjj size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:85.91;ghidra:near:68.89
#include "common/types.h"

extern "C" u32 func_00195468(u32, u32) asm("func_00195468");
extern "C" u32 func_00195530(u32, u32) asm("func_00195530");

// 0x001954a0 wtarget_001954a0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001954a0(u32 a0, u32 a1) asm("_Z16wtarget_001954a0jjjj");
u32 lift_001954a0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    v0 = func_00195530(a0, a1);
    if (((s32)(v0) == 0)) {
        v0_0 = func_00195468(a0, 0);
        if (((s32)(v0_0) >= 0)) {
            *(u16*)((((v0_0 << 1) + a0) + 8)) = a1;
        }
        v0 = v0_0;
    }
    return v0;
}
