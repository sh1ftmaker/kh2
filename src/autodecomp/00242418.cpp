// coverage: addr=0x00242418 symbol=func_00242418 size=92 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_0035ecc0 asm("D_0035ecc0");
extern "C" u32 D_0035ecc4 asm("D_0035ecc4");

// 0x00242418 func_00242418
u32 func_00242418(u32 a0, u32 a1) asm("func_00242418");
u32 func_00242418(u32 a0, u32 a1) {
    u32 a1_0;
    u32 t3;
    u32 t4;
    u32 t7;
    u32 t5;
    a1_0 = (a1 + -1);
    if (((s32)(a1_0) >= 0)) {
        t3 = 0x360000;
        t4 = *(u32*)(&D_0035ecc0);
        do {
            t7 = (((*(u32*)((t3 + -0x133c)) >> 0x18) ^ *(u8*)(a0)) << 2);
            t5 = (*(u32*)((t3 + -0x133c)) << 8);
            *(u32*)((t3 + -0x133c)) = (t5 ^ *(u32*)((t7 + t4)));
            a0 = (a0 + 1);
            a1_0 = (a1_0 + -1);
        } while (((s32)(a1_0) >= 0));
    }
    return ~((0 | *(u32*)(&D_0035ecc4)));
}
