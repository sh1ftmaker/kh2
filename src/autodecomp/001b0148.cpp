// coverage: addr=0x001b0148 symbol=func_001b0148 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:72.33;ghidra:near:64.68
#include "common/types.h"

extern "C" u32 func_001afee8(u32, u32, u32) asm("func_001afee8");

// 0x001b0148 func_001b0148
u32 func_001b0148(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001b0148");
u32 func_001b0148(u32 a0, u32 a1, u32 a2, u32 a3) {
    if (((s32)(a2) < 0)) {
        if ((a2 == 0xfffffffd)) {
            return func_001afee8(a1, a3, a2);
        } else {
            return 0xffffffff;
        }
    } else {
        return a2;
    }
}
