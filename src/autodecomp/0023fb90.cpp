// coverage: addr=0x0023fb90 symbol=func_0023fb90 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.23;m2c:near:92.0
#include "common/types.h"

extern "C" u32 D_0035ebe0 asm("D_0035ebe0");

// 0x0023fb90 func_0023fb90
void func_0023fb90(u32 a0) asm("func_0023fb90");
void func_0023fb90(u32 a0) {
    if (((s32)(a0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ebe0)) + 4))))(*(u32*)(&D_0035ebe0), a0);
    }
    return;
}
