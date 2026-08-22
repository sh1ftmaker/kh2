// coverage: addr=0x001a1018 symbol=func_001a1018 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.89;ghidra:near:96.44
#include "common/types.h"

extern "C" u32 func_001a0e78(u32) asm("func_001a0e78");
extern "C" u32 func_001db5a8(u32) asm("func_001db5a8");
extern "C" void func_001a0ee0(u32, u32) asm("func_001a0ee0");

// 0x001a1018 func_001a1018
u32 func_001a1018(u32 a0) asm("func_001a1018");
u32 func_001a1018(u32 a0) {
    u32 s1;
    s1 = func_001a0e78(a0);
    func_001a0ee0(s1, func_001db5a8(a0));
    return s1;
}
