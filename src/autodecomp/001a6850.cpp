// coverage: addr=0x001a6850 symbol=func_001a6850 size=144 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:80.58;ghidra:near:77.48;m2c:near:69.39
#include "common/types.h"

extern "C" u32 D_01c6cb20 asm("D_01c6cb20");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");

// 0x001a6850 func_001a6850
u32 func_001a6850() asm("func_001a6850");
u32 func_001a6850() {
    u32 s0;
    u32 a0_0;
    u32 a0_1;
    u32 t7;
    u32 s1;
    u32 t7_2;
    s0 = *(u32*)(&D_01c6cb20);
    if (((s32)(s0) != 0)) {
        a0_0 = *(u32*)(s0);
        do {
            a0_1 = *(u32*)(s0);
            t7 = *(u32*)((a0_1 + 0x1c));
            if (((t7 & 4) == 0)) {
                s1 = *(u32*)((a0_1 + 0x38));
                if ((func_0019ba60(s1) != 0)) {
                    t7_2 = *(u32*)((s1 + 0x588));
                    if (((t7_2 & 0x4000) != 0)) {
                        if (((s32)((t7_2 & 0x400000)) == 0)) {
                            return 1;
                        }
                    }
                }
            }
            s0 = *(u32*)((s0 + 0xc));
        } while ((s0 != 0));
    }
    return 0;
}
