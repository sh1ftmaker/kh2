// coverage: addr=0x001a1460 symbol=_ZN2YS5SHEET6reloadEv size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:98.18
#include "common/types.h"

extern "C" u32 func_001a11e0(u32, u32) asm("func_001a11e0");
extern "C" void func_001a1840(u32) asm("func_001a1840");

// 0x001a1460 YS::SHEET::reload()
u32 lift_001a1460(u32 a0) asm("_ZN2YS5SHEET6reloadEv");
u32 lift_001a1460(u32 a0) {
    func_001a1840(a0);
    return func_001a11e0(a0, 0);
}
