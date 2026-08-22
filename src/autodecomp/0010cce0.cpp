// coverage: addr=0x0010cce0 symbol=func_0010cce0 size=80 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:57.0;e3:near:45.9;ghidra:near:38.9
#include "common/types.h"

extern "C" u32 func_00112d28(u32) asm("func_00112d28");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x0010cce0 func_0010cce0
u32 func_0010cce0(u32 a0) asm("func_0010cce0");
u32 func_0010cce0(u32 a0) {
    u32 v0;
    while ((v0 = func_001b9bc8(a0)), (a0 = v0), ((s32)(v0) != 0)) {
        if (((s32)(func_00112d28(v0)) != 0)) {
            return a0;
        }
    }
    return a0;
}
