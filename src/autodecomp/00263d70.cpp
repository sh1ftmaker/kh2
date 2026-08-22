// coverage: addr=0x00263d70 symbol=func_00263d70 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:84.62;ghidra:near:83.31
#include "common/types.h"

extern "C" u32 D_00263db0 asm("D_00263db0");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0() asm("func_00103eb0");

// 0x00263d70 func_00263d70
u32 func_00263d70() asm("func_00263d70");
u32 func_00263d70() {
    return func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x7d0, (u32)&D_00263db0, 0x1000);
}
