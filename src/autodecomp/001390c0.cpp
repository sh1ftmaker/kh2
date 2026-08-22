// coverage: addr=0x001390c0 symbol=_ZN2dk13SpriteMessage4drawEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00138de0(u32) asm("func_00138de0");
extern "C" void func_00138988(u32) asm("func_00138988");

// 0x001390c0 dk::SpriteMessage::draw()
u32 lift_001390c0(u32 a0) asm("_ZN2dk13SpriteMessage4drawEv");
u32 lift_001390c0(u32 a0) {
    func_00138988(a0);
    return func_00138de0(a0);
}
