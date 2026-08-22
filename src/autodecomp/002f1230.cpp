// coverage: addr=0x002f1230 symbol=_ZN2kn35trap_chickenlittle_set_shoot_targetEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:46.15
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_0011a918(u32, u32) asm("func_0011a918");

// 0x002f1230 kn::trap_chickenlittle_set_shoot_target(BD_VALUE*)
u32 lift_002f1230(u32 a0) asm("_ZN2kn35trap_chickenlittle_set_shoot_targetEP8BD_VALUE");
u32 lift_002f1230(u32 a0) {
    return func_0011a918(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
}
