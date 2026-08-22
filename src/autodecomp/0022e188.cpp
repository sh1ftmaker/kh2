// coverage: addr=0x0022e188 symbol=func_0022e188 size=108 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:84.79;ghidra:near:49.93
#include "common/types.h"

extern "C" u32 D_003711e8 asm("D_003711e8");
extern "C" u32 D_003711f8 asm("D_003711f8");
extern "C" u32 D_01dadac0 asm("D_01dadac0");
extern "C" void func_002feee8(u32, u32) asm("func_002feee8");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x0022e188 func_0022e188
u32 func_0022e188(u32 a0) asm("func_0022e188");
u32 func_0022e188(u32 a0) {
    *(u8*)(&D_01dadac0) = 0;
    func_002feee8((u32)&D_01dadac0, (u32)&D_003711e8);
    func_002feee8((u32)&D_01dadac0, a0);
    func_002feee8((u32)&D_01dadac0, (u32)&D_003711f8);
    func_002ff3fc((u32)&D_01dadac0);
    return (u32)&D_01dadac0;
}
