// coverage: addr=0x0031c068 symbol=_ZN2dk17ScisSpriteMessage4drawEv size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;e3:near:99.87;corpus:near:73.0;ghidra:near:62.79
#include "common/types.h"

extern "C" u32 func_0014b9a8(u32) asm("func_0014b9a8");
extern "C" void func_00138988(u32) asm("func_00138988");
extern "C" void func_00138de0(u32) asm("func_00138de0");

// 0x0031c068 dk::ScisSpriteMessage::draw()
u32 lift_0031c068(u32 a0) asm("_ZN2dk17ScisSpriteMessage4drawEv");
u32 lift_0031c068(u32 a0) {
    func_00138988(a0);
    func_0014b9a8(a0 + 0x1c0);
    func_00138de0(a0);
    return func_0014b9a8(a0 + 0x1e0);
}
