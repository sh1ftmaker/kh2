// coverage: addr=0x00138698 symbol=_ZN2dk11SpriteImage6changeEPv size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002367c8(u32) asm("_ZN2YI5IMAGE13InitLoadImageEv");
extern "C" void func_002362b0(u32) asm("func_002362b0");

// 0x00138698 dk::SpriteImage::change(void*)
u32 lift_00138698(u32 a0) asm("_ZN2dk11SpriteImage6changeEPv");
u32 lift_00138698(u32 a0) {
    func_002362b0(a0 + 0x20);
    return func_002367c8(a0 + 0x20);
}
