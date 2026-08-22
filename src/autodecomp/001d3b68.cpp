// coverage: addr=0x001d3b68 symbol=_Z16u_call0_001d3b68v size=84 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:95.36;e3:near:77.71
#include "common/types.h"

extern "C" u32 D_01d5ba20 asm("D_01d5ba20");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_001d3878(u32) asm("func_001d3878");

// 0x001d3b68 u_call0_001d3b68()
void lift_001d3b68() asm("_Z16u_call0_001d3b68v");
void lift_001d3b68() {
    u32 s0;
    u32 s1;
    s0 = *(u32*)(&D_01d5ba20);
    while (((s32)(s0) != 0)) {
        s1 = *(u32*)((s0 + 0x30));
        if (((s32)(s0) != 0)) {
            func_001d3878(s0);
            func_00105110(s0);
        }
        s0 = s1;
    }
    return;
}
