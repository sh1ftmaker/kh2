// coverage: addr=0x001d1678 symbol=func_001d1678 size=28 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.57;m2c:near:99.57;corpus:near:97.14
#include "common/types.h"


// 0x001d1678 func_001d1678
void func_001d1678(u32 a0, u32 a1) asm("func_001d1678");
void func_001d1678(u32 a0, u32 a1) {
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 0xc)) = 1;
    *(u32*)((a0 + 0x10)) = a1;
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x28)) = 0;
}
