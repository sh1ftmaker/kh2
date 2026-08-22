// coverage: addr=0x001826f8 symbol=_Z13func_001826f8jjjjjjjj size=36 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:81.64;ghidra:near:28.16
#include "common/types.h"

extern "C" u32 D_01c6053c asm("D_01c6053c");
extern "C" u32 D_01c60540 asm("D_01c60540");

// 0x001826f8 func_001826f8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
f32 lift_001826f8() asm("_Z13func_001826f8jjjjjjjj");
f32 lift_001826f8() {
    return (*(f32*)(&D_01c60540) / *(f32*)(&D_01c6053c));
}
