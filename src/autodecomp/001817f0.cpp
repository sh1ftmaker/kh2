// coverage: addr=0x001817f0 symbol=func_001817f0 size=100 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.88;ghidra:near:80.96
#include "common/types.h"

extern "C" u32 D_0036c710 asm("D_0036c710");
extern "C" void func_0019ee80(u32, u32) asm("func_0019ee80");

// 0x001817f0 func_001817f0
void func_001817f0(u32 a0) asm("func_001817f0");
void func_001817f0(u32 a0) {
    u32 s0;
    u32 t7;
    s0 = (u32)&D_0036c710;
    t7 = *(u32*)((u32)&D_0036c710);
    do {
        if ((*(u32*)(s0) == a0)) {
            func_0019ee80(*(u32*)((s0 + 4)), *(u32*)((s0 + 8)));
        }
        s0 = (s0 + 0xc);
        t7 = ((s32)(s0) < (s32)(((u32)&D_0036c710 + 0xa8)));
    } while ((t7 != 0));
    return;
}
