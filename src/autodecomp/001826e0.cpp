// coverage: addr=0x001826e0 symbol=_Z13func_001826e0v size=24 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:74.75;ghidra:near:26.25
#include "common/types.h"

extern "C" u32 D_01c6053c asm("D_01c6053c");
extern "C" u32 D_01c60540 asm("D_01c60540");

// 0x001826e0 func_001826e0()
f32 lift_001826e0() asm("_Z13func_001826e0v");
f32 lift_001826e0() {
    return (*(f32*)(&D_01c6053c) - *(f32*)(&D_01c60540));
}
