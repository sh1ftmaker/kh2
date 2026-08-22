// coverage: addr=0x001618b8 symbol=_ZN2dk6Camera23createEffectDestroyTaskEv size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;e3:near:99.93;ghidra:compile:0.0
#include "common/types.h"

extern "C" u32 D_001dda78 asm("D_001dda78");
extern "C" u32 D_001ddb30 asm("D_001ddb30");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x001618b8 dk::Camera::createEffectDestroyTask()
u32 lift_001618b8() asm("_ZN2dk6Camera23createEffectDestroyTaskEv");
u32 lift_001618b8() {
    u32 v0;
    v0 = func_00102c18(1, 0x16b48, (u32)&D_001dda78);
    *(u32*)((v0 + 0x30)) = (u32)&D_001ddb30;
    return v0;
}
