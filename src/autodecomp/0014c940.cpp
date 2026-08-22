// coverage: addr=0x0014c940 symbol=_ZN2dk5Timer12setCountDownEj size=48 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.75;lift:near:98.92;ghidra:near:93.92;m2c:near:44.31
#include "common/types.h"

extern "C" u32 D_00349df4 asm("D_00349df4");
extern "C" u32 D_00349df8 asm("D_00349df8");
extern "C" u32 D_00349dfc asm("D_00349dfc");
extern "C" u32 D_00349e00 asm("D_00349e00");

// 0x0014c940 dk::Timer::setCountDown(unsigned int)
void lift_0014c940(u32 a0) asm("_ZN2dk5Timer12setCountDownEj");
void lift_0014c940(u32 a0) {
    *(u8*)(&D_00349e00) = 1;
    *(u32*)(&D_00349dfc) = 0;
    *(u32*)(&D_00349df8) = (a0 * 0x3c);
    *(u32*)(&D_00349df4) = (a0 * 0x3c);
}
