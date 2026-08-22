// coverage: addr=0x00177a78 symbol=func_00177a78 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:78.67
#include "common/types.h"

extern "C" u32 func_00177a38(u32) asm("func_00177a38");

// 0x00177a78 func_00177a78
u32 func_00177a78(u32 a0) asm("func_00177a78");
u32 func_00177a78(u32 a0) {
    u32 v0;
    v0 = func_00177a38(a0);
    if (((u32)((*(u8*)((a0 + 0xb05)) & 0xff)) < (u32)(0x64))) {
        *(u8*)((a0 + 0xb05)) = (*(u8*)((a0 + 0xb05)) + 1);
    }
    return v0;
}
