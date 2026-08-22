// coverage: addr=0x00150610 symbol=_ZN2dk7COUNTER9alertLoopEv size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");

// 0x00150610 dk::COUNTER::alertLoop()
u32 lift_00150610(u32 a0) asm("_ZN2dk7COUNTER9alertLoopEv");
u32 lift_00150610(u32 a0) {
    func_00138c10(a0 + 0x348, 1);
    return func_00138c10(a0 + 0x4e0, 7);
}
