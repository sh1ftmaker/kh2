// coverage: addr=0x00227a28 symbol=func_00227a28 size=56 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:57.62;ghidra:near:48.6;e3:near:42.07
#include "common/types.h"

extern "C" u32 D_0035dcf0 asm("D_0035dcf0");

// 0x00227a28 func_00227a28
u32 func_00227a28() asm("func_00227a28");
u32 func_00227a28() {
    u32 t5;
    u32 t7;
    u32 t6;
    t5 = 0;
    t7 = *(u32*)((*(u32*)(&D_0035dcf0) + 4));
    t6 = *(u32*)(&D_0035dcf0);
    do {
        if (((s32)(*(u32*)(((t6 + (t5 * 0x54)) + 4))) == 0)) {
            return (t6 + (t5 * 0x54));
        }
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(0x80));
    } while ((t7 != 0));
    return 0;
}
