// coverage: addr=0x001b1328 symbol=_Z16ctarget_001b1328jjjj size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;ghidra:exact:100.0;m2c:near:71.31
#include "common/types.h"

extern "C" u32 func_001b1100(u32, u32) asm("func_001b1100");
extern "C" void func_0016c2b0(u32) asm("func_0016c2b0");

// 0x001b1328 ctarget_001b1328(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001b1328(u32 a0) asm("_Z16ctarget_001b1328jjjj");
u32 lift_001b1328(u32 a0) {
    u32 loc_0;
    func_0016c2b0((u32)&loc_0);
    return func_001b1100(a0, (u32)&loc_0);
}
