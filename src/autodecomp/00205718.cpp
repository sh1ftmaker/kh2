// coverage: addr=0x00205718 symbol=func_00205718 size=128 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:near:99.81;ghidra:near:93.41;m2c:near:91.26
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" void func_001e7798(u32, u32) asm("func_001e7798");

// 0x00205718 func_00205718
void func_00205718(u32 a0, u32 a1) asm("func_00205718");
void func_00205718(u32 a0, u32 a1) {
    u32 s0;
    s0 = ((a0 + *(u32*)((*(u32*)((a1 + 0xc)) + 8))) + 0xa0);
    if (((s32)(*(u32*)((s0 + 0x50))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0x50)));
        *(u32*)((s0 + 0x50)) = 0;
    }
    if (((s32)(*(u32*)((s0 + 0x54))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0x54)));
        *(u32*)((s0 + 0x54)) = 0;
    }
    if (((s32)(*(u32*)((s0 + 0x58))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((s0 + 0x58)));
        *(u32*)((s0 + 0x58)) = 0;
    }
    return;
}
