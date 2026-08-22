// coverage: addr=0x00174d98 symbol=_ZN2YS14trap_camera_atEP8BD_VALUE size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;e3:near:38.28;ghidra:near:30.28
#include "common/types.h"

extern "C" u32 D_01c5f480 asm("D_01c5f480");
extern "C" u32 func_00106a60(u32) asm("func_00106a60");
extern "C" u32 func_00107478(u32, u32) asm("func_00107478");

// 0x00174d98 YS::trap_camera_at(BD_VALUE*)
u32 lift_00174d98(u32 a0) asm("_ZN2YS14trap_camera_atEP8BD_VALUE");
u32 lift_00174d98(u32 a0) {
    u32 v0;
    v0 = func_00107478(func_00106a60(1), (u32)&D_01c5f480);
    *(u32*)(a0) = (u32)&D_01c5f480;
    return v0;
}
