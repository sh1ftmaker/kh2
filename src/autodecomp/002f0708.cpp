// coverage: addr=0x002f0708 symbol=_ZN2kn15trap_empty_funcEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:40.0
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_00117808(u32, u32) asm("func_00117808");

// 0x002f0708 kn::trap_empty_func(BD_VALUE*)
u32 lift_002f0708(u32 a0) asm("_ZN2kn15trap_empty_funcEP8BD_VALUE");
u32 lift_002f0708(u32 a0) {
    return func_00117808(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
}
