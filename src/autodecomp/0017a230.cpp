// coverage: addr=0x0017a230 symbol=func_0017a230 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:84.23
#include "common/types.h"

extern "C" u32 func_001776f8(u32) asm("func_001776f8");
extern "C" void func_001bdab0(u32) asm("func_001bdab0");

// 0x0017a230 func_0017a230
u32 func_0017a230(u32 a0) asm("func_0017a230");
u32 func_0017a230(u32 a0) {
    func_001bdab0(*(u32*)((a0 + 0xb44)));
    return func_001776f8(a0);
}
