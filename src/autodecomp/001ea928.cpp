// coverage: addr=0x001ea928 symbol=func_001ea928 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;m2c:near:94.63;ghidra:near:88.5;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" void func_001e7798(u32, u32) asm("func_001e7798");

// 0x001ea928 func_001ea928
void func_001ea928(u32 a0, u32 a1) asm("func_001ea928");
void func_001ea928(u32 a0, u32 a1) {
    u32 s0;
    s0 = ((a0 + *(u32*)(*(u32*)((a1 + 0xc)))) + 0xa0);
    if (((s32)(*(u32*)((s0 + 0xc))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0xc)));
        *(u32*)((s0 + 0xc)) = 0;
    }
    return;
}
