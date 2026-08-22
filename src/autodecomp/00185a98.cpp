// coverage: addr=0x00185a98 symbol=func_00185a98 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.0;m2c:near:98.0;corpus:near:82.83;e3:near:0.0
#include "common/types.h"


// 0x00185a98 func_00185a98
void func_00185a98(u32 a0) asm("func_00185a98");
void func_00185a98(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x9f4))) + 0x4c))))(*(u32*)((a0 + 0x9f4)));
}
