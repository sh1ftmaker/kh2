// coverage: addr=0x002ef8d0 symbol=func_002ef8d0 size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:compile:0.0
#include "common/types.h"

extern "C" u32 D_002ef928 asm("D_002ef928");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x002ef8d0 func_002ef8d0
void func_002ef8d0(u32 a0, u32 a1) asm("func_002ef8d0");
void func_002ef8d0(u32 a0, u32 a1) {
    u32 v0;
    if (((s32)(*(u32*)((a0 + 0xc))) == 0)) {
        v0 = func_00102788(a1, *(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)));
        *(u32*)((a0 + 0xc)) = v0;
        *(u32*)((v0 + 4)) = a0;
        *(u32*)((*(u32*)((a0 + 0xc)) + 0x30)) = (u32)&D_002ef928;
    }
    return;
}
