// coverage: addr=0x001e6648 symbol=func_001e6648 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.0;m2c:near:88.0;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_01d9e6b0 asm("D_01d9e6b0");
extern "C" u32 D_01d9e6b4 asm("D_01d9e6b4");
extern "C" u32 func_0021c9b0() asm("func_0021c9b0");
extern "C" void func_001e65d0() asm("func_001e65d0");
extern "C" void func_001e6630() asm("func_001e6630");

// 0x001e6648 func_001e6648
u32 func_001e6648() asm("func_001e6648");
u32 func_001e6648() {
    u32 v0;
    func_001e65d0();
    func_001e6630();
    v0 = func_0021c9b0();
    *(u32*)(&D_01d9e6b4) = 0;
    *(u8*)(&D_01d9e6b0) = 0;
    return v0;
}
