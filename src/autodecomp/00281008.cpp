// coverage: addr=0x00281008 symbol=_Z13func_00281008Pv size=80 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.95;ghidra:near:70.1
#include "common/types.h"

extern "C" void func_001a17c8(u32) asm("func_001a17c8");

// 0x00281008 func_00281008(void*)
void lift_00281008(u32 a0) asm("_Z13func_00281008Pv");
void lift_00281008(u32 a0) {
    u32 s1;
    u32 t7;
    s1 = 3;
    t7 = *(u32*)((a0 + 0x14));
    do {
        if (((s32)(*(u32*)(((a0 + ((s1 - 3) * -0x14)) + 0x14))) != 0)) {
            func_001a17c8(*(u32*)(((a0 + ((s1 - 3) * -0x14)) + 0x14)));
        }
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
