// coverage: addr=0x0014fb00 symbol=func_0014fb00 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;m2c:exact:100.0;ghidra:near:93.75
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00151bf0(u32) asm("func_00151bf0");

// 0x0014fb00 func_0014fb00
u32 func_0014fb00(u32 a0) asm("func_0014fb00");
u32 func_0014fb00(u32 a0) {
    u32 v0;
    v0 = func_00139d78(a0);
    if (((s32)(v0) != 0)) {
        return func_00151bf0(a0);
    } else {
        return v0;
    }
}
