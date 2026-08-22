// coverage: addr=0x002b23e0 symbol=_ZN2Tz8JmPuzzle12GetImageInfoEi size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:73.61;m2c:near:49.43;e3:near:23.26
#include "common/types.h"

extern "C" u32 D_0035f630 asm("D_0035f630");
extern "C" u32 func_00276608(u32) asm("func_00276608");
extern "C" u32 func_002b2338(u32) asm("func_002b2338");

// 0x002b23e0 Tz::JmPuzzle::GetImageInfo(int)
u32 lift_002b23e0(u32 a0) asm("_ZN2Tz8JmPuzzle12GetImageInfoEi");
u32 lift_002b23e0(u32 a0) {
    u32 v0;
    if (((s32)(a0) < 0)) {
        v0 = func_00276608(0x1c);
        a0 = v0;
    }
    return (*(u32*)(&D_0035f630) + (func_002b2338(a0) * 0x24));
}
