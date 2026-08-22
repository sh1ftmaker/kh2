// coverage: addr=0x0022e330 symbol=func_0022e330 size=56 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:80.14;m2c:near:57.62;ghidra:near:48.6
#include "common/types.h"

extern "C" u32 D_0035dcf4 asm("D_0035dcf4");

// 0x0022e330 func_0022e330
u32 func_0022e330(u32 a0) asm("func_0022e330");
u32 func_0022e330(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t6;
    t5 = 0;
    t7 = *(u32*)((*(u32*)(&D_0035dcf4) + 4));
    t6 = *(u32*)(&D_0035dcf4);
    do {
        if ((*(u32*)(((t6 + (t5 * 0x34)) + 4)) == a0)) {
            return (t6 + (t5 * 0x34));
        }
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(0x60));
    } while ((t7 != 0));
    return 0;
}
