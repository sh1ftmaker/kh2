// coverage: addr=0x00230838 symbol=func_00230838 size=60 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:70.88;e3:near:15.77
#include "common/types.h"

extern "C" u32 D_0035dce8 asm("D_0035dce8");

// 0x00230838 func_00230838
void func_00230838(u32 a0) asm("func_00230838");
void func_00230838(u32 a0) {
    u32 t4;
    u32 t6;
    t4 = 0;
    t6 = *(u32*)(&D_0035dce8);
    do {
        if (((s32)(*(u32*)(((t4 << 3) + *(u32*)(&D_0035dce8)))) == 0)) {
            *(u32*)(((t4 << 3) + *(u32*)(&D_0035dce8))) = a0;
            return;
        }
        t4 = (t4 + 1);
        t6 = ((s32)(t4) < (s32)(0x40));
    } while ((t6 != 0));
    return;
}
