// coverage: addr=0x001ddc08 symbol=func_001ddc08 size=60 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.69;ghidra:near:69.33
#include "common/types.h"

extern "C" u32 D_00352ae0 asm("D_00352ae0");

// 0x001ddc08 func_001ddc08
void func_001ddc08() asm("func_001ddc08");
void func_001ddc08() {
    u32 t6;
    u32 t5;
    u32 t7;
    u32 t7_0;
    t6 = *(u32*)(&D_00352ae0);
    if (((s32)(t6) != 0)) {
        t5 = 0x4000000;
        t7 = *(u32*)((t6 + 8));
        do {
            t7_0 = *(u32*)((t6 + 8));
            *(u32*)((t6 + 8)) = (t7_0 | t5);
            t6 = *(u32*)((t6 + 0x28));
            t7 = (t7_0 | t5);
        } while ((t6 != 0));
    }
    return;
}
