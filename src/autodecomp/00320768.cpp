// coverage: addr=0x00320768 symbol=func_00320768 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:99.93;ghidra:near:87.19
#include "common/types.h"

extern "C" u32 D_00351228 asm("D_00351228");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001d48b0(u32) asm("func_001d48b0");

// 0x00320768 func_00320768
u32 func_00320768(u32 a0) asm("func_00320768");
u32 func_00320768(u32 a0) {
    *(u32*)(a0) = (u32)&D_00351228;
    func_001d48b0(a0 + 0x9c0);
    return func_00106420(a0);
}
