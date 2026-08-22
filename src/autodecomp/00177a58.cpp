// coverage: addr=0x00177a58 symbol=func_00177a58 size=28 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.0;m2c:near:62.14
#include "common/types.h"


// 0x00177a58 func_00177a58
void func_00177a58(u32 a0) asm("func_00177a58");
void func_00177a58(u32 a0) {
    if (((*(u8*)((a0 + 0xb04)) & 0xff) != 0)) {
        *(u8*)((a0 + 0xb04)) = (*(u8*)((a0 + 0xb04)) + -1);
    }
    return;
}
