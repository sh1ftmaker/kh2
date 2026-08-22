// coverage: addr=0x0016e130 symbol=_ZN2YS29trap_saveram_set_form_abilityEP8BD_VALUE size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:95.64
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_001891b8(u32, u32) asm("func_001891b8");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");

// 0x0016e130 YS::trap_saveram_set_form_ability(BD_VALUE*)
u32 lift_0016e130(u32 a0) asm("_ZN2YS29trap_saveram_set_form_abilityEP8BD_VALUE");
u32 lift_0016e130(u32 a0) {
    return func_001891b8(func_00189200((u32)&D_0032e020, *(u32*)(a0)), *(u32*)((a0 + 4)));
}
