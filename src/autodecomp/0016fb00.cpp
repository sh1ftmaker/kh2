// coverage: addr=0x0016fb00 symbol=func_0016fb00 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.33;m2c:near:71.46
#include "common/types.h"

extern "C" u32 D_0034dc98 asm("D_0034dc98");

// 0x0016fb00 func_0016fb00
void func_0016fb00(u32 a0) asm("func_0016fb00");
void func_0016fb00(u32 a0) {
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034dc98)) + 4))))(*(u32*)(&D_0034dc98), a0);
}
