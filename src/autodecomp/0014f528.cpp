// coverage: addr=0x0014f528 symbol=func_0014f528 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00139a38(u32) asm("func_00139a38");
extern "C" void func_001398d0(u32) asm("func_001398d0");

// 0x0014f528 func_0014f528
u32 func_0014f528() asm("func_0014f528");
u32 func_0014f528() {
    func_001398d0(7);
    func_001398d0(9);
    func_001398d0(8);
    func_001398d0(0xa);
    func_00139a38(7);
    func_00139a38(9);
    func_00139a38(8);
    return func_00139a38(0xa);
}
