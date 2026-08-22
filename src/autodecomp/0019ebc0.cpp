// coverage: addr=0x0019ebc0 symbol=func_0019ebc0 size=96 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:79.4;ghidra:near:68.36
#include "common/types.h"

extern "C" u32 D_0034ecc8 asm("D_0034ecc8");
extern "C" void func_0015ee10(u32) asm("func_0015ee10");

// 0x0019ebc0 func_0019ebc0
void func_0019ebc0() asm("func_0019ebc0");
void func_0019ebc0() {
    u32 s0;
    u32 t7;
    u8 t7_0;
    s0 = 0;
    t7 = *(u64*)(&D_0034ecc8);
    do {
        t7_0 = (((u64)(*(u64*)(&D_0034ecc8)) >> s0) & 1);
        if (((t7_0 & 0xff) != 0)) {
            func_0015ee10(s0);
        }
        s0 = (s0 + 1);
        t7 = ((s32)(s0) < (s32)(0x40));
    } while ((t7 != 0));
    return;
}
