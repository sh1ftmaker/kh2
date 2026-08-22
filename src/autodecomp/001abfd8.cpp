// coverage: addr=0x001abfd8 symbol=func_001abfd8 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001ab800() asm("func_001ab800");
extern "C" u32 func_001ab810() asm("func_001ab810");
extern "C" u32 func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");

// 0x001abfd8 func_001abfd8
u32 func_001abfd8(u32 a0) asm("func_001abfd8");
u32 func_001abfd8(u32 a0) {
    u32 s0;
    *(u8*)(a0) = 0;
    func_00239700(a0 + 4);
    s0 = func_001ab810();
    return func_00239988(a0 + 4, s0, func_001ab800());
}
