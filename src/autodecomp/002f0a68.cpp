// coverage: addr=0x002f0a68 symbol=_ZN2kn23trap_stitch_effect_killEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:46.15
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_00117aa8(u32, u32) asm("func_00117aa8");

// 0x002f0a68 kn::trap_stitch_effect_kill(BD_VALUE*)
u32 lift_002f0a68(u32 a0) asm("_ZN2kn23trap_stitch_effect_killEP8BD_VALUE");
u32 lift_002f0a68(u32 a0) {
    return func_00117aa8(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
}
