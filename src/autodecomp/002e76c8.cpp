// coverage: addr=0x002e76c8 symbol=_Z13func_002e76c8Pv size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.67;m2c:near:82.22
#include "common/types.h"


// 0x002e76c8 func_002e76c8(void*)
void lift_002e76c8(u32 a0) asm("_Z13func_002e76c8Pv");
void lift_002e76c8(u32 a0) {
    u32 t6;
    u32 t5;
    u32 t7;
    u32 a0_0;
    *(u8*)(a0) = 1;
    *(u8*)((a0 + 1)) = 0;
    *(u8*)((a0 + 2)) = 0;
    *(u8*)((a0 + 0x8a)) = 0;
    *(u8*)((a0 + 0x8b)) = 1;
    *(u8*)((a0 + 0x8c)) = 1;
    t6 = a0;
    t5 = 0xf;
    do {
        *(u8*)((t6 + 0x9a)) = 0;
        *(u8*)((t6 + 0xaa)) = 0;
        t5 = (t5 + -1);
        t6 = (t6 + 1);
    } while (((s32)(t5) >= 0));
    t7 = 0x7f;
    a0_0 = (a0 + 0xba);
    do {
        *(u8*)(a0_0) = 0;
        a0_0 = (a0_0 + 1);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    return;
}
