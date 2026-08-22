// coverage: addr=0x001e7cc0 symbol=func_001e7cc0 size=96 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.92;ghidra:near:71.88
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" void func_001e7798(u32, u32) asm("func_001e7798");
extern "C" void func_001e7be0(u32) asm("func_001e7be0");

// 0x001e7cc0 func_001e7cc0
void func_001e7cc0(u32 a0) asm("func_001e7cc0");
void func_001e7cc0(u32 a0) {
    u32 a0_0;
    u32 s0;
    a0_0 = *(u32*)((a0 + 0x74));
    while (((s32)(a0_0) != 0)) {
        s0 = *(u32*)(a0_0);
        func_001e7be0(a0_0);
        a0_0 = s0;
    }
    *(u32*)((a0 + 0x74)) = 0;
    if (((s32)(*(u32*)((a0 + 0x80))) != 0)) {
        func_001e7798(*(u32*)(&D_01d9e6e4), *(u32*)((a0 + 0x80)));
        *(u32*)((a0 + 0x80)) = 0;
    }
    return;
}
