// coverage: addr=0x001b7f88 symbol=func_001b7f88 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.33;m2c:near:84.52
#include "common/types.h"

extern "C" u32 D_003511b8 asm("D_003511b8");
extern "C" u32 D_003511c0 asm("D_003511c0");
extern "C" u32 D_01d48cb8 asm("D_01d48cb8");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");

// 0x001b7f88 func_001b7f88
void func_001b7f88() asm("func_001b7f88");
void func_001b7f88() {
    if (((s32)(*(u8*)(&D_003511c0)) != 0)) {
        func_002f25a0(0, 0);
        *(u32*)(&D_01d48cb8) = *(u32*)(&D_003511b8);
    }
    *(u8*)(&D_003511c0) = 0;
    return;
}
