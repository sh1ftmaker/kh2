// coverage: addr=0x00153610 symbol=func_00153610 size=100 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:11.23;m2c:near:8.08
#include "common/types.h"

extern "C" u32 D_0034a780 asm("D_0034a780");
extern "C" u32 D_0034a784 asm("D_0034a784");
extern "C" u32 D_0034a788 asm("D_0034a788");

// 0x00153610 func_00153610
// minilink-rodata 0x0036b254   (float literals live here in the original)
f32 func_00153610(f32 fa0) asm("func_00153610");
f32 func_00153610(f32 fa0) {
    f32 f0;
    f32 f0_0;
    f32 f0_1;
    f0 = (*(f32*)(&D_0034a788) * fa0);
    f0_0 = ((*(f32*)(&D_0034a780) + (*(f32*)(&D_0034a784) * fa0)) + (f0 * fa0));
    if (!((1.0f < (1.0f / f0_0)))) {
        f0_1 = (1.0f / f0_0);
    } else {
        f0_1 = 1.0f;
    }
    if ((f0_1 < 0.0f)) {
        f0_1 = 0.0f;
    }
    return f0_1;
}
