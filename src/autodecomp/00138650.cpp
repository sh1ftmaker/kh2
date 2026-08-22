// coverage: addr=0x00138650 symbol=_ZN2dk11SpriteImage6createEiPvi size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:97.67;ghidra:near:86.4
#include "common/types.h"

extern "C" u32 func_002367c8(u32) asm("_ZN2YI5IMAGE13InitLoadImageEv");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");

// 0x00138650 dk::SpriteImage::create(int, void*, int)
u32 lift_00138650(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2dk11SpriteImage6createEiPvi");
u32 lift_00138650(u32 a0, u32 a1, u32 a2, u32 a3) {
    func_001391c8(a0, a1, a3);
    func_002362b0(a0 + 0x20, a2);
    return func_002367c8(a0 + 0x20);
}
