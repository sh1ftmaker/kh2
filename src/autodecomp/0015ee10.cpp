// coverage: addr=0x0015ee10 symbol=_ZN2dk3Map12setHideGroupEj size=124 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:65.21;ghidra:near:59.94;m2c:near:54.23
#include "common/types.h"

extern "C" u32 D_0034c6f0 asm("D_0034c6f0");
extern "C" u32 D_0034c70c asm("D_0034c70c");
extern "C" u32 D_0034c710 asm("D_0034c710");
extern "C" u32 func_0015c4a0(u32) asm("func_0015c4a0");
extern "C" u32 func_001de3d8(u32, u32) asm("func_001de3d8");
extern "C" void func_00143060(u32) asm("func_00143060");
extern "C" void func_001538d8(u32) asm("func_001538d8");

// 0x0015ee10 dk::Map::setHideGroup(unsigned int)
u32 lift_0015ee10(u32 a0) asm("_ZN2dk3Map12setHideGroupEj");
u32 lift_0015ee10(u32 a0) {
    u32 v0;
    *(u64*)(&D_0034c710) = (~((0 | ((u64)(1) << a0))) & *(u64*)(&D_0034c710));
    func_00143060(a0);
    func_001538d8(a0 & 0xff);
    v0 = func_0015c4a0(a0);
    if ((*(u8*)(&D_0034c70c) == 1)) {
        return func_001de3d8((u32)&D_0034c6f0, a0);
    } else {
        return v0;
    }
}
