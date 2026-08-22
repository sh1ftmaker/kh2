// coverage: addr=0x0022cf18 symbol=func_0022cf18 size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:91.06;corpus:near:72.94
#include "common/types.h"

extern "C" u32 D_01dad990 asm("D_01dad990");
extern "C" u32 func_001024a8(u32) asm("func_001024a8");
extern "C" u32 func_002f1670(u32) asm("func_002f1670");

// 0x0022cf18 func_0022cf18
u32 func_0022cf18(u32 a0) asm("func_0022cf18");
u32 func_0022cf18(u32 a0) {
    u32 v0;
    v0 = func_002f1670((u32)&D_01dad990);
    if (((s32)(v0) == 0)) {
        return func_001024a8(a0);
    } else {
        return v0;
    }
}
