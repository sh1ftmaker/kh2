// coverage: addr=0x00283618 symbol=func_00283618 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.61;ghidra:near:78.33
#include "common/types.h"

extern "C" u32 D_0035f2b8 asm("D_0035f2b8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002839f0(u32) asm("func_002839f0");

// 0x00283618 func_00283618
u32 func_00283618() asm("func_00283618");
u32 func_00283618() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_00139d78(*(u32*)(&D_0035f2b8) + 0x354);
    if ((v0 == 0)) {
        v0_0 = func_00139d78(*(u32*)(&D_0035f2b8) + 0x1a0);
        if (((s32)(v0_0) == 0)) {
            v0_1 = func_002839f0(1);
            v0_0 = v0_1;
        }
        v0 = v0_0;
    }
    return v0;
}
