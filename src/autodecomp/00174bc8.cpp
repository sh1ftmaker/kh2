// coverage: addr=0x00174bc8 symbol=_ZN2YS17trap_camera_resetEP8BD_VALUE size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_00140f20(u32) asm("func_00140f20");

// 0x00174bc8 YS::trap_camera_reset(BD_VALUE*)
u32 lift_00174bc8() asm("_ZN2YS17trap_camera_resetEP8BD_VALUE");
u32 lift_00174bc8() {
    return func_00140f20(func_00140df0());
}
