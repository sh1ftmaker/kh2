// coverage: addr=0x00228e28 symbol=_ZN2sa14MUSICAL_GAUGE36updateEv size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.17;e3:near:91.92;ghidra:near:83.93
#include "common/types.h"

extern "C" u32 func_00228bd8(u32) asm("func_00228bd8");

// 0x00228e28 sa::MUSICAL_GAUGE3::update()
u32 lift_00228e28(u32 a0) asm("_ZN2sa14MUSICAL_GAUGE36updateEv");
u32 lift_00228e28(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x1c))))(a0);
    return func_00228bd8(a0);
}
