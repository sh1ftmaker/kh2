// coverage: addr=0x00250928 symbol=func_00250928 size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:95.36;m2c:near:78.39;e3:near:2.75
#include "common/types.h"

extern "C" u32 D_0035ee48 asm("D_0035ee48");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00250928 func_00250928
void func_00250928() asm("func_00250928");
void func_00250928() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 4;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035ee48) + s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035ee48))) + 0x14))))(s0 + *(u32*)(&D_0035ee48));
        }
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
