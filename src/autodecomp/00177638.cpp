// coverage: addr=0x00177638 symbol=func_00177638 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:99.8;m2c:near:76.88
#include "common/types.h"

extern "C" u32 func_00194108(u32, u32) asm("func_00194108");

// 0x00177638 func_00177638
u32 func_00177638(u32 a0) asm("func_00177638");
u32 func_00177638(u32 a0) {
    func_00194108(a0, 2);
    func_00194108(a0, 0xc);
    return func_00194108(a0, 0x16);
}
