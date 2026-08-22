// coverage: addr=0x00153f08 symbol=_ZN2dk6Camera20singleCrossFadeStartEf size=152 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:89.13;ghidra:near:81.21
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a7a0 asm("D_0034a7a0");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 func_0023ee30(u32, u32) asm("func_0023ee30");
extern "C" void func_00153ea0(u32, u32, u32, u32, u32) asm("func_00153ea0");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00153f08 dk::Camera::singleCrossFadeStart(float)
u32 lift_00153f08(u32 a0, u32 a1) asm("_ZN2dk6Camera20singleCrossFadeStartEf");
u32 lift_00153f08(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_0023ee30(0xa4, a1);
    *(u32*)(v0) = (u32)&D_00347f98;
    func_0031a838(v0 + 0xc);
    *(u32*)(v0) = (u32)&D_0035eb98;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(v0) = (u32)&D_0034a7a0;
    func_00153ea0(v0, a0, 0x12c0, a1, 0);
    return v0;
}
