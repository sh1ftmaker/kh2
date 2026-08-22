// coverage: addr=0x002bda38 symbol=func_002bda38 size=144 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.86;ghidra:near:86.64;e3:near:71.61
#include "common/types.h"

extern "C" u32 D_003617fc asm("D_003617fc");
extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 func_00170320(u32) asm("func_00170320");
extern "C" void func_00170950(u32) asm("func_00170950");
extern "C" void func_001b86e0(u32) asm("func_001b86e0");
extern "C" void func_002be148(u32) asm("func_002be148");

// 0x002bda38 func_002bda38
u32 func_002bda38(u32 a0) asm("func_002bda38");
u32 func_002bda38(u32 a0) {
    u32 a0_0;
    u32 s0;
    u32 v0;
    func_002be148(a0);
    a0_0 = *(u32*)((a0 + 0x10));
    while (((s32)(a0_0) != 0)) {
        s0 = *(u32*)((a0_0 + 0x20));
        if (((s32)(a0_0) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0_0) + 4))))(a0_0);
        }
        a0_0 = s0;
    }
    if (((s32)(*(u32*)((a0 + 0x68))) != 0)) {
        func_00170950(*(u32*)((a0 + 0x68)));
    }
    func_001b86e0(*(u32*)((a0 + 4)));
    v0 = func_00170320(0xffffff38);
    *(u32*)(&D_003617fc) = 0;
    *(u32*)((a0 + 8)) = (u32)&D_003637e0;
    return v0;
}
