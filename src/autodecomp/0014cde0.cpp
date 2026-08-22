// coverage: addr=0x0014cde0 symbol=_ZN2dk5Vsync12setGameSpeedEfff size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.53;m2c:near:77.0
#include "common/types.h"

extern "C" u32 D_0014cd98 asm("D_0014cd98");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_004574b8 asm("D_004574b8");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_0014f030(u32) asm("func_0014f030");

// 0x0014cde0 dk::Vsync::setGameSpeed(float, float, float)
u32 lift_0014cde0() asm("_ZN2dk5Vsync12setGameSpeedEfff");
u32 lift_0014cde0() {
    func_0014f030((u32)&D_004574b8);
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0xc3500, (u32)&D_0014cd98);
}
