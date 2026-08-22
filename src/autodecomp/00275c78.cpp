// coverage: addr=0x00275c78 symbol=func_00275c78 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:93.94
#include "common/types.h"

extern "C" u32 D_0035f20c asm("D_0035f20c");
extern "C" u32 func_00275dd0() asm("func_00275dd0");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00275c78 func_00275c78
u32 func_00275c78() asm("func_00275c78");
u32 func_00275c78() {
    func_0028dac8(*(u32*)(&D_0035f20c) + 0x368, 0x37);
    func_0028dac8(*(u32*)(&D_0035f20c) + 0x51c, 0x2e);
    return func_00275dd0();
}
