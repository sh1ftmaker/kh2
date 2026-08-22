// coverage: addr=0x00295810 symbol=func_00295810 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.5;m2c:near:83.43
#include "common/types.h"

extern "C" u32 D_0035f58c asm("D_0035f58c");
extern "C" u32 D_0035f590 asm("D_0035f590");
extern "C" u32 D_0035f591 asm("D_0035f591");

// 0x00295810 func_00295810
void func_00295810() asm("func_00295810");
void func_00295810() {
    *(u8*)(&D_0035f590) = 0;
    *(u8*)(&D_0035f591) = 0;
    if (((s32)(*(u32*)(&D_0035f58c)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f58c)) + 4))))(*(u32*)(&D_0035f58c));
        *(u32*)(&D_0035f58c) = 0;
    }
    return;
}
