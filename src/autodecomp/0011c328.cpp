// coverage: addr=0x0011c328 symbol=func_0011c328 size=136 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.76;m2c:near:91.18;ghidra:near:75.36
#include "common/types.h"

extern "C" u32 func_0011c438(u32) asm("func_0011c438");
extern "C" void func_0011e350(u32, u32) asm("func_0011e350");

// 0x0011c328 func_0011c328
u32 func_0011c328(u32 a0) asm("func_0011c328");
u32 func_0011c328(u32 a0) {
    u8 frame[1];
    u32 a1_0;
    u32 s0;
    u32 a0_1;
    u32 a0_2;
    u32 s0_3;
    u32 sp;
    a1_0 = *(u32*)((a0 + 0x28));
    if (((s32)(a1_0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x10))) + 4))))(*(u32*)((a0 + 0x10)), a1_0);
        *(u32*)((a0 + 0x28)) = 0;
    }
    s0 = *(u32*)((a0 + 0x124));
    if ((s0 != 0)) {
        a0_1 = *(u32*)((a0 + 0x10));
        do {
            a0_2 = *(u32*)((a0 + 0x10));
            s0_3 = *(u32*)((s0 + 0xc));
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x10))) + 4))))(a0_2, s0);
            s0 = s0_3;
        } while ((s0 != 0));
    } else {
        sp = (u32)frame;
    }
    func_0011e350(a0, *(u32*)((a0 + 0x38)));
    return func_0011c438(a0);
}
