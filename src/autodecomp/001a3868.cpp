// coverage: addr=0x001a3868 symbol=_ZN2YS4ITEM14GetCommandElemEi size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:99.38;corpus:near:75.0
#include "common/types.h"

extern "C" u32 func_001a80c8() asm("func_001a80c8");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");

// 0x001a3868 YS::ITEM::GetCommandElem(int)
u32 lift_001a3868() asm("_ZN2YS4ITEM14GetCommandElemEi");
u32 lift_001a3868() {
    return func_001b8e88(*(u16*)((func_001a80c8() + 0x10)));
}
