// coverage: addr=0x0014fba0 symbol=func_0014fba0 size=84 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:84.05;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_0034a458 asm("D_0034a458");

// 0x0014fba0 func_0014fba0
void func_0014fba0() asm("func_0014fba0");
void func_0014fba0() {
    u32 t5;
    u32 t7;
    u32 t4;
    u32 t6;
    u32 t7_0;
    t5 = 0;
    t7 = (0 << 1);
    do {
        t4 = (u32)&D_0034a458;
        t6 = 2;
        t7_0 = ((((t5 << 1) + t5) << 1) + (u32)&D_0034a458);
        do {
            *(u16*)((t7_0 + ((t6 - 2) * -2))) = 0;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(0x13));
    } while ((t7 != 0));
    return;
}
