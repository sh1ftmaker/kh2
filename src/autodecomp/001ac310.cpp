// coverage: addr=0x001ac310 symbol=func_001ac310 size=104 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:91.88;m2c:near:91.88;ghidra:near:91.15
#include "common/types.h"

extern "C" u32 func_0023ade0(u32) asm("func_0023ade0");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");

// 0x001ac310 func_001ac310
void func_001ac310(u32 a0) asm("func_001ac310");
void func_001ac310(u32 a0) {
    u32 s1;
    s1 = (a0 + 0xc);
    if (((s32)(*(u32*)(a0)) != 0)) {
        func_0023acd8(s1);
        s32 t12_32 = (s32)(*(u32*)((a0 + 4)));
        s32 t14_32 = (s32)(*(u32*)((a0 + 8)));
        *(u32*)((s1 + 0x148)) = t12_32;
        *(u32*)((s1 + 0x14c)) = t14_32;
        func_0023ade0(s1);
        return;
    } else {
        return;
    }
}
