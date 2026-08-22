// coverage: addr=0x00137c50 symbol=func_00137c50 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.86;m2c:near:72.27
#include "common/types.h"

extern "C" u32 func_001391c8(u32, u32, u32) asm("func_001391c8");

// 0x00137c50 func_00137c50
u32 func_00137c50(u32 a0) asm("func_00137c50");
u32 func_00137c50(u32 a0) {
    *(u32*)((a0 + 0x20)) = 1;
    *(u32*)((a0 + 0x30)) = 0;
    *(u32*)((a0 + 0x34)) = 0;
    *(u32*)((a0 + 0x29c0)) = 1;
    *(u32*)((a0 + 0x29c4)) = 0;
    *(u32*)((a0 + 0x29c8)) = 0;
    return func_001391c8(a0, 0x2b5c, 0);
}
