// coverage: addr=0x001ad5a8 symbol=func_001ad5a8 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:76.74;ghidra:near:59.9
#include "common/types.h"

extern "C" u32 D_00350a56 asm("D_00350a56");
extern "C" u32 D_00350a70 asm("D_00350a70");
extern "C" u32 func_0014c9d8(u32) asm("func_0014c9d8");
extern "C" void func_001ad280(u32) asm("func_001ad280");
extern "C" void func_001c1130(u32) asm("func_001c1130");

// 0x001ad5a8 func_001ad5a8
u32 func_001ad5a8(u32 a0) asm("func_001ad5a8");
u32 func_001ad5a8(u32 a0) {
    func_001ad280(a0);
    *(u32*)(a0) = (u32)&D_00350a70;
    *(u8*)(&D_00350a56) = 1;
    func_001c1130(0xc);
    return func_0014c9d8(8);
}
