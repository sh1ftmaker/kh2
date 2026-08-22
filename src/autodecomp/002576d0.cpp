// coverage: addr=0x002576d0 symbol=_ZN2Tz5CmTop16IsWarningEnabledEz size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;e3:near:99.23;ghidra:near:74.29;m2c:near:63.81
#include "common/types.h"

extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f034 asm("D_0035f034");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x002576d0 Tz::CmTop::IsWarningEnabled(...)
u32 lift_002576d0() asm("_ZN2Tz5CmTop16IsWarningEnabledEz");
u32 lift_002576d0() {
    u32 v0;
    u32 v0_0;
    v0 = func_00139d78(*(u32*)(&D_0035f034));
    if (((s32)(v0) == 0)) {
        v0_0 = func_0028acc8(*(u32*)(&D_0035f024));
        v0 = v0_0;
    }
    return v0;
}
