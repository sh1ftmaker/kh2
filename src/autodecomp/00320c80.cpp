// coverage: addr=0x00320c80 symbol=func_00320c80 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00352878 asm("D_00352878");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0031ffc0(u32) asm("func_0031ffc0");

// 0x00320c80 func_00320c80
u32 func_00320c80(u32 a0) asm("func_00320c80");
u32 func_00320c80(u32 a0) {
    *(u32*)(a0) = (u32)&D_00352878;
    func_0031ffc0(a0);
    return func_00105110(a0);
}
