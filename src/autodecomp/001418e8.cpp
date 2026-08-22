// coverage: addr=0x001418e8 symbol=func_001418e8 size=64 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:74.71;ghidra:near:53.89
#include "common/types.h"


// 0x001418e8 func_001418e8
void func_001418e8(u32 a0, u8 a1) asm("func_001418e8");
void func_001418e8(u32 a0, u8 a1) {
    u32 t4;
    u32 t5;
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)((a0 + 0x24))) > 0)) {
        t4 = 0;
        t5 = *(u32*)((a0 + 0x24));
        t7 = *(u32*)((a0 + 8));
        do {
            if ((*(u8*)(((t4 + *(u32*)((a0 + 8))) + 0x11)) == a1)) {
                *(u8*)(((t4 + *(u32*)((a0 + 8))) + 0x10)) = 0;
            }
            t7_0 = (t4 + *(u32*)((a0 + 8)));
            t4 = (t4 + 0x14);
            t5 = (t5 + -1);
            t7 = t7_0;
        } while ((t5 != 0));
    }
    return;
}
