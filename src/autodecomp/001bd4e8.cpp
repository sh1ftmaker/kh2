// coverage: addr=0x001bd4e8 symbol=func_001bd4e8 size=136 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.65;m2c:near:87.03;ghidra:near:81.92;e3:near:68.04
#include "common/types.h"

extern "C" void func_001bd3e0(u32, u32, u32, u32, u32, u32) asm("func_001bd3e0");
extern "C" void func_001bdab0(u32, u32, u32) asm("func_001bdab0");

// 0x001bd4e8 func_001bd4e8
void func_001bd4e8(u32 a0, u32 a1, u32 a2) asm("func_001bd4e8");
void func_001bd4e8(u32 a0, u32 a1, u32 a2) {
    u32 s1;
    if (((s32)((*(u32*)((*(u32*)((a0 + 0x9e0)) + 0x588)) & 0x2000000)) == 0)) {
        func_001bdab0(a0, a1, a2);
        s1 = 0;
        do {
            func_001bd3e0(a0, s1 + 3, *(u32*)(a1), a2, 1, 0x64);
            a1 = (a1 + 4);
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(4))) != 0));
    } else {
    }
    return;
}
