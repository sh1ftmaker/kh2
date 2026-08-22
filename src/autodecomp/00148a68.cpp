// coverage: addr=0x00148a68 symbol=func_00148a68 size=84 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:69.75;m2c:near:68.46
#include "common/types.h"

extern "C" u32 D_003a99f0 asm("D_003a99f0");

// 0x00148a68 func_00148a68
void func_00148a68(u32 a0, u32 a1) asm("func_00148a68");
void func_00148a68(u32 a0, u32 a1) {
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t6;
    t3 = (u32)&D_003a99f0;
    t4 = *(u8*)((a1 + 0x11f));
    t5 = ((*(u8*)((a1 + 0x11f)) << 2) + (u32)&D_003a99f0);
    t6 = (*(u8*)((a1 + 0x11f)) << 2);
    while (((s32)(*(u32*)(t5)) != 0)) {
        t4 = (t4 + 1);
        t5 = (t5 + 4);
        t6 = (t4 << 2);
    }
    *(u32*)((t6 + t3)) = a1;
    *(u32*)((a0 + 0x537c)) = (*(u32*)((a0 + 0x537c)) + 1);
    return;
}
