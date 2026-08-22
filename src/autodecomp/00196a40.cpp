// coverage: addr=0x00196a40 symbol=func_00196a40 size=96 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.58;ghidra:near:88.29
#include "common/types.h"

extern "C" u32 D_00196888 asm("D_00196888");
extern "C" u32 D_00196a08 asm("D_00196a08");
extern "C" u32 D_00350338 asm("D_00350338");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x00196a40 func_00196a40
u32 func_00196a40() asm("func_00196a40");
u32 func_00196a40() {
    u32 t6;
    u32 t7;
    u32 v0;
    t6 = 7;
    t7 = (u32)&D_00350338;
    do {
        *(u32*)(((t7 + ((t6 - 7) * -8)) + 4)) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    v0 = func_00102c18(1, 0x36b2, (u32)&D_00196888);
    *(u32*)((v0 + 0x30)) = (u32)&D_00196a08;
    return v0;
}
