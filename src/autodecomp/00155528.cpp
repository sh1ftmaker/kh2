// coverage: addr=0x00155528 symbol=_ZN2dk12GAUGE_FRIEND6reloadEv size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:53.5
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00154ee8(u32) asm("func_00154ee8");
extern "C" void func_001581f8(u32) asm("func_001581f8");

// 0x00155528 dk::GAUGE_FRIEND::reload()
u32 lift_00155528(u32 a0) asm("_ZN2dk12GAUGE_FRIEND6reloadEv");
u32 lift_00155528(u32 a0) {
    func_001581f8(a0);
    return func_00138c10(a0 + 0x394, func_00154ee8(a0));
}
