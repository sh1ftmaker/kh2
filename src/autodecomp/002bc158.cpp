// coverage: addr=0x002bc158 symbol=_ZN5SOUND7allocSeEi size=48 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;e3:near:39.58;ghidra:near:34.58
#include "common/types.h"

extern "C" u32 func_002bc0f0(u32) asm("func_002bc0f0");

// 0x002bc158 SOUND::allocSe(int)
u32 lift_002bc158(u32 a0) asm("_ZN5SOUND7allocSeEi");
u32 lift_002bc158(u32 a0) {
    if (((s32)(a0) != 0)) {
        if (((s32)(a0) >= 0)) {
            return func_002bc0f0(a0);
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
