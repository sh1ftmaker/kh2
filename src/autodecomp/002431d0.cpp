// coverage: addr=0x002431d0 symbol=_ZN2Tz7SubMenu8isSetNewEii size=92 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.61;m2c:near:41.22;e3:near:28.0
#include "common/types.h"

extern "C" u32 func_001058e8(u32, u32) asm("func_001058e8");

// 0x002431d0 Tz::SubMenu::isSetNew(int, int)
u32 lift_002431d0(u32 a0, u32 a1) asm("_ZN2Tz7SubMenu8isSetNewEii");
u32 lift_002431d0(u32 a0, u32 a1) {
    return ((u32)(0) < (u32)((*(u32*)(((func_001058e8(a0, a1) + ((((a0 << 3) + a1) >> 5) << 2)) + 0x49d8)) & (1 << (((a0 << 3) + a1) & 0x1f)))));
}
