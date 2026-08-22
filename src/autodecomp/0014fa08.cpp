// coverage: addr=0x0014fa08 symbol=_ZN2dk11INFORMATION17forceLeaveCounterEPNS_7COUNTERE size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;m2c:exact:100.0;ghidra:near:93.75
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_001506e0(u32) asm("func_001506e0");

// 0x0014fa08 dk::INFORMATION::forceLeaveCounter(dk::COUNTER*)
u32 lift_0014fa08(u32 a0) asm("_ZN2dk11INFORMATION17forceLeaveCounterEPNS_7COUNTERE");
u32 lift_0014fa08(u32 a0) {
    u32 v0;
    v0 = func_00139d78(a0);
    if (((s32)(v0) != 0)) {
        return func_001506e0(a0);
    } else {
        return v0;
    }
}
