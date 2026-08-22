// coverage: addr=0x001c2b70 symbol=func_001c2b70 size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:92.64;corpus:near:79.92
#include "common/types.h"

extern "C" u32 D_01d49530 asm("D_01d49530");
extern "C" u32 D_01d49550 asm("D_01d49550");

// 0x001c2b70 func_001c2b70
void func_001c2b70() asm("func_001c2b70");
void func_001c2b70() {
    u32 t6;
    u32 t7;
    t6 = 7;
    t7 = (u32)&D_01d49530;
    do {
        *(u32*)((t7 + ((t6 - 7) * -4))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    *(u32*)(&D_01d49550) = 0;
    return;
}
