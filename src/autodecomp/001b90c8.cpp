// coverage: addr=0x001b90c8 symbol=_ZN2YS12COMMAND_ELEM7GetFormEi size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:99.5
#include "common/types.h"

extern "C" u32 func_001a36e0() asm("func_001a36e0");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");

// 0x001b90c8 YS::COMMAND_ELEM::GetForm(int)
u32 lift_001b90c8() asm("_ZN2YS12COMMAND_ELEM7GetFormEi");
u32 lift_001b90c8() {
    return func_001b8e88(*(u16*)((func_001a80c8(func_001a36e0()) + 0x10)));
}
