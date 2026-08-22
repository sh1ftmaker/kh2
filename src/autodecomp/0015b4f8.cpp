// coverage: addr=0x0015b4f8 symbol=func_0015b4f8 size=128 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:84.78;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_0036b3c0 asm("D_0036b3c0");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x0015b4f8 func_0015b4f8
u32 func_0015b4f8(u32 a0, u32 a1, u32 a2) asm("func_0015b4f8");
u32 func_0015b4f8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 v0;
    u32 t5;
    func_002fee78((u32)frame, (u32)&D_0036b3c0, a1);
    v0 = 0;
    t5 = 0;
    do {
        if (((s32)(*(s8*)(((u32)frame + t5))) == 0)) {
            break;
        }
        *(u32*)(a2) = *(u32*)((((*(s8*)(((u32)frame + t5)) + -0x30) << 2) + a0));
        a2 = (a2 + 4);
        t5 = (t5 + 1);
        v0 = (v0 + 1);
    } while (((s32)(((s32)(t5) < (s32)(0x10))) != 0));
    return v0;
}
