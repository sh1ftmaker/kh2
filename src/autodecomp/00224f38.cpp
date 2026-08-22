// coverage: addr=0x00224f38 symbol=func_00224f38 size=104 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.31;ghidra:near:89.96
#include "common/types.h"

extern "C" u32 D_00224f08 asm("D_00224f08");
extern "C" u32 D_0022b108 asm("D_0022b108");
extern "C" u32 func_00102c18(u32, u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_0022a368(u32) asm("func_0022a368");

// 0x00224f38 func_00224f38
u32 func_00224f38(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00224f38");
u32 func_00224f38(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    u32 v0_0;
    v0 = func_00102c18(1, a0, (u32)&D_0022b108, a3);
    *(u32*)(a1) = v0;
    *(u32*)((v0 + 0x30)) = (u32)&D_00224f08;
    v0_0 = func_0022a368(a3);
    *(u32*)(a2) = v0_0;
    return v0_0;
}
