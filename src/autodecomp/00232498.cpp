// coverage: addr=0x00232498 symbol=func_00232498 size=116 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.4;ghidra:near:55.81
#include "common/types.h"

extern "C" u32 D_003712d8 asm("D_003712d8");
extern "C" u32 D_003712e8 asm("D_003712e8");
extern "C" u32 D_01dadbb0 asm("D_01dadbb0");
extern "C" u32 func_00232348(u32) asm("func_00232348");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");
extern "C" void func_002feee8(u32, u32) asm("func_002feee8");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x00232498 func_00232498
u32 func_00232498(u32 a0) asm("func_00232498");
u32 func_00232498(u32 a0) {
    *(u8*)(&D_01dadbb0) = 0;
    func_002fee78((u32)&D_01dadbb0, (u32)&D_003712d8, func_00232348(a0));
    func_002feee8((u32)&D_01dadbb0, a0);
    func_002feee8((u32)&D_01dadbb0, (u32)&D_003712e8);
    func_002ff3fc((u32)&D_01dadbb0);
    return (u32)&D_01dadbb0;
}
