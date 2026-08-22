// coverage: addr=0x00195750 symbol=func_00195750 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;m2c:exact:100.0;ghidra:near:87.8
#include "common/types.h"

extern "C" u32 D_0034f250 asm("D_0034f250");
extern "C" u32 D_0034fa78 asm("D_0034fa78");
extern "C" u32 func_00195558(u32) asm("func_00195558");

// 0x00195750 func_00195750
u32 func_00195750() asm("func_00195750");
u32 func_00195750() {
    func_00195558((u32)&D_0034f250);
    return func_00195558((u32)&D_0034fa78);
}
