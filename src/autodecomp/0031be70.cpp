// coverage: addr=0x0031be70 symbol=func_0031be70 size=104 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a440 asm("D_0034a440");
extern "C" u32 func_0014b920(u32) asm("func_0014b920");
extern "C" void func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0031be70 func_0031be70
u32 func_0031be70(u32 a0) asm("func_0031be70");
u32 func_0031be70(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347f98;
    func_0031a838(a0 + 0xc);
    *(u32*)(a0) = (u32)&D_00347e60;
    func_00239700(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_0034a440;
    *(u32*)((a0 + 0x198)) = 0;
    func_0014b920(a0 + 0x1c0);
    return func_0014b920(a0 + 0x1e0);
}
