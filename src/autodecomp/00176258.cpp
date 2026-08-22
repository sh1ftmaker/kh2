// coverage: addr=0x00176258 symbol=func_00176258 size=100 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.96;ghidra:near:41.88
#include "common/types.h"

extern "C" u32 func_0019c5d0(u32) asm("func_0019c5d0");

// 0x00176258 func_00176258
u32 func_00176258(u32 a0) asm("func_00176258");
u32 func_00176258(u32 a0) {
    u32 s1;
    u32 t7;
    s1 = 0;
    t7 = *(u32*)((a0 + 0xaf8));
    do {
        if (((s32)(*(u32*)(((a0 + (s1 * 4)) + 0xaf8))) != 0)) {
            if (((s32)(func_0019c5d0(*(u32*)(((a0 + (s1 * 4)) + 0xaf8)))) == 0)) {
                return 1;
            }
        }
        s1 = (s1 + 1);
        t7 = ((s32)(s1) < (s32)(2));
    } while ((t7 != 0));
    return 0;
}
