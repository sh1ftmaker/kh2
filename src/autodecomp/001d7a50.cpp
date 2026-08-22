// coverage: addr=0x001d7a50 symbol=_Z16wtarget_001d7a50jjjj size=56 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.14;m2c:near:97.07;e3:near:32.88
#include "common/types.h"

extern "C" u32 func_001d7b10(u32) asm("func_001d7b10");

// 0x001d7a50 wtarget_001d7a50(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001d7a50(u32 a0) asm("_Z16wtarget_001d7a50jjjj");
void lift_001d7a50(u32 a0) {
    u32 t6;
    t6 = 3;
    do {
        *(u32*)(((a0 + ((t6 - 3) * -8)) + 4)) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    func_001d7b10(a0);
    return;
}
