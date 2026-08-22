// coverage: addr=0x00197760 symbol=_ZN2YS5EVENT10ControlOffEv size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001b9c28(u32) asm("func_001b9c28");

// 0x00197760 YS::EVENT::ControlOff()
u32 lift_00197760() asm("_ZN2YS5EVENT10ControlOffEv");
u32 lift_00197760() {
    func_001b9c28(0);
    return func_001b9c28(1);
}
