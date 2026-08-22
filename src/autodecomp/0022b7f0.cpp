// coverage: addr=0x0022b7f0 symbol=func_0022b7f0 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:70.11;ghidra:near:41.33
#include "common/types.h"

extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00371138 asm("D_00371138");
extern "C" u32 D_01dad938 asm("D_01dad938");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x0022b7f0 func_0022b7f0
u32 func_0022b7f0() asm("func_0022b7f0");
u32 func_0022b7f0() {
    func_002fee78((u32)&D_01dad938, (u32)&D_00371138, *(u32*)(&D_0033caf4));
    func_002ff3fc((u32)&D_01dad938);
    return (u32)&D_01dad938;
}
