// coverage: addr=0x002daa50 symbol=func_002daa50 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.37;m2c:near:72.88
#include "common/types.h"

extern "C" u32 D_00362858 asm("D_00362858");
extern "C" u32 func_002cf280(u32, u32, u32) asm("func_002cf280");
extern "C" void func_002cfeb0(u32, u32, u32, u32) asm("func_002cfeb0");

// 0x002daa50 func_002daa50
u32 func_002daa50(u32 a0, u32 a1, u32 a2) asm("func_002daa50");
u32 func_002daa50(u32 a0, u32 a1, u32 a2) {
    func_002cfeb0(a0, a1, 3, a2);
    *(u32*)(a0) = (u32)&D_00362858;
    return func_002cf280(a0 + 0xaf0, 1, 0);
}
