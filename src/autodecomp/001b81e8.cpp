// coverage: addr=0x001b81e8 symbol=func_001b81e8 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.0;m2c:near:65.64
#include "common/types.h"

extern "C" u32 D_003511b8 asm("D_003511b8");
extern "C" u32 D_003511c1 asm("D_003511c1");
extern "C" void func_001b7f88() asm("func_001b7f88");

// 0x001b81e8 func_001b81e8
u32 func_001b81e8() asm("func_001b81e8");
u32 func_001b81e8() {
    func_001b7f88();
    *(u8*)(&D_003511c1) = 1;
    return *(u32*)(&D_003511b8);
}
