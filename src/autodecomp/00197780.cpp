// coverage: addr=0x00197780 symbol=_ZN2YS5EVENT9ControlOnEv size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001b9c58(u32) asm("func_001b9c58");

// 0x00197780 YS::EVENT::ControlOn()
u32 lift_00197780() asm("_ZN2YS5EVENT9ControlOnEv");
u32 lift_00197780() {
    func_001b9c58(0);
    return func_001b9c58(1);
}
