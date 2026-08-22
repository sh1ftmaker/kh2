// coverage: addr=0x0022c4b8 symbol=func_0022c4b8 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:80.75;ghidra:near:31.05
#include "common/types.h"

extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00371190 asm("D_00371190");
extern "C" u32 D_01dad960 asm("D_01dad960");
extern "C" void func_002fee78(u32, u32, u32, u32) asm("func_002fee78");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x0022c4b8 func_0022c4b8
u32 func_0022c4b8(u32 a0) asm("func_0022c4b8");
u32 func_0022c4b8(u32 a0) {
    func_002fee78((u32)&D_01dad960, (u32)&D_00371190, *(u32*)(&D_0033caf4), a0);
    func_002ff3fc((u32)&D_01dad960);
    return (u32)&D_01dad960;
}
