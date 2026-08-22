// coverage: addr=0x0014c9b8 symbol=_ZN2dk5Timer5startEv size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:99.75;m2c:near:33.73
#include "common/types.h"

extern "C" u32 D_00349de8 asm("D_00349de8");
extern "C" u32 D_00349df0 asm("D_00349df0");
extern "C" u32 D_00349dfc asm("D_00349dfc");

// 0x0014c9b8 dk::Timer::start()
void lift_0014c9b8() asm("_ZN2dk5Timer5startEv");
void lift_0014c9b8() {
    *(u32*)(&D_00349df0) = *(u32*)(&D_00349de8);
    *(u32*)(&D_00349dfc) = 1;
}
