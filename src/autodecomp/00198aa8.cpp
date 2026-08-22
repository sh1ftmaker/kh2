// coverage: addr=0x00198aa8 symbol=func_00198aa8 size=56 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:85.12;ghidra:near:78.62
#include "common/types.h"


// 0x00198aa8 func_00198aa8
void func_00198aa8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00198aa8");
void func_00198aa8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 a3_0;
    u32 t6;
    u32 t7;
    if (((s32)(a3) == 0)) {
        a3_0 = ((s32)(*(u32*)((a0 + 0x9b4))) != 0) ? *(s16*)((*(u32*)((a0 + 0x9b4)) + 2)) : 0xffffffff;
        a3 = a3_0;
    }
    t6 = (a3 * 0x3e8);
    t7 = (a1 * 0xc);
    *(u32*)(((a0 + t7) + 0x9e4)) = (t6 + a2);
    return;
}
