// coverage: addr=0x00196b88 symbol=func_00196b88 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.4;m2c:near:70.04
#include "common/types.h"

extern "C" u32 D_00350378 asm("D_00350378");
extern "C" u32 D_00350379 asm("D_00350379");
extern "C" u32 D_01c61b40 asm("D_01c61b40");
extern "C" u32 func_00198d20(u32) asm("func_00198d20");

// 0x00196b88 func_00196b88
void func_00196b88() asm("func_00196b88");
void func_00196b88() {
    u32 v0;
    v0 = func_00198d20(0);
    *(u8*)(&D_00350379) = 0;
    if (((s32)(((u32)(((v0 & 0x3f) + -2)) < (u32)(2))) != 0)) {
        *(u8*)(&D_00350378) = 1;
        if (((s32)((v0 & 0xc0)) == 0)) {
            *(u8*)(&D_00350379) = 1;
        }
    } else {
        *(u8*)(&D_00350378) = 0;
    }
    *(u32*)(&D_01c61b40) = 1;
    return;
}
