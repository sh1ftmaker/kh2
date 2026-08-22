// coverage: addr=0x002e8770 symbol=func_002e8770 size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:81.56;m2c:near:81.56
#include "common/types.h"

extern "C" u32 func_00176fb0(u32, u32) asm("func_00176fb0");
extern "C" u32 func_00177008(u32, u32, u32) asm("func_00177008");
extern "C" void func_00190140(u32) asm("func_00190140");

// 0x002e8770 func_002e8770
u32 func_002e8770(u32 a0) asm("func_002e8770");
u32 func_002e8770(u32 a0) {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 v0_0;
    if (((s32)((*(u32*)((*(u32*)(a0) + 0x588)) & 0x80)) != 0)) {
        s0 = (*(u32*)((*(u32*)(a0) + 0xb40)) + 4);
        s1 = *(u32*)(a0);
        func_00190140(*(u32*)((*(u32*)(a0) + 0xb40)) + 4);
        v0 = func_00177008(s1, func_00176fb0(s1, *(u32*)((a0 + 4))), s0);
        v0_0 = v0;
    }
    return v0_0;
}
