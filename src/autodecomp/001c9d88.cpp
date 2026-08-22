// coverage: addr=0x001c9d88 symbol=_ZN2YS9SACRIFICE6CanEndEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:94.0
#include "common/types.h"

extern "C" u32 func_0017e668(u32) asm("func_0017e668");
extern "C" u32 func_001a8b68() asm("func_001a8b68");

// 0x001c9d88 YS::SACRIFICE::CanEnd()
u32 lift_001c9d88() asm("_ZN2YS9SACRIFICE6CanEndEv");
u32 lift_001c9d88() {
    return ((u32)(func_0017e668(func_001a8b68())) < (u32)(1));
}
