// coverage: addr=0x001d3408 symbol=func_001d3408 size=140 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:66.94;ghidra:near:51.71
#include "common/types.h"

extern "C" u32 D_003216b8 asm("D_003216b8");
extern "C" u32 D_01d5ba10 asm("D_01d5ba10");
extern "C" u32 func_002fd248(u32, u32, u32, u32, u32) asm("func_002fd248");

// 0x001d3408 func_001d3408
u32 func_001d3408(u32 a0) asm("func_001d3408");
u32 func_001d3408(u32 a0) {
    u32 s0;
    u32 t7;
    u32 s1;
    u32 v0;
    s0 = 0;
    t7 = *(u32*)((u32)&D_01d5ba10);
    s1 = (u32)&D_01d5ba10;
    do {
        if (((s32)(*(u32*)((s1 + (s0 * 4)))) != 0)) {
            v0 = func_002fd248(a0, *(u32*)((s1 + (s0 * 4))) + 8, *(u32*)((*(u32*)((s1 + (s0 * 4))) + 4)), 0x60, (u32)&D_003216b8);
            if (((s32)(v0) != 0)) {
                return v0;
            }
        }
        s0 = (s0 + 1);
        t7 = ((s32)(s0) < (s32)(3));
    } while ((t7 != 0));
    return 0;
}
