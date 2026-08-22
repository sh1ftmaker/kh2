// coverage: addr=0x0028f4a0 symbol=func_0028f4a0 size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:52.36;ghidra:near:41.54
#include "common/types.h"

extern "C" u32 D_0035f470 asm("D_0035f470");

// 0x0028f4a0 func_0028f4a0
void func_0028f4a0(u32 a0) asm("func_0028f4a0");
void func_0028f4a0(u32 a0) {
    u32 t3;
    u32 t4;
    t3 = (u32)&D_0035f470;
    t4 = 0;
    do {
        *(u16*)(((t4 << 1) + t3)) = *(u16*)(((t4 << 1) + a0));
        t4 = (t4 + 1);
    } while (((s32)(((s32)(t4) < (s32)(3))) != 0));
    return;
}
