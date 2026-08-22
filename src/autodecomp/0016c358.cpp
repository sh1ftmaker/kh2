// coverage: addr=0x0016c358 symbol=func_0016c358 size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.95;m2c:near:83.9
#include "common/types.h"

extern "C" u32 func_001050c8(u32) asm("func_001050c8");

// 0x0016c358 func_0016c358
void func_0016c358(u32 a0) asm("func_0016c358");
void func_0016c358(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x8b0))) != 0)) {
        ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x8b0))) + 0x28))))(*(u32*)((a0 + 0x8b0)), func_001050c8(a0), *(u32*)((a0 + 0x670)));
        *(u32*)((a0 + 0x8b0)) = 0;
    }
    return;
}
