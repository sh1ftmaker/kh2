// coverage: addr=0x001c0a80 symbol=func_001c0a80 size=44 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:98.0;ghidra:near:85.91;m2c:compile:0.0
#include "common/types.h"


// 0x001c0a80 func_001c0a80
void func_001c0a80(u32 a0) asm("func_001c0a80");
void func_001c0a80(u32 a0) {
    u32 t6;
    u32 t7;
    t6 = 0;
    t7 = a0;
    do {
        *(u8*)((a0 + t6)) = 0;
        t6 = (t6 + 1);
        t7 = ((s32)(t6) < (s32)(0x13));
    } while ((t7 != 0));
    return;
}
