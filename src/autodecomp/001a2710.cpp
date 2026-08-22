// coverage: addr=0x001a2710 symbol=func_001a2710 size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.44;m2c:near:94.44
#include "common/types.h"

extern "C" void func_0013dad0(u32) asm("func_0013dad0");

// 0x001a2710 func_001a2710
void func_001a2710(u32 a0) asm("func_001a2710");
void func_001a2710(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0x250)) & 1)) != 0)) {
        func_0013dad0(a0);
        *(u32*)((a0 + 0x250)) = (*(u32*)((a0 + 0x250)) & 0xfffffffe);
    }
    return;
}
