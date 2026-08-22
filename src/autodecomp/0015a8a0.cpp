// coverage: addr=0x0015a8a0 symbol=_ZN2dk14BlindCollision4makeEv size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:99.82;m2c:near:84.31
#include "common/types.h"

extern "C" u32 D_0034aa90 asm("D_0034aa90");
extern "C" u32 D_0034aa94 asm("D_0034aa94");
extern "C" u32 func_0016c3a8(u32, u32) asm("func_0016c3a8");

// 0x0015a8a0 dk::BlindCollision::make()
u32 lift_0015a8a0() asm("_ZN2dk14BlindCollision4makeEv");
u32 lift_0015a8a0() {
    u32 v0;
    v0 = func_0016c3a8(*(u32*)(&D_0034aa90), 0x40);
    *(u32*)(&D_0034aa94) = v0;
    return v0;
}
