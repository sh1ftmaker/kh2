// coverage: addr=0x0022f4f0 symbol=func_0022f4f0 size=56 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:61.39;m2c:near:57.56;e3:near:19.82
#include "common/types.h"

extern "C" u32 D_0035dcfc asm("D_0035dcfc");

// 0x0022f4f0 func_0022f4f0
u32 func_0022f4f0(u32 a0) asm("func_0022f4f0");
u32 func_0022f4f0(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t6;
    t5 = 0;
    t7 = *(u32*)(*(u32*)(&D_0035dcfc));
    t6 = *(u32*)(&D_0035dcfc);
    do {
        if ((*(u32*)((t6 + (t5 * 0x28))) == a0)) {
            return ((t6 + (t5 * 0x28)) + 0x17);
        }
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(0x60));
    } while ((t7 != 0));
    return 0;
}
