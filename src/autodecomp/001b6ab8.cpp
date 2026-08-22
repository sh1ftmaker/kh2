// coverage: addr=0x001b6ab8 symbol=func_001b6ab8 size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:68.52
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");
extern "C" void func_001a17c8(u32) asm("func_001a17c8");
extern "C" void func_001a1cc0(u32, u32, u32) asm("func_001a1cc0");

// 0x001b6ab8 func_001b6ab8
void func_001b6ab8(u32 a0) asm("func_001b6ab8");
void func_001b6ab8(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x14))) != 0)) {
        func_001a1cc0(*(u32*)((a0 + 0x14)), *(u32*)((a0 + 4)), *(u8*)((func_00189200((u32)&D_0032e020, *(u32*)((a0 + 4))) + 2)));
        func_001a17c8(*(u32*)((a0 + 0x14)));
        *(u32*)((a0 + 0x14)) = 0;
    }
    return;
}
