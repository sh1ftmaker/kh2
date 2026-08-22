// coverage: addr=0x00324718 symbol=func_00324718 size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:32.69;m2c:compile:0.0
#include "common/types.h"


// 0x00324718 func_00324718
u32 func_00324718(u32 a0, u32 a1) asm("func_00324718");
u32 func_00324718(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    t6 = 0;
    while ((t7 = (t6 == 0) ? *(u32*)(a0) : *(u32*)((t6 + 0x1c))), (t6 = t7), ((s32)(t7) != 0)) {
        if ((t7 == a1)) {
            return 1;
        }
    }
    return 0;
}
