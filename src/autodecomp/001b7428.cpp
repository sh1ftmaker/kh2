// coverage: addr=0x001b7428 symbol=_ZN2YS7LEVELUP10ShowEffectEPNS_6BTLOBJE size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:68.57;m2c:near:42.0
#include "common/types.h"

extern "C" u32 func_001a3a78(u32) asm("func_001a3a78");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");

// 0x001b7428 YS::LEVELUP::ShowEffect(YS::BTLOBJ*)
u32 lift_001b7428(u32 a0) asm("_ZN2YS7LEVELUP10ShowEffectEPNS_6BTLOBJE");
u32 lift_001b7428(u32 a0) {
    return func_001de168(func_001a3a78(a0), 0xf, 1, 1, 0x2715, a0);
}
