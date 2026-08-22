// coverage: addr=0x0010c828 symbol=func_0010c828 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.0;m2c:near:98.0;corpus:near:82.83;e3:near:0.0
#include "common/types.h"


// 0x0010c828 func_0010c828
void func_0010c828(u32 a0) asm("func_0010c828");
void func_0010c828(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0xb60))) + 0x18))))(*(u32*)((a0 + 0xb60)));
}
