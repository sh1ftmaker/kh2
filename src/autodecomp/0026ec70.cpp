// coverage: addr=0x0026ec70 symbol=_ZN2Tz14PauseTaskSetupEz size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:93.9;corpus:near:79.0;e3:near:23.64
#include "common/types.h"

extern "C" u32 D_0035f3a8 asm("D_0035f3a8");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" u32 func_002537c8(u32) asm("func_002537c8");

// 0x0026ec70 Tz::PauseTaskSetup(...)
u32 lift_0026ec70() asm("_ZN2Tz14PauseTaskSetupEz");
u32 lift_0026ec70() {
    return func_0023fa08((u32)&D_0035f3a8, func_002537c8(0));
}
