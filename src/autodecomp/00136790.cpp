// coverage: addr=0x00136790 symbol=_ZN2dk4BGSE5allocEPcRj size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.62
#include "common/types.h"

extern "C" u32 func_001688c8(u32) asm("func_001688c8");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");

// 0x00136790 dk::BGSE::alloc(char*, unsigned int&)
u32 lift_00136790(u32 a0, u32 a1) asm("_ZN2dk4BGSE5allocEPcRj");
u32 lift_00136790(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_001688c8(a0);
    *(u32*)(a1) = v0;
    return func_00170b30((v0 + 0x7ff) & 0xfffff800);
}
