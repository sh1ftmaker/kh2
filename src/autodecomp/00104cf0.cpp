// coverage: addr=0x00104cf0 symbol=func_00104cf0 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:70.0;m2c:near:45.67
#include "common/types.h"


// 0x00104cf0 func_00104cf0
void func_00104cf0(u32 a0, u32 a1) asm("func_00104cf0");
void func_00104cf0(u32 a0, u32 a1) {
    if (((*(u16*)(a1) & 0xffff) != 0xffff)) {
        *(u16*)(a0) = *(u16*)(a1);
    }
    if (((*(u16*)((a1 + 2)) & 0xffff) != 0xffff)) {
        *(u16*)((a0 + 2)) = *(u16*)((a1 + 2));
    }
    if (((*(u16*)((a1 + 4)) & 0xffff) != 0xffff)) {
        *(u16*)((a0 + 4)) = *(u16*)((a1 + 4));
    }
    return;
}
