// coverage: addr=0x00177a38 symbol=func_00177a38 size=32 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:60.0
#include "common/types.h"


// 0x00177a38 func_00177a38
void func_00177a38(u32 a0) asm("func_00177a38");
void func_00177a38(u32 a0) {
    if (((u32)((*(u8*)((a0 + 0xb04)) & 0xff)) < (u32)(0x64))) {
        *(u8*)((a0 + 0xb04)) = (*(u8*)((a0 + 0xb04)) + 1);
    }
    return;
}
