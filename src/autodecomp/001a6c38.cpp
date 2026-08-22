// coverage: addr=0x001a6c38 symbol=_ZN2YS8FIELDOBJ12mark_historyEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:93.9
#include "common/types.h"

extern "C" u32 D_0034fa78 asm("D_0034fa78");
extern "C" u32 func_0016bff0() asm("func_0016bff0");
extern "C" u32 func_001956d0(u32, u32) asm("func_001956d0");

// 0x001a6c38 YS::FIELDOBJ::mark_history()
u32 lift_001a6c38() asm("_ZN2YS8FIELDOBJ12mark_historyEv");
u32 lift_001a6c38() {
    return func_001956d0((u32)&D_0034fa78, func_0016bff0());
}
