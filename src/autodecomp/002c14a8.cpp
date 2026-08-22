// coverage: addr=0x002c14a8 symbol=_ZN2dk13WM_TOTAL_INFO7fadeoutEv size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:92.38
#include "common/types.h"

extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x002c14a8 dk::WM_TOTAL_INFO::fadeout()
void lift_002c14a8(u32 a0) asm("_ZN2dk13WM_TOTAL_INFO7fadeoutEv");
void lift_002c14a8(u32 a0) {
    u32 s0;
    s0 = (a0 + 0xc0);
    if ((*(u32*)((s0 + 0x184)) != 0x4d)) {
        func_00138c10(s0, 0x4d);
        *(u32*)((s0 + 0x188)) = 0xffffffff;
    }
    return;
}
