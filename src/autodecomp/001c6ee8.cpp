// coverage: addr=0x001c6ee8 symbol=_ZN2YS10MASSEFFECT7MANAGER10exec_zsortEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:83.25
#include "common/types.h"

extern "C" u32 func_001c14e0(u32) asm("func_001c14e0");
extern "C" void func_0016a9a0(u32) asm("func_0016a9a0");

// 0x001c6ee8 YS::MASSEFFECT::MANAGER::exec_zsort()
u32 lift_001c6ee8(u32 a0) asm("_ZN2YS10MASSEFFECT7MANAGER10exec_zsortEv");
u32 lift_001c6ee8(u32 a0) {
    func_0016a9a0(a0);
    return func_001c14e0(*(u32*)((a0 + 0x9f4)));
}
