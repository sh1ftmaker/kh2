// coverage: addr=0x001385c0 symbol=_ZN2dk5Pause4initEv size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:93.62;m2c:near:88.5
#include "common/types.h"

extern "C" u32 D_001384d0 asm("D_001384d0");
extern "C" u32 D_00347e08 asm("D_00347e08");
extern "C" u32 func_00102c48(u32, u32, u32, u32) asm("func_00102c48");

// 0x001385c0 dk::Pause::init()
u32 lift_001385c0() asm("_ZN2dk5Pause4initEv");
u32 lift_001385c0() {
    *(u32*)(&D_00347e08) = 0;
    return func_00102c48(1, 0x4baf0, (u32)&D_001384d0, 0x1000);
}
