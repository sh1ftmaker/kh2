// coverage: addr=0x0014ec20 symbol=_ZN2dk9FPSCamera6adjustEv size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_0014e658(u32) asm("func_0014e658");

// 0x0014ec20 dk::FPSCamera::adjust()
u32 lift_0014ec20() asm("_ZN2dk9FPSCamera6adjustEv");
u32 lift_0014ec20() {
    return func_0014e658(func_00140df0());
}
