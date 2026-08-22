// coverage: addr=0x001c2ba8 symbol=func_001c2ba8 size=88 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.95;ghidra:near:95.65;e3:near:46.72
#include "common/types.h"

extern "C" u32 D_01d49530 asm("D_01d49530");
extern "C" u32 func_001dc9d0(u32) asm("func_001dc9d0");

// 0x001c2ba8 func_001c2ba8
void func_001c2ba8() asm("func_001c2ba8");
void func_001c2ba8() {
    u32 s0;
    u32 s1;
    s0 = (u32)&D_01d49530;
    s1 = 7;
    do {
        if (((s32)(*(u32*)(s0)) != 0)) {
            if ((func_001dc9d0(*(u32*)(s0)) == 0)) {
                *(u32*)(s0) = 0;
            }
        }
        s0 = (s0 + 4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
