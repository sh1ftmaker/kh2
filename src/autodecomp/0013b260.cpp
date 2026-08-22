// coverage: addr=0x0013b260 symbol=func_0013b260 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0013b1a0(u32) asm("func_0013b1a0");
extern "C" void func_0013b1d0(u32) asm("func_0013b1d0");
extern "C" void func_0013b258(u32) asm("func_0013b258");
extern "C" void func_0013d208(u32) asm("func_0013d208");

// 0x0013b260 func_0013b260
u32 func_0013b260(u32 a0) asm("func_0013b260");
u32 func_0013b260(u32 a0) {
    func_0013b258(a0);
    func_0013b1d0(a0);
    func_0013d208(a0);
    return func_0013b1a0(a0);
}
