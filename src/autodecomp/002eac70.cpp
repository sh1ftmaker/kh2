// coverage: addr=0x002eac70 symbol=func_002eac70 size=36 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:73.33;m2c:near:32.24
#include "common/types.h"

extern "C" u32 D_00363440 asm("D_00363440");
extern "C" u32 D_00363448 asm("D_00363448");
extern "C" u32 D_0036344c asm("D_0036344c");
extern "C" u32 D_00363450 asm("D_00363450");

// 0x002eac70 func_002eac70
void func_002eac70(f32 fa0, f32 fa1, f32 fa2, f32 fa3) asm("func_002eac70");
void func_002eac70(f32 fa0, f32 fa1, f32 fa2, f32 fa3) {
    *(f32*)(&D_00363440) = fa0;
    *(f32*)(&D_00363448) = fa1;
    *(f32*)(&D_0036344c) = fa2;
    *(f32*)(&D_00363450) = fa3;
}
