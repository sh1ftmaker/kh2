// coverage: addr=0x001617e8 symbol=_ZN2dk6Camera9onceCoverEP4TASK size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001024a8(u32) asm("func_001024a8");
extern "C" void func_0014e098(u32) asm("func_0014e098");

// 0x001617e8 dk::Camera::onceCover(TASK*)
u32 lift_001617e8(u32 a0) asm("_ZN2dk6Camera9onceCoverEP4TASK");
u32 lift_001617e8(u32 a0) {
    func_0014e098(0xd8);
    return func_001024a8(a0);
}
