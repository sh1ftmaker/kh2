// coverage: addr=0x00241528 symbol=func_00241528 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.0;m2c:near:75.0;e3:near:57.5
#include "common/types.h"

extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_0035ec94 asm("D_0035ec94");
extern "C" u32 func_002346a0(u32, u32, u32) asm("func_002346a0");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x00241528 func_00241528
u32 func_00241528() asm("func_00241528");
u32 func_00241528() {
    func_002ff3fc(*(u32*)(&D_0035ec88));
    return func_002346a0(*(s8*)(*(u32*)(&D_0035ec94)), *(u32*)(&D_0035ec88), 0);
}
