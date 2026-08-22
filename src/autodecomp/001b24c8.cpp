// coverage: addr=0x001b24c8 symbol=func_001b24c8 size=84 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:95.36;e3:near:77.71
#include "common/types.h"

extern "C" u32 D_01d48c80 asm("D_01d48c80");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_001b2488(u32) asm("func_001b2488");

// 0x001b24c8 func_001b24c8
void func_001b24c8() asm("func_001b24c8");
void func_001b24c8() {
    u32 s0;
    u32 s1;
    s0 = *(u32*)(&D_01d48c80);
    while (((s32)(s0) != 0)) {
        s1 = *(u32*)((s0 + 0x18));
        if (((s32)(s0) != 0)) {
            func_001b2488(s0);
            func_00105110(s0);
        }
        s0 = s1;
    }
    return;
}
