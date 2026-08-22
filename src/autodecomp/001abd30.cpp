// coverage: addr=0x001abd30 symbol=func_001abd30 size=96 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.92
#include "common/types.h"

extern "C" u32 func_001ab800() asm("func_001ab800");
extern "C" u32 func_001ab810() asm("func_001ab810");
extern "C" u32 func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_001abb28(u32) asm("func_001abb28");
extern "C" void func_00239700(u32) asm("func_00239700");

// 0x001abd30 func_001abd30
u32 func_001abd30(u32 a0) asm("func_001abd30");
u32 func_001abd30(u32 a0) {
    u32 s0;
    *(u32*)(a0) = 0;
    func_00239700(a0 + 4);
    func_001abb28(a0 + 0x15c);
    s0 = func_001ab810();
    return func_00239988(a0 + 4, s0, func_001ab800());
}
