// coverage: addr=0x0024eb50 symbol=func_0024eb50 size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:54.67;m2c:near:54.63;e3:near:30.06
#include "common/types.h"

extern "C" u32 D_0035ee18 asm("D_0035ee18");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x0024eb50 func_0024eb50
void func_0024eb50() asm("func_0024eb50");
void func_0024eb50() {
    u32 s0;
    u32 s1;
    s0 = (u32)&D_0035ee18;
    s1 = 4;
    do {
        if (((s32)(*(u32*)(s0)) != 0)) {
            if ((func_00139d78(*(u32*)(s0)) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(s0)) + 0x14))))(*(u32*)(s0));
            } else {
                *(u32*)(s0) = 0;
            }
        }
        s0 = (s0 + 4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
