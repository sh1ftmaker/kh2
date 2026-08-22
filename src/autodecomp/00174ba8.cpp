// coverage: addr=0x00174ba8 symbol=_ZN2YS16trap_camera_warpEP8BD_VALUE size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_00140f10(u32) asm("func_00140f10");

// 0x00174ba8 YS::trap_camera_warp(BD_VALUE*)
u32 lift_00174ba8() asm("_ZN2YS16trap_camera_warpEP8BD_VALUE");
u32 lift_00174ba8() {
    return func_00140f10(func_00140df0());
}
