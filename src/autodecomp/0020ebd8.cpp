// coverage: addr=0x0020ebd8 symbol=func_0020ebd8 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:66.9;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00359780 asm("D_00359780");
extern "C" u32 D_00359788 asm("D_00359788");

// 0x0020ebd8 func_0020ebd8
void func_0020ebd8(u32 a0) asm("func_0020ebd8");
void func_0020ebd8(u32 a0) {
    u32 t7;
    if (((s32)(*(u32*)(&D_00359780)) > 0)) {
        t7 = ((*(u32*)(&D_00359780) << 2) + (u32)&D_00359788);
        if (((*(u32*)(t7) - *(u32*)((t7 + -4))) == a0)) {
            *(u32*)(&D_00359780) = (*(u32*)(&D_00359780) + -1);
            return;
        } else {
            *(u32*)(0) = 0;
            return;
        }
    } else {
        *(u32*)(0) = 0;
        return;
    }
}
