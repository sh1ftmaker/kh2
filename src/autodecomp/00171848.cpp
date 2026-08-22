// coverage: addr=0x00171848 symbol=func_00171848 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:94.29;e3:near:27.04
#include "common/types.h"

extern "C" u32 func_00177998(u32) asm("func_00177998");
extern "C" void func_0019ba60(u32) asm("func_0019ba60");

// 0x00171848 func_00171848
void func_00171848(u32 a0) asm("func_00171848");
void func_00171848(u32 a0) {
    if (((s32)(*(u32*)(a0)) != 0)) {
        func_0019ba60(*(u32*)((*(u32*)(a0) + 4)));
    }
    if (((s32)((*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x588)) & 4)) != 0)) {
        func_00177998(*(u32*)((*(u32*)(a0) + 4)));
        return;
    } else {
        return;
    }
}
