// coverage: addr=0x00320118 symbol=func_00320118 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00351100 asm("D_00351100");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0031fec0(u32) asm("func_0031fec0");

// 0x00320118 func_00320118
u32 func_00320118(u32 a0) asm("func_00320118");
u32 func_00320118(u32 a0) {
    *(u32*)(a0) = (u32)&D_00351100;
    func_0031fec0(a0);
    return func_00105110(a0);
}
