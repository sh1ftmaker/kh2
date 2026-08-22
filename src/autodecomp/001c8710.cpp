// coverage: addr=0x001c8710 symbol=func_001c8710 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:96.25
#include "common/types.h"

extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 func_0016c5b8(u32, u32) asm("func_0016c5b8");
extern "C" void func_0014c9d8(u32) asm("func_0014c9d8");
extern "C" void func_001bbe38(u32) asm("func_001bbe38");
extern "C" void func_001c8d80(u32, u32) asm("func_001c8d80");

// 0x001c8710 func_001c8710
u32 func_001c8710() asm("func_001c8710");
u32 func_001c8710() {
    func_001c8d80((u32)&D_00351ec0, 3);
    func_0014c9d8(0x10);
    func_001bbe38(1);
    return func_0016c5b8(2, 0xfff7ffdc);
}
