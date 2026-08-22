// coverage: addr=0x002ee448 symbol=func_002ee448 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:61.48
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363808 asm("D_00363808");
extern "C" u32 D_01e2c080 asm("D_01e2c080");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00325840(u32, u32) asm("func_00325840");

// 0x002ee448 func_002ee448
u32 func_002ee448(u32 a0) asm("func_002ee448");
u32 func_002ee448(u32 a0) {
    *(u32*)(a0) = (u32)&D_00363808;
    func_00325840((u32)&D_01e2c080, a0);
    *(u32*)(a0) = (u32)&D_003637e0;
    return func_00106420(a0);
}
