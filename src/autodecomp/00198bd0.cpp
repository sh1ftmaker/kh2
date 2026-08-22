// coverage: addr=0x00198bd0 symbol=_Z16ctarget_00198bd0jjjj size=88 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:74.52;ghidra:near:68.54
#include "common/types.h"

extern "C" u32 D_01c61b48 asm("D_01c61b48");

// 0x00198bd0 ctarget_00198bd0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00198bd0(u32 a0, u32 a1) asm("_Z16ctarget_00198bd0jjjj");
u32 lift_00198bd0(u32 a0, u32 a1) {
    u32 t4;
    u32 t6;
    u32 t7;
    t4 = 0;
    t6 = (u32)&D_01c61b48;
    t7 = *(u32*)((u32)&D_01c61b48);
    do {
        if ((*(u32*)(t6) == a0)) {
            if ((*(u32*)((t6 + 4)) == a1)) {
                return t6;
            }
            if (((s32)(a1) < 0) || ((s32)(*(u32*)((t6 + 4))) < 0)) {
                t4 = t6;
            }
        }
        t6 = (t6 + 0x58);
        t7 = ((s32)(t6) < (s32)(((u32)&D_01c61b48 + 0x580)));
    } while ((t7 != 0));
    return t4;
}
