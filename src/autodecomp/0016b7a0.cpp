// coverage: addr=0x0016b7a0 symbol=func_0016b7a0 size=92 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:62.61;ghidra:near:55.57;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_0016bff0(u32) asm("func_0016bff0");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x0016b7a0 func_0016b7a0
u32 func_0016b7a0(u32 a0) asm("func_0016b7a0");
u32 func_0016b7a0(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_001b9bc8(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        if ((func_0016bff0(v0) == a0)) {
            return s0;
        }
    }
    return s0;
}
