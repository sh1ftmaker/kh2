// coverage: addr=0x00167638 symbol=func_00167638 size=28 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:74.29;m2c:near:28.05
#include "common/types.h"

extern "C" u32 D_004f5268 asm("D_004f5268");
extern "C" u32 D_004f526c asm("D_004f526c");
extern "C" u32 D_004f5270 asm("D_004f5270");

// 0x00167638 func_00167638
void func_00167638(f32 fa0, f32 fa1, f32 fa2) asm("func_00167638");
void func_00167638(f32 fa0, f32 fa1, f32 fa2) {
    *(f32*)(&D_004f5268) = fa0;
    *(f32*)(&D_004f526c) = fa1;
    *(f32*)(&D_004f5270) = fa2;
}
