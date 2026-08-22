// coverage: addr=0x002be568 symbol=func_002be568 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_002baa08(u32, u32, u32, u32) asm("func_002baa08");
extern "C" void func_002baa60(u32, u32) asm("func_002baa60");

// 0x002be568 func_002be568
u32 func_002be568(u32 a0, u32 a1) asm("func_002be568");
u32 func_002be568(u32 a0, u32 a1) {
    u32 v0;
    func_002baa60(a0, a1);
    v0 = func_00168b38(*(u32*)((a0 + 0x68)), 0xffffffff, a1);
    return func_002baa08(*(u32*)((v0 + 8)), *(u32*)((v0 + 0xc)), 0x3fff, 0x40);
}
