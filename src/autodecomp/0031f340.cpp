// coverage: addr=0x0031f340 symbol=func_0031f340 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.89;ghidra:near:67.7
#include "common/types.h"

extern "C" u32 D_0034ee08 asm("D_0034ee08");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0019f9a8(u32) asm("func_0019f9a8");
extern "C" void func_001c0248(u32) asm("func_001c0248");
extern "C" void func_00319fb0(u32) asm("func_00319fb0");

// 0x0031f340 func_0031f340
u32 func_0031f340(u32 a0) asm("func_0031f340");
u32 func_0031f340(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034ee08;
    func_0019f9a8(a0 + 0xa08);
    func_001c0248(a0 + 0xa50);
    func_00319fb0(a0);
    return func_00105110(a0);
}
