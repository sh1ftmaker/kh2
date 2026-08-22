// coverage: addr=0x00325ae8 symbol=func_00325ae8 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.89;ghidra:near:81.61
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363880 asm("D_00363880");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_002369f0(u32) asm("func_002369f0");
extern "C" void func_0023c098(u32) asm("func_0023c098");

// 0x00325ae8 func_00325ae8
u32 func_00325ae8(u32 a0) asm("func_00325ae8");
u32 func_00325ae8(u32 a0) {
    *(u32*)(a0) = (u32)&D_00363880;
    func_0023c098(a0 + 0x40);
    func_002369f0(a0 + 0x28);
    *(u32*)(a0) = (u32)&D_003637e0;
    return func_00106420(a0);
}
