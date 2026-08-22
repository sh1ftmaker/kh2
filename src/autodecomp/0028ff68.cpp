// coverage: addr=0x0028ff68 symbol=func_0028ff68 size=128 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.38;ghidra:near:89.71
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x0028ff68 func_0028ff68
void func_0028ff68(u32 a0) asm("func_0028ff68");
void func_0028ff68(u32 a0) {
    if (((s32)(*(u32*)(a0)) != 0)) {
        if ((func_00139d78(*(u32*)(a0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(a0)) + 0x14))))(*(u32*)(a0));
        }
    }
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        if ((func_00139d78(*(u32*)((a0 + 4))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 4))) + 0x14))))(*(u32*)((a0 + 4)));
        }
    }
    return;
}
