// coverage: addr=0x00169148 symbol=_ZN2YS8AreaReadEP4TASK size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001afaf0(u32) asm("func_001afaf0");
extern "C" void func_00170888(u32) asm("func_00170888");
extern "C" void func_001badd8() asm("func_001badd8");

// 0x00169148 YS::AreaRead(TASK*)
u32 lift_00169148(u32 a0) asm("_ZN2YS8AreaReadEP4TASK");
u32 lift_00169148(u32 a0) {
    func_00170888(a0);
    func_001badd8();
    return func_001afaf0(a0);
}
