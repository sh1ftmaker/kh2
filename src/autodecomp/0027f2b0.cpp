// coverage: addr=0x0027f2b0 symbol=func_0027f2b0 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.0;m2c:near:55.71;e3:near:37.27
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0027f2b0 func_0027f2b0
u32 func_0027f2b0() asm("func_0027f2b0");
u32 func_0027f2b0() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_00139d78(*(u32*)(&D_0035f250));
    if (((s32)(v0) == 0)) {
        v0_0 = func_00139d78(*(u32*)(&D_0035f258));
        if (((s32)(v0_0) == 0)) {
            v0_1 = func_0028acc8(*(u32*)(&D_0035f254));
            v0_0 = v0_1;
        }
        v0 = v0_0;
    }
    return v0;
}
