// coverage: addr=0x0023fe28 symbol=func_0023fe28 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:99.23;m2c:near:92.0
#include "common/types.h"

extern "C" u32 D_0035ec84 asm("D_0035ec84");

// 0x0023fe28 func_0023fe28
void func_0023fe28(u32 a0) asm("func_0023fe28");
void func_0023fe28(u32 a0) {
    if (((s32)(a0) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ec84)) + 4))))(*(u32*)(&D_0035ec84), a0);
    }
    return;
}
