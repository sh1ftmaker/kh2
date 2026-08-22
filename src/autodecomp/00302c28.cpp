// coverage: addr=0x00302c28 symbol=func_00302c28 size=92 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:74.16;m2c:near:50.37
#include "common/types.h"

extern "C" u32 D_00304de8 asm("D_00304de8");
extern "C" u32 D_00304e48 asm("D_00304e48");
extern "C" u32 D_00304ec8 asm("D_00304ec8");
extern "C" u32 D_00304f30 asm("D_00304f30");

// 0x00302c28 func_00302c28
void func_00302c28(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00302c28");
void func_00302c28(u32 a0, u32 a1, u32 a2, u32 a3) {
    *(u32*)(a0) = 0;
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 8)) = 0;
    *(u16*)((a0 + 0xc)) = a1;
    *(u16*)((a0 + 0xe)) = a2;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0x14)) = 0;
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x1c)) = a0;
    *(u32*)((a0 + 0x20)) = (u32)&D_00304de8;
    *(u32*)((a0 + 0x24)) = (u32)&D_00304e48;
    *(u32*)((a0 + 0x28)) = (u32)&D_00304ec8;
    *(u32*)((a0 + 0x2c)) = (u32)&D_00304f30;
    *(u32*)((a0 + 0x54)) = a3;
}
