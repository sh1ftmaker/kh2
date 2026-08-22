// coverage: addr=0x00171348 symbol=_ZN2YS13trap_obj_hideEP8BD_VALUE size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.09;ghidra:near:78.36;e3:near:38.59
#include "common/types.h"


// 0x00171348 YS::trap_obj_hide(BD_VALUE*)
void lift_00171348(u32 a0) asm("_ZN2YS13trap_obj_hideEP8BD_VALUE");
void lift_00171348(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 4))) + 0x44))))(*(u32*)((*(u32*)(a0) + 4)));
}
