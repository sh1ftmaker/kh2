// coverage: addr=0x0025a1d0 symbol=func_0025a1d0 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.0;m2c:near:61.46;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_00372eea asm("D_00372eea");
extern "C" u32 func_00240be0() asm("func_00240be0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002b4b00() asm("func_002b4b00");

// 0x0025a1d0 func_0025a1d0
u32 func_0025a1d0() asm("func_0025a1d0");
u32 func_0025a1d0() {
    func_002b4b00();
    func_0028f4d8(0, *(u16*)(&D_00372eea), 0);
    return func_00240be0();
}
