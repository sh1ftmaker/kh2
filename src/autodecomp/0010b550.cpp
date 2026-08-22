// coverage: addr=0x0010b550 symbol=func_0010b550 size=20 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.6;m2c:near:76.0
#include "common/types.h"


// 0x0010b550 func_0010b550
void func_0010b550(u32 a0) asm("func_0010b550");
void func_0010b550(u32 a0) {
    *(u8*)(a0) = 0;
    *(u8*)((a0 + 1)) = 0;
    *(u32*)((a0 + 4)) = 0xffffffff;
}
