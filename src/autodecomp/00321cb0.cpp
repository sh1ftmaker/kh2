// coverage: addr=0x00321cb0 symbol=_Z16u_call4_00321cb0jjjj size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:32.69;m2c:compile:0.0
#include "common/types.h"


// 0x00321cb0 u_call4_00321cb0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00321cb0(u32 a0, u32 a1) asm("_Z16u_call4_00321cb0jjjj");
u32 lift_00321cb0(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    t6 = 0;
    while ((t7 = (t6 == 0) ? *(u32*)(a0) : *(u32*)((t6 + 0x14))), (t6 = t7), ((s32)(t7) != 0)) {
        if ((t7 == a1)) {
            return 1;
        }
    }
    return 0;
}
