// coverage: addr=0x001d9820 symbol=func_001d9820 size=48 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.33;m2c:near:72.92
#include "common/types.h"

struct A12_u16 { u8 _p[0x12]; u16 m[1]; };
extern "C" u32 D_0032fafe asm("D_0032fafe");

// 0x001d9820 func_001d9820
void func_001d9820(u32 a0) asm("func_001d9820");
void func_001d9820(u32 a0) {
    if (((u32)((((A12_u16*)&D_0032fafe)->m[a0] & 0xffff)) < (u32)(0x3e7))) {
        ((A12_u16*)&D_0032fafe)->m[a0] = (((A12_u16*)&D_0032fafe)->m[a0] + 1);
    }
    return;
}
