// coverage: addr=0x00236d10 symbol=_Z13func_00236d10Pv size=76 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.84;m2c:near:88.9
#include "common/types.h"

extern "C" u32 D_0035e440 asm("D_0035e440");
extern "C" u32 D_0035ea40 asm("D_0035ea40");

// 0x00236d10 func_00236d10(void*)
void lift_00236d10() asm("_Z13func_00236d10Pv");
void lift_00236d10() {
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7;
    t4 = 0x3500;
    t5 = 0x3600;
    t6 = 0x3f;
    t7 = (u32)&D_0035e440;
    do {
        *(u8*)(t7) = 0;
        *(u32*)((t7 + 4)) = 0;
        *(u32*)((t7 + 8)) = 0;
        *(u32*)((t7 + 0x10)) = t5;
        *(u32*)((t7 + 0x14)) = t4;
        t4 = (t4 + 4);
        t5 = (t5 + 0x20);
        t6 = (t6 + -1);
        t7 = (t7 + 0x18);
    } while (((s32)(t6) >= 0));
    *(u32*)(&D_0035ea40) = 1;
    return;
}
