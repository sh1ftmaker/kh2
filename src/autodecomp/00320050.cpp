// coverage: addr=0x00320050 symbol=func_00320050 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00350e60 asm("D_00350e60");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001b0188(u32) asm("func_001b0188");

// 0x00320050 func_00320050
u32 func_00320050(u32 a0) asm("func_00320050");
u32 func_00320050(u32 a0) {
    *(u32*)(a0) = (u32)&D_00350e60;
    func_001b0188(a0);
    return func_00106420(a0);
}
