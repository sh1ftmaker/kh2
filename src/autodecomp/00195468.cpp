// coverage: addr=0x00195468 symbol=_Z16ctarget_00195468jjjj size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:69.23;ghidra:near:35.76
#include "common/types.h"


// 0x00195468 ctarget_00195468(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00195468(u32 a0, u32 a1) asm("_Z16ctarget_00195468jjjj");
u32 lift_00195468(u32 a0, u32 a1) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    t5 = 0;
    t7 = *(s16*)((a0 + 8));
    do {
        if ((*(s16*)(((a0 + (t5 * 2)) + 8)) == a1)) {
            return t5;
        }
        t7_0 = *(s16*)(((a0 + (t5 * 2)) + 8));
        t5 = (t5 + 1);
        t7 = t7_0;
    } while (((s32)(t5) < (s32)(0x100)));
    return 0xffffffff;
}
