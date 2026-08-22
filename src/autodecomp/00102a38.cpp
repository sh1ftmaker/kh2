// coverage: addr=0x00102a38 symbol=func_00102a38 size=56 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:23.57;m2c:near:22.0
#include "common/types.h"


// 0x00102a38 func_00102a38
u32 func_00102a38(u32 a0, u32 a1) asm("func_00102a38");
u32 func_00102a38(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    t6 = 0;
    while ((t7 = (t6 == 0) ? *(u32*)((a0 + 8)) : *(u32*)((t6 + 0x38))), (t6 = t7), ((s32)(t7) != 0)) {
        if ((*(u32*)(t7) == a1)) {
            return 1;
        }
    }
    return 0;
}
