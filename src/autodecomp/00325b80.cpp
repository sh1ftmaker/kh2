// coverage: addr=0x00325b80 symbol=func_00325b80 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.89;ghidra:near:81.61
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_003638a8 asm("D_003638a8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_002361d0(u32) asm("func_002361d0");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x00325b80 func_00325b80
u32 func_00325b80(u32 a0) asm("func_00325b80");
u32 func_00325b80(u32 a0) {
    *(u32*)(a0) = (u32)&D_003638a8;
    func_00239870(a0 + 0x1d4);
    func_002361d0(a0 + 0x30);
    *(u32*)(a0) = (u32)&D_003637e0;
    return func_00106420(a0);
}
