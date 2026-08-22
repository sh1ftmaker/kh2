// coverage: addr=0x002f08d8 symbol=_ZN2kn22trap_genie_change_formEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:46.15
#include "common/types.h"

extern "C" u32 func_0010c7e8(u32) asm("func_0010c7e8");
extern "C" u32 func_00119e60(u32, u32) asm("func_00119e60");

// 0x002f08d8 kn::trap_genie_change_form(BD_VALUE*)
u32 lift_002f08d8(u32 a0) asm("_ZN2kn22trap_genie_change_formEP8BD_VALUE");
u32 lift_002f08d8(u32 a0) {
    return func_00119e60(func_0010c7e8(*(u32*)((*(u32*)(a0) + 4))), *(u32*)((a0 + 4)));
}
