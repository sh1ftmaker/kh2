// coverage: addr=0x001a60c8 symbol=_ZN2YS5MAGIC5ResetEv size=80 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:89.95;m2c:near:89.9
#include "common/types.h"

extern "C" u32 D_00350800 asm("D_00350800");
extern "C" u32 func_001a6658(u32) asm("func_001a6658");
extern "C" u32 func_001bdff0() asm("func_001bdff0");

// 0x001a60c8 YS::MAGIC::Reset()
u32 lift_001a60c8() asm("_ZN2YS5MAGIC5ResetEv");
u32 lift_001a60c8() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = (u32)&D_00350800;
    do {
        *(u32*)(((s1 + (s0 * 0x2c)) + 0x28)) = func_001a6658(s0);
        s0 = (s0 + 1);
    } while (((s32)(((s32)(s0) < (s32)(6))) != 0));
    return func_001bdff0();
}
