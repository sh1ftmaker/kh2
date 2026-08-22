// coverage: addr=0x00145c28 symbol=func_00145c28 size=64 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:74.71;ghidra:near:57.5
#include "common/types.h"


// 0x00145c28 func_00145c28
void func_00145c28(u32 a0, u8 a1) asm("func_00145c28");
void func_00145c28(u32 a0, u8 a1) {
    u32 t4;
    u32 t5;
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)((a0 + 0x14))) > 0)) {
        t4 = 0;
        t5 = *(u32*)((a0 + 0x14));
        t7 = *(u32*)((a0 + 8));
        do {
            if ((*(u8*)(((t4 + *(u32*)((a0 + 8))) + 1)) == a1)) {
                *(u8*)((t4 + *(u32*)((a0 + 8)))) = 0;
            }
            t7_0 = (t4 + *(u32*)((a0 + 8)));
            t4 = (t4 + 0x1c);
            t5 = (t5 + -1);
            t7 = t7_0;
        } while ((t5 != 0));
    }
    return;
}
