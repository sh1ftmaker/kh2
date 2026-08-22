// coverage: addr=0x0014ce60 symbol=_ZN2dk5Vsync13initGameSpeedEv size=24 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:99.67;e3:near:99.33;m2c:near:78.0;ghidra:near:22.5
#include "common/types.h"

extern "C" u32 D_00349e0c asm("D_00349e0c");

// 0x0014ce60 dk::Vsync::initGameSpeed()
// minilink-rodata 0x0036b0ec   (float literals live here in the original)
f32 lift_0014ce60() asm("_ZN2dk5Vsync13initGameSpeedEv");
f32 lift_0014ce60() {
    *(f32*)(&D_00349e0c) = 1.0f;
    return 1.0f;
}
