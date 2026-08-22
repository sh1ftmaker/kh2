// coverage: addr=0x001e01e8 symbol=func_001e01e8 size=72 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.78;m2c:near:89.67
#include "common/types.h"


// 0x001e01e8 func_001e01e8
void func_001e01e8(u32 a0, u32 a1, u32 a2) asm("func_001e01e8");
void func_001e01e8(u32 a0, u32 a1, u32 a2) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    t5 = *(u32*)((a0 + 0xc));
    while (((s32)(t5) != 0)) {
        if (((s32)((*(u32*)((*(u32*)((t5 + 0x44)) + 0x10)) & 0x200)) == 0)) {
            if ((*(u32*)((t5 + 0x48)) == a1)) {
                t7 = *(u32*)((t5 + 0x48));
                *(u32*)((t5 + 0x48)) = a2;
            }
        }
        t7_0 = (t5 == 0) ? *(u32*)((a0 + 0xc)) : *(u32*)((t5 + 0x60));
        t5 = t7_0;
    }
    return;
}
