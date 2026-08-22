// coverage: addr=0x002daca0 symbol=func_002daca0 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:74.0;ghidra:near:44.95
#include "common/types.h"

extern "C" u32 D_003627c8 asm("D_003627c8");
extern "C" u32 func_002cf280(u32, u32, u32) asm("func_002cf280");
extern "C" void func_002cfeb0(u32, u32, u32, u32) asm("func_002cfeb0");

// 0x002daca0 func_002daca0
u32 func_002daca0(u32 a0, u32 a1, u32 a2) asm("func_002daca0");
u32 func_002daca0(u32 a0, u32 a1, u32 a2) {
    func_002cfeb0(a0, a1, 3, a2);
    *(u32*)(a0) = (u32)&D_003627c8;
    *(u32*)((a0 + 0xb14)) = 0;
    *(u8*)((a0 + 0xb18)) = 0;
    *(u32*)((a0 + 0xb1c)) = 0;
    return func_002cf280(a0 + 0xaf0, 1, 0);
}
