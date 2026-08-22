// coverage: addr=0x00207050 symbol=func_00207050 size=128 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:near:99.78;ghidra:near:93.41;m2c:near:91.26
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" void func_001e7798(u32, u32) asm("func_001e7798");

// 0x00207050 func_00207050
void func_00207050(u32 a0, u32 a1) asm("func_00207050");
void func_00207050(u32 a0, u32 a1) {
    u32 s0;
    s0 = ((a0 + *(u32*)(*(u32*)((a1 + 0xc)))) + 0xa0);
    if (((s32)(*(u32*)((s0 + 0xc))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0xc)));
        *(u32*)((s0 + 0xc)) = 0;
    }
    if (((s32)(*(u32*)((s0 + 0x10))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0x10)));
        *(u32*)((s0 + 0x10)) = 0;
    }
    if (((s32)(*(u32*)((s0 + 0x14))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0x14)));
        *(u32*)((s0 + 0x14)) = 0;
    }
    return;
}
