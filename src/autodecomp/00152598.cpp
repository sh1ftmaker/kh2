// coverage: addr=0x00152598 symbol=func_00152598 size=28 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.43;m2c:near:94.29
#include "common/types.h"


// 0x00152598 func_00152598
u32 func_00152598(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00152598");
u32 func_00152598(u32 a0, u32 a1, u32 a2, u32 a3) {
    if (((s32)(a2) == 0)) {
        return *(u32*)(((a1 << 3) + a3));
    } else {
        return *(u32*)((((a1 << 3) + a3) + 4));
    }
}
