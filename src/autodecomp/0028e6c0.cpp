// coverage: addr=0x0028e6c0 symbol=func_0028e6c0 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00239d30(u32, u32) asm("func_00239d30");
extern "C" void func_00139d78(u32, u32) asm("func_00139d78");

// 0x0028e6c0 func_0028e6c0
u32 func_0028e6c0(u32 a0, u32 a1) asm("func_0028e6c0");
u32 func_0028e6c0(u32 a0, u32 a1) {
    func_00139d78(a0, a1);
    return (func_00239d30(*(u32*)((a0 + 0x38)) + (a1 * 0x17c), *(u32*)(((*(u32*)((a0 + 0x38)) + (a1 * 0x17c)) + 0x114))) & 0xff);
}
