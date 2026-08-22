// coverage: addr=0x0026ff30 symbol=func_0026ff30 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.94;m2c:near:83.0;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f128 asm("D_0035f128");
extern "C" u32 D_0035f130 asm("D_0035f130");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_002571e0(u32) asm("func_002571e0");
extern "C" void func_00257388(u32, u32) asm("func_00257388");

// 0x0026ff30 func_0026ff30
u32 func_0026ff30() asm("func_0026ff30");
u32 func_0026ff30() {
    *(u8*)(&D_0035f130) = func_00287bc0();
    *(u8*)(&D_0035f128) = 0;
    func_00257388(0x846a, 0);
    func_002571e0(1);
    return func_00287cc0(0);
}
