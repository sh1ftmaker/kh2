// coverage: addr=0x0013e2d8 symbol=func_0013e2d8 size=156 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.93;m2c:near:21.85
#include "common/types.h"

extern "C" u32 func_00139708(u32) asm("func_00139708");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00139598(u32) asm("func_00139598");

// 0x0013e2d8 func_0013e2d8
u32 func_0013e2d8(u32 a0, u32 a1, u32 a2) asm("func_0013e2d8");
u32 func_0013e2d8(u32 a0, u32 a1, u32 a2) {
    *(u32*)((a0 + 0x1b4)) = a1;
    func_001386e0(a0, 0xfa0, func_0013a7e8(0), a2, a1, 0x11);
    func_001386e0(a0 + 0x1c0, 0xfa0, func_0013a7e8(0), a2, 0x14, 0x11);
    func_00139598(a0 + 0x1c0);
    return func_00139708(a0 + 0x1c0);
}
