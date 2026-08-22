// coverage: addr=0x0013d750 symbol=func_0013d750 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:72.58
#include "common/types.h"

extern "C" u32 D_003484a0 asm("D_003484a0");
extern "C" u32 func_001024a8(u32) asm("func_001024a8");
extern "C" void func_0013b128(u32) asm("func_0013b128");
extern "C" void func_0013d620(u32) asm("func_0013d620");
extern "C" void func_0013d7c0() asm("func_0013d7c0");

// 0x0013d750 func_0013d750
u32 func_0013d750(u32 a0) asm("func_0013d750");
u32 func_0013d750(u32 a0) {
    func_0013d620(a0);
    func_0013b128(*(u32*)(&D_003484a0));
    *(u32*)((*(u32*)(&D_003484a0) + 0x2a4)) = 0;
    func_0013d7c0();
    return func_001024a8(a0);
}
