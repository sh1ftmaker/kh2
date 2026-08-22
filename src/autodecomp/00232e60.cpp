// coverage: addr=0x00232e60 symbol=func_00232e60 size=60 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:76.56;ghidra:near:53.83;e3:near:20.68
#include "common/types.h"

extern "C" u32 D_0035dcf8 asm("D_0035dcf8");

// 0x00232e60 func_00232e60
u32 func_00232e60() asm("func_00232e60");
u32 func_00232e60() {
    u32 t5;
    u32 t7;
    u32 t6;
    t5 = 0;
    t7 = *(u32*)(*(u32*)(&D_0035dcf8));
    t6 = *(u32*)(&D_0035dcf8);
    do {
        if ((*(u32*)((t6 + (t5 * 0x40))) == 0xffffffff)) {
            return (t6 + (t5 * 0x40));
        }
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(0x40));
    } while ((t7 != 0));
    return 0;
}
