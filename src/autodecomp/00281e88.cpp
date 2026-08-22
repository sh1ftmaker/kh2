// coverage: addr=0x00281e88 symbol=func_00281e88 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:86.67;m2c:near:86.0
#include "common/types.h"

extern "C" u32 func_00281f90(u32) asm("func_00281f90");
extern "C" void func_00281f40(u32, u32) asm("func_00281f40");
extern "C" void func_00281f48(u32) asm("func_00281f48");
extern "C" void func_00281f70(u32) asm("func_00281f70");

// 0x00281e88 func_00281e88
u32 func_00281e88(u32 a0) asm("func_00281e88");
u32 func_00281e88(u32 a0) {
    func_00281f40(a0, 0);
    func_00281f48(a0);
    func_00281f70(a0);
    return func_00281f90(a0);
}
