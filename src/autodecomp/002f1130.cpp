// coverage: addr=0x002f1130 symbol=_ZN2kn29trap_btlobj_is_reflect_motionEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:34.03
#include "common/types.h"

extern "C" u32 func_0010c7b0(u32) asm("func_0010c7b0");
extern "C" u32 func_00136158(u32, u32) asm("func_00136158");

// 0x002f1130 kn::trap_btlobj_is_reflect_motion(BD_VALUE*)
u32 lift_002f1130(u32 a0) asm("_ZN2kn29trap_btlobj_is_reflect_motionEP8BD_VALUE");
u32 lift_002f1130(u32 a0) {
    return func_00136158(func_0010c7b0(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
}
