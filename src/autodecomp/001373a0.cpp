// coverage: addr=0x001373a0 symbol=func_001373a0 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.86;ghidra:near:82.86;m2c:near:30.12
#include "common/types.h"

extern "C" u32 D_00347d54 asm("D_00347d54");
extern "C" u32 D_00347d55 asm("D_00347d55");
extern "C" u32 D_00347d56 asm("D_00347d56");
extern "C" u32 func_00136a18() asm("func_00136a18");
extern "C" void func_002ba848(u32) asm("func_002ba848");

// 0x001373a0 func_001373a0
u32 func_001373a0() asm("func_001373a0");
u32 func_001373a0() {
    *(u8*)(&D_00347d55) = 0;
    *(u8*)(&D_00347d56) = *(u8*)(&D_00347d54);
    *(u8*)(&D_00347d54) = 0;
    func_002ba848(0x3c0);
    return func_00136a18();
}
