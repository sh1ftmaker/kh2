// coverage: addr=0x0014fb60 symbol=_ZN2dk11INFORMATION22forceLeaveMissionGaugeEPNS_13MISSION_GAUGEE size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;m2c:exact:100.0;e3:near:99.67;ghidra:near:93.75
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00151c70(u32) asm("func_00151c70");

// 0x0014fb60 dk::INFORMATION::forceLeaveMissionGauge(dk::MISSION_GAUGE*)
u32 lift_0014fb60(u32 a0) asm("_ZN2dk11INFORMATION22forceLeaveMissionGaugeEPNS_13MISSION_GAUGEE");
u32 lift_0014fb60(u32 a0) {
    u32 v0;
    v0 = func_00139d78(a0);
    if (((s32)(v0) != 0)) {
        return func_00151c70(a0);
    } else {
        return v0;
    }
}
