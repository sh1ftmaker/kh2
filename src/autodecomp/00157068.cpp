// coverage: addr=0x00157068 symbol=_ZN2dk12GAUGE_PLAYER6updateEv size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:69.33
#include "common/types.h"

extern "C" u32 func_00155f40(u32) asm("func_00155f40");
extern "C" u32 func_00156408(u32) asm("func_00156408");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00157068 dk::GAUGE_PLAYER::update()
u32 lift_00157068(u32 a0) asm("_ZN2dk12GAUGE_PLAYER6updateEv");
u32 lift_00157068(u32 a0) {
    func_00138c10(a0 + 0x2d80, func_00155f40(a0));
    return func_00156408(a0);
}
